/*
 * Diego Sebastian Santana, dsp50
 * 10/24/18
 * Program implements mergeSort!
 */
#include <iostream>
using namespace std;
  
// Merges two sorted subarrays of A[]. 
// First sorted subarray is A[l..m].
// Second sorted subarray is A[m+1..r].
// You might want to call this function in function mergeSort().
void merge(int A[], int l, int m, int r) 
{
    int i, j, k;
    int INDEX1 = m - l + 1;
    int INDEX2 = r - m;

    int Left[INDEX1],Right[INDEX2];

    for(i = 0; i < INDEX1; i++)
        Left[i]= A[l + i];
    for(j = 0; j < INDEX2; j++)
        Right[j] = A[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while(i < INDEX1 && j < INDEX2){
        if(Left[i]<=Right[j]){
            A[k] = Left[i];
            i++;
        }else{
            A[k] = Right[j];
            j++;
        }
        k++;
    }
    while(i < INDEX1){
        A[k] = Left[i];
        i++;
        k++;
    }
    while(j < INDEX2){
        A[k] = Right[j];
        j++;
        k++;
    }
} 

// using mergeSort to sort sub-array A[l..r]  
// l is for left index and r is right index of the 
// sub-array of A[] to be sorted
void mergeSort(int A[], int l, int r) 
{ 
    if( l < r) {
        int mid = l+(r-l)/2;

        mergeSort(A, l, mid);
        mergeSort(A, mid+1, r);

        merge(A, l, mid, r);
    }
} 
  

int main() 
{ 
    cout << "Please enter the length (number of elements) of the input array: ";
	int n;
	cin >> n;
	
	if(n <= 0) {
		cout << "Illegal input array length!" << endl;
		return 0;
	}
	
	int* A = new int [n];
	
	cout << "Please enter each element in the array" << endl; 
	cout << "(each element must be an integer within the range of int type)." << endl;
	for(int i=0; i<n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
  
    cout << "Given array A[] is: "; 
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;
	
  
    mergeSort(A, 0, n-1); 
  
    cout << "After merge sort, sorted array A[] is: ";
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;
	
	
	delete [] A;
    return 0; 
} 