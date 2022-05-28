// Merge Sort Code
// Send Feedback
// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.
// Input format :
// Line 1 : Integer n i.e. Array size
// Line 2 : Array elements (separated by space)
// Output format :
// Array elements in increasing order (separated by space)
// Constraints :
// 1 <= n <= 10^3
// Sample Input 1 :
// 6 
// 2 6 8 5 4 3
// Sample Output 1 :
// 2 3 4 5 6 8
// Sample Input 2 :
// 5
// 2 1 5 2 3
// Sample Output 2 :
// 1 2 2 3 5 


void merge(int input[],int si, int mid,int ei){
    int n1=mid-si+1;
    int n2=ei-mid;
    int l[n1],m[n2];
    for(int i=0;i<n1;i++){
        l[i]=input[si+i];
    }
    for(int j=0;j<n2;j++){
        m[j]=input[mid+1+j];
    }
    int j=0,i=0,k=si;
    while(i<n1 && j<n2){
        if(l[i]>m[j]){
            input[k]=m[j];
            j++;
        }
        else{
            input[k]=l[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        input[k]=l[i];
        i++;
        k++;
    }
       while(j<n2){
        input[k]=m[j];
        j++;
        k++;
    }
}

void mergesort(int input[],int si,int ei){
    if(si>=ei) {
        return;
    }
    
   int mid=((si+ei)/2);
    mergesort(input,si,mid);
    mergesort(input,(mid+1),ei);
    merge(input,si,mid,ei);
}

void mergeSort(int input[], int size)
{	// Write your code here
   mergesort(input,0,size-1);    

}
