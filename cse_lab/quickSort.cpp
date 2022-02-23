#include <iostream>
using namespace std;

template <class T>
int perticion(T *array, int lb, int ub)
{
    int pivot = array[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (array[start] <= pivot)
        {
            start++;
        }
        while (array[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(array[start], array[end]);
        }
    }
    swap(array[end], array[lb]);

    return end;
}
template <class T>
void quickSort(T *array, int lb, int ub)
{
    if (ub > lb)
    {
        int loc = perticion(array, lb, ub);
        quickSort(array, lb, loc - 1);
        quickSort(array, loc + 1, ub);
    }
}

int main(int argc, char const *argv[])
{

    float array[] = {0, -22.5, 27, -35, 55, -77};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Given Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    quickSort(array, 0, size - 1);
    cout << "\nSorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
