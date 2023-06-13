#include <iostream>
using namespace std;

int comp = 0;
void swap(int arr[], int a, int b)
{
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void randomPivotGen(int a[], int l, int h)
{
	int pvt, n;
	n = rand();
	pvt = l + n%(h-l+1);
	swap(a, pvt, h);
}

int partition(int arr[], int l, int h, int pivot)
{
    int i = l;
    int j = l;
    while(i<=h)
    {
	comp++;
        if(arr[i]>pivot)
        {
            i++;
        }
        else
        {
            swap(arr,i,j);
            i++;
            j++;
        }
    }
    return j-1;
}

void quickSort(int arr[], int l, int h)
{
    if(l<h)
    {
	randomPivotGen(arr, l, h);
        int pivot = arr[h];
        int pos = partition(arr, l, h, pivot);
        quickSort(arr, l, pos-1);
        quickSort(arr, pos+1, h);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>> arr[i];
    }
    quickSort(arr, 0, n-1);
    cout<<"The sorted array is : ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;
    cout<<"Number of Comparisons : "<<comp<<endl;
    return 0;
}
