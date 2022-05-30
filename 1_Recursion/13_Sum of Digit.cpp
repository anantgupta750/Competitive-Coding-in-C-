// Sum of digits (recursive)
// Send Feedback
// Write a recursive function that returns the sum of the digits of a given integer.
// Input format :
// Integer N
// Output format :
// Sum of digits of N
// Constraints :
// 0 <= N <= 10^9


int sumOfDigits(int n) {
    // Write your code here
    if(n<10){
        return n;
    }
    int sum=sumOfDigits(n/10);
    return sum+n%10;
}
