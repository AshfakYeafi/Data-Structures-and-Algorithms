#include <iostream>
using namespace std;
template <class T>
void marge(T *a, int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = 0;
    T b[ub - lb + 1];
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }

    for (int i = lb; i <= ub; i++)
    {
        a[i] = b[i - lb];
    }
}
template <class T>
void margeSort(T *array, int lb, int ub)
{
    if (ub > lb)
    {
        int mid = (lb + ub) / 2;
        margeSort(array, lb, mid);
        margeSort(array, mid + 1, ub);
        marge(array, lb, mid, ub);
    }
}

int main()
{

    float array[] = {1.1, 1.2, 2.3, 1.0, 4.5, 2.1, 3.1, 0};

    int size = sizeof(array) / sizeof(array[0]);

    margeSort(array, 0, size);
    cout << "Sorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
