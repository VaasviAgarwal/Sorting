#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
    int current;
    int j;
    for(int i =1; i<n;i++)
    {
        current = a[i];
        j = i-1;
        while(j>=0 && a[j]>current)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the elements of the array :"<<endl;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    InsertionSort(arr, n);
    cout<<"Sorted array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}