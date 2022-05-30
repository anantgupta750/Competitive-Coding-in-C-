// Quick Sort Code
// Send Feedback
// Sort an array A using Quick Sort.
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
// 1 5 2 7 3
// Sample Output 2 :
// 1 2 3 5 7 


int partition(int input[],int si,int ei){
    int x= input[si];
    int count=0;
    for(int i=1;i<=ei;i++){
        if(x>=input[i]){
            count++;
        }
    }
    if(count>0){
       int temp=input[count];
        input[count]=x;
        input[si]=temp;
   		int a=input[count];
	while(si<count && ei>count){
        while(input[si]<=a){
            si++;
        }
        while(input[ei]>a){
            ei--;
        }
        if(si<count && ei>count){
        int temp=input[ei];
            input[ei]=input[si];
            input[si]=temp;
            si++;
            ei--;
        }
    }
    return count;
    }
    else
    {
    return count;
    } 
}
void quicksort(int input[], int start, int end)
	{
    if(start>=end){
        return;
    }
    int part=partition(input,start,end);
    quicksort(input,start,part-1);
    quicksort(input,part+1,end);
	}
void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
	quicksort(input,0,size-1);
}