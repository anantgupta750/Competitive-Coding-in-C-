// Print Subsets of Array
// Send Feedback
// Given an integer array (of length n), find and print all the subsets of input array.
// Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
// Note : The order of subsets are not important. Just print the subsets in different lines.
// Input format :
// Line 1 : Integer n, Size of array
// Line 2 : Array elements (separated by space)
// Constraints :
// 1 <= n <= 15
// Sample Input:
// 3
// 15 20 12
// Sample Output:
// [] (this just represents an empty array, don't worry about the square brackets)
// 12 
// 20 
// 20 12 
// 15 
// 15 12 
// 15 20 
// 15 20 12 


void subset(int input[],int n, int output[], int m){
    if(n==0){
        // cout<<""<<endl;
    for(int i=0;i<m;i++){
        cout<<output[i]<<" ";
    }
        cout<<"\n";
        return;
    }
     int newoutput[m+1];
    for(int i=0;i<m;i++){
        newoutput[i]=output[i];
    }
    newoutput[m]=input[0];
   subset(input+1,n-1,newoutput,m+1);
	subset(input+1,n-1,output,m);
    return;
    
    
}
void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    if(size==0){
        cout<<""<<endl;
        return;
    }
    int m=0;
    int output[m];
    // output[m];
    subset(input,size,output,m);
}
