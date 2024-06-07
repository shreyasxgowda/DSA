//*************************Merge Sort***************************
/*
#include <iostream>
using namespace std;

//Function to print the array.
void printArray(int * arr, int length){
           for(int i=0; i<length; i++){
               cout << arr[i] << " ";
           }
           cout << endl;
}


//Function to merge the sub-arrays.
void merge(int * arr, int low, int mid, int high){
     int i, j, k;
     int lengthLeft = mid - low + 1;
     int lengthRight = high - mid;

     //Creating two temp arrays to store left and right sub-list
     int arrLeft[lengthLeft], arrRight[lengthRight];

     //Coping the data from the actual  array to left and right
     for (int a = 0; a < lengthLeft; a++){
        arrLeft[a]= arr[low+a];
     }
     for (int a = 0; a < lengthRight; a++){
        arrRight[a]= arr[mid+1+a];
     }

     //Merging the temp arrays back into the actual  array.
     i = 0;//Starting index of arrLeft[].
     j = 0;//Starting index of arrRight[].
     k = low;//Starting index of merged subarray[].

     while (i < lengthLeft && j < lengthRight){
        //Checking and placing the smaller number of both temp array.
        if (arrLeft[i] <= arrRight[j]){
            arr[k] = arrLeft[i];
            i++;
        }
        else {
            arr[k] = arrRight[j];
            j++;
        }
        k++;
     }
     //After the successful execution of the above loop
     //Copying the remaining elements of the left sub array (if remaining).
     while (i < lengthLeft){
        arr[k] = arrLeft[i];
        k++;
        i++;
     }

     //Copying the remaining elements of the right sub array (if remaining).
     while (j < lengthRight){
        arr[k] = arrRight[j];
        k++;
        j++;
     }
}

//The mergeSort() function.
void mergeSort(int * arr, int low, int high){
    int mid;
    if (low < high){
        //Calculating the mid.
        mid = (low + high) / 2;

        //Calling the function mergeSort() recursively and breaking.
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        //Calling the merge() function to merge the sorted sub array.
        merge(arr, low, mid, high);
    }
}

int main(){
    //Initializing the array.
    int arr[] = {9, 14, 4, 6, 5, 8, 7};

    //Calculating the length of the array.
    int length = sizeof(arr) / sizeof(int);

    //Printing the array before sorting.
    cout << "Array before calling the mergeSort() : ";
    printArray(arr, length);

    //Calling the mergeSort() function.
    mergeSort(arr, 0, length - 1);

    //Printing the array after sorting.
    cout << "Array, after calling the mergeSort() : ";
    printArray(arr, length);

    return 0;

}



*/

//*****************************QUICK SORT**************************



#include <bits/stdc++.h>
using namespace std;

//rearrange the elements to get the actual pivot index
int partition(int arr[], int low, int high, int pivot){
	int PIndex = low;

	// Traverse the array from low to high
    for(int i=low;i<=high;i++) {

        // If the current element is smaller than the pivot element
        if(arr[i]<=pivot) {
            // Swap PIndex element with current element.
            swap(arr[PIndex],arr[i]);
            // Increment the pointer.
            PIndex++;
        }
    }

    PIndex--;

	return PIndex;
}

// We divide the array into two subarrays around
// the pivot and recursively call for them separately.
void quickSort(int arr[], int low, int high){
	if(low < high) {
	    int pivot = arr[high];

            //Rearrange and get the actual pivot index
	    int PIndex = partition(arr, low, high, pivot);

            // solve for the left and right subarrays
            quickSort(arr, low, PIndex-1);
            quickSort(arr, PIndex+1, high);
	}
}

int main()
{

	int arr[7]={9,8,7,6,5,4,3};
	int n=7;

	quickSort(arr, 0 , n-1);

	cout<<"The sorted array is: ";
	for( int i = 0 ; i < n; i++){
		cout<< arr[i]<<" ";
	}

    return 0;
}
