// Print Keypad Combinations Code
// Send Feedback
// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
// Input Format :
// Integer n
// Output Format :
// All possible strings in different lines
// Constraints :
// 1 <= n <= 10^6
// Sample Input:
// 23
// Sample Output:
// ad
// ae
// af
// bd
// be
// bf
// cd
// ce
// cf


#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
void printkeypad(int num,string output){
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    int x=num/10;
     int n=num%10;
    string input;
    switch(n)
    {
        case 2: input="abc";
            break;
        case 3: input="def";
            break;
        case 4: input="ghi";
            break;
        case 5: input="jkl";
            break;
        case 6:input="mno";
            break;
        case 7: input="pqrs";
            break;
        case 8: input="tuv";
            break;
        case 9: input="wxyz";
            break;
    }
    if(input.size()==3)
    {
    printkeypad(x,input[0]+output);
    printkeypad(x,input[1]+output);
    printkeypad(x,input[2]+output);
    }
     if(input.size()==4){
    printkeypad(x,input[0]+output);
    printkeypad(x,input[1]+output);
    printkeypad(x,input[2]+output);
    printkeypad(x,input[3]+output);
    }
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    if(num==0)
    {
        cout<<""<<endl;
        return;
    }
    string output="";
    printkeypad(num,output);
}