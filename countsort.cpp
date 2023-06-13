#include <iostream>
using namespace std;

void countSort(int a[], int n)
{
    int l=a[0];
    int i;
    for(i=0; i < n; i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    l=l+1;
    int count[l];
    for(i=0;i<l;i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        count[a[i]] = count[a[i]]+1;
    }
    cout<<"Count of all elements : ";
    for(i=0;i<l;i++)
    {
        cout<<count[i]<<" ";
    }
    cout<<endl;
    for(i=1;i<l;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    cout<<"Index Range of Elements : ";
    for(i=0;i<l;i++)
    {
        cout<<count[i]<<" ";
    }
    int b[n];
    for(i=n;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int i;
    int a[n];
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    countSort(a,n);
    cout<<"Sorted Array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}