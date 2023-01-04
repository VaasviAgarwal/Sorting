#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    int i, j, temp;
    bool f = false;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            f = false;
            if(a[j]>a[j+1])
            {
                f = true;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            if(!f)
            {
                break;
            }
        }
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
    BubbleSort(arr, n);
    cout<<"Sorted array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
