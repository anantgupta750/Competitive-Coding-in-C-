// Geometric Sum
// Send Feedback
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
// using recursion.
// Input format :
// Integer k
// Output format :
// Geometric sum (upto 5 decimal places)
// Constraints :
// 0 <= k <= 1000
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1.87500
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1.93750
// Explanation for Sample Input 1:
// 1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.87500


double geometricSum(int k) {
    // Write your code here
    if (k==0){
        return 1;
    }
    double ans=geometricSum(k-1);
    int p=1/2;
   if(ans==1){
    return ans+1/2.0f;
   }
    else{
    double x=pow( 2.0,  k);
        double y= 1/x;
        return ans+y;
    }
}


