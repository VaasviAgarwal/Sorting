#include <iostream>
using namespace std;

int getMax(int a[], int n)
{
    int l = a[0];
    for(int i = 0 ; i < n; i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    return l;
}

void countSort(int a[], int n, int p)
{
    int k = 10;
    int count[k];
    int b[n];
    int i;
    for(i=0; i<k;i++)
    {
        count[i]=0;
    }
    for(i=0; i<n;i++)
    {
        count[(a[i]/p)%10]++;
    }
    for(i=1;i<k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(i = n-1; i>=0; i--)
    {
        b[--count[(a[i]/p)%10]]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[i];
    }
}

void radixSort(int a[], int n)
{
    int l = getMax(a,n);
    int p;
    for(p=1;l/p>0;p=p*10)
    {
        countSort(a,n,p);
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
    radixSort(a,n);
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

