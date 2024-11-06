#include<iostream>
using namespace std;

//function to divide the array until it has only one element
void merge_sort(int[], int, int);

// function to merge two sorted arrays
void merge(int[], int, int, int);

// global array - to write the final sorted array in this
int na[100];

int main() {
    int a[50]; //input array
    cout << "Enter an unsorted array of 10 elements" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    merge_sort(a, 0, 9);  // calling merge_sort
    for (int i = 0; i < 10; i++) {
        //print final array
        cout << na[i] << endl;
    }
    return 0;
}

void merge_sort(int a[], int p, int r) {
    // p is 0 , r is final bound
    if (p < r) {
        int q;
        q = (p + r) / 2; //finding middle element
        merge_sort(a, p, q);
        merge_sort(a, q + 1, r);
        merge(a, p, q, r);
     }

}

// for two sorted sub-array from p to q and from q+1 to r, this function 
// will compare first element of each sub-array and will place the smaller 
// one in final array until every element is sub-array is in final sorted 
//array
void merge(int a[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int l[50];
    int ri[50];
    for (int i = 0; i < n1; i++) {
        l[i] = a[p + i ];
    }
    l[n1] = 99999;

    for (int j = 0; j < n1; j++) {
        ri[j] = a[q + j + 1];
    }
    ri[n2] = 99999;

    int i = 0;
    int j = 0;
    for (int k = p; k <= r; k++) {
         if (l[i] <= ri[j]) {
            na[k] = l[i];
            i = i + 1;
        }
        else {
            na[k] = ri[j];
            j = j + 1;
        }
     }

}