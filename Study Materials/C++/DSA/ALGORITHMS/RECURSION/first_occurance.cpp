#include <iostream>
using namespace std;

int first_occurrence(int a[], int size, int find, int start)
{
    if (start == size - 1)
        return -1;
    if (a[start] == find)
        return start + 1;
    return first_occurrence(a, size, find, start + 1);
}

int last_occurrence(int a[], int size, int find, int start)
{
    if (start == size - 1)
        return -1;
    int found_at = last_occurrence(a, size, find, start + 1);
    // found at will store the final returned value of the function

    if (found_at != -1)
        return found_at;
    if (a[start] == find)
        return start + 1;
    else
        return -1;
}
int main()
{
    int array[] = {1, 3, 67, 82, 92, 22, 67, 100, 43};
    int key = 67;
    int size = sizeof(array) / sizeof(array[0]);
    cout << "First occurrence of the key is " << first_occurrence(array, size, key, 0) << endl;
    cout << "Last occurrence of the key is " << last_occurrence(array, size, key, 1) << endl;
    return 0;
}