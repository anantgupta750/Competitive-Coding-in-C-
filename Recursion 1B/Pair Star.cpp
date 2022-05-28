// Pair Star
// Send Feedback
// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
// Input format :
// String S
// Output format :
// Modified string
// Constraints :
// 0 <= |S| <= 1000
// where |S| represents length of string S.
// Sample Input 1 :
// hello
// Sample Output 1:
// hel*lo
// Sample Input 2 :
// aaaa
// Sample Output 2 :
// a*a*a*a


int length(char input[])
{
    int len = 0;
    for(int i =0; input[i]!='\0'; i++)
        
    {
        len++;
    }
    return len;
}


void pairstar(char input[])
{
    if(length(input)==1||input[0]=='\0')
    {
        return;
    }
    pairstar(input+1);
    if(input[0]==input[1])
    {
        int l=length(input);
        for(int i=l;i>=1;i--)
        {
            input[i+1]=input[i];
        }
        input[1]='*';
        
        
    }
    return;
}
void pairStar(char input[])
{
    pairstar(input);
}