// Binary Search (Recursive)
// Send Feedback
// Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
// Return -1 if x is not present in the given array.
// Note : If given array size is even, take first mid.
// Input format :

// Line 1 : Array size

// Line 2 : Array elements (separated by space)

// Line 3 : x (element to be searched)

// Sample Input :
// 6
// 2 3 4 5 6 8 
// 5 
// Sample Output:
// 3 


int binarysearch(int input[], int si,int ei, int x){
 if(si>ei){
        return -1;
    }
    if(ei>=1){
    int  mid= (si+ei)/2;
    if(input[mid]==x){
        return mid;
    }
    if(x<input[mid]){
        return binarysearch(input,si,mid-1,x);
    }
    else{
        return binarysearch(input,mid+1,ei,x);
    }
    }
    else{
    return -1;}
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
if(size<=0){
    return -1;
}
    binarysearch(input,0,size-1,element);
}