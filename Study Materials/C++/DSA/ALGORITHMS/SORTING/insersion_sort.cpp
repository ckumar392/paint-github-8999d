// let the first element be sorted
// move to next element and place it to right index considering all elements before it sorted

// repeatedly swap the adjacent elements if they are in wrong order
// we ll get sorted array of n elements in n-1 iterations
#include <iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int main()
{
    int arr[8] = {9, 21, 3, 74, 15, 198, 18, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (arr[j] > temp && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    display(arr, n);
    return 0;
}