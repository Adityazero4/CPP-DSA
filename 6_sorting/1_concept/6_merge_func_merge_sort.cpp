#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + i + 1];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i];
            i++;
        }
        else
        {
            arr[k++] = right[j];
            j++;
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i];
        i++;
    }
    while (j < n2)
    {
        arr[k++] = right[j];
        j++;
    }
}

int main()
{

    int a[] = {10, 15, 20, 40, 8, 11, 15, 22, 25};
    int l = 0, h = 8, m = 3;

    merge(a, l, m, h);
    for (int x : a)
        cout << x << " ";
}