/*
 * Diego Sebastian Santana, dsp50
 * 10/24/18
 * Program implements quickSort!
 */
#include <iostream>
using namespace std;
  
// A helper function to facilitate swapping two int elements 
// You might want to use this function in the function partition().
void swap(int& a, int& b) 
{ 
    int x = a;
    a = b;
    b = x;
}
  
// This function partitions sub-array A[p..r]. It takes last element in the sub-array, i.e., A[r], as pivot, 
// places the pivot element at its correct position in sorted array, 
// places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot, 
// and returns the index of the pivot element (i.e. it's correct position in sorted array)
// You might want to use this function in the function quickSort().
int partition (int A[], int p, int r) 
{ 
    int x = A[r];
    int i = (p-1);
    for(int j = p; j <= r -1; j++){
        if(A[j] <= x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return (i+1);
} 
  
// using quickSort to sort sub-array A[p..r]  
// p is for left index and r is right index of the 
// sub-array of A[] to be sorted
void quickSort(int A[], int p, int r) 
{
    if (p<r){
        int q = partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
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
	
  
    quickSort(A, 0, n-1); 
  
    cout << "After quickSort, sorted array A[] is: "; 
	for(int i=0; i<n-1; i++)
		cout << A[i] << ",";
	cout << A[n-1] << endl;
	
	
	delete [] A;
    return 0; 
} 