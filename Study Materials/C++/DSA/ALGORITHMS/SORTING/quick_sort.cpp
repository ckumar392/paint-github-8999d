//in average case this gives same time complexity as merge sort only but is n^2 in case of worst case
//we use pivot and partition similar to divide and conquer concept int his sorting algorithm
//we consider a element as a pivot (usually last element) and make the elements greater than it to right and lesser elements to left

#include <iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int part(int arr[], int start, int end) {
    //cout<<"the code was here: ";
    int pivot = end;
    int i= start-1;
    for(int j=start; j < end; j++)
    {
        if(arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        
    }

    swap(arr[i+1], arr[end]);
    return i+1;
    // int i = start;
    // int j = end;
    // while(i <= j){
    //    int pivot = arr[i];
    //     while(arr[i] < pivot){
    //         i++;
    //     }
    //     while(arr[j] > pivot){
    //         j--;
    //     }
    //     if(i < j)
    //         swap(arr[i], arr[j]);
    // }
    // swap(arr[start], arr[j]);

}

void quickSort(int arr[], int start, int end) {
    if(start>=end)
    {
        return; 
    }
    int partition_index = part(arr, start, end);
    quickSort(arr, start, partition_index-1); // left part
    quickSort(arr, partition_index+1, end); //right part
}

int main() {
  int arr[] = {4,2,1,3,5};
  int size = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, size);
  quickSort(arr, 0, size - 1);
  printArray(arr, size);
  return 0;
  
}