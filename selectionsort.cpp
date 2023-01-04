#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{

    int i,j,x,temp;
    for(i=0;i<n;i++)
    {
        x = i;
        for(j=i+1;j<n;j++)
        {
            if(a[x]>a[j])
            {
                x = j;
            }
        }
        temp = a[x];
        a[x] = a[i];
        a[i] = temp;
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
    SelectionSort(arr, n);
    cout<<"Sorted array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}