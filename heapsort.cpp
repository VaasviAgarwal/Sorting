#include <iostream>
using namespace std;

void display(int a[], int n)
{
    int i;
	for (i=0; i<n; i++)
	{
		cout << a[i] << "  ";
	}
	cout<<endl;
}

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if(left<n && a[left]>a[largest])
    {
        largest=left;
    }
    if(right<n && a[right]>a[largest])
    {
        largest=right;
    }
    if(largest != i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

void heapSort(int a[], int n)
{
    for(int i=(n/2)-1; i>=0; i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1; i>=0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}

int main()
{
	int n;
	cout<<"Enter the number of elements in the Array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements : "<<endl;
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout << "Unsorted Input Array :" <<  endl;
	display(a,n);
    heapSort(a,n);
	cout << "Sorted Array after Heap Sort :" << endl;
	display(a,n);
}
