// Check Palindrome (recursive)
// Send Feedback
// Check whether a given String S is a palindrome using recursion. Return true or false.
// Input Format :
// String S
// Output Format :
// 'true' or 'false'
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// racecar
// Sample Output 1:
// true
// Sample Input 2 :
// ninja
// Sample Output 2:
// false



bool helper(char input[],int start, int end){
    if(start>=end){
        return true;
    }
    if(input[start]!=input[end]){
        return false;
    }
    else{
        bool ans=helper(input,start+1,end-1);
        return ans;
    }
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int start=0;
    int end = strlen(input)-1;
    return helper(input,start,end);

}
