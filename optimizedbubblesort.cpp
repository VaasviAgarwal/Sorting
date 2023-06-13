#include <iostream>
using namespace std;

int comp = 0;
int shift = 0;
int pass = 0;
void BubbleSort(int a[], int n)
{
    bool flag = true;
    int i, j, temp;
    for(i=0;i<n-1-i;i++)
    {
	flag = true;
	pass++;
        for(j=0;j<n-1;j++)
        {
	    comp++;
            if(a[j]>a[j+1])
            {
		flag = false;
		shift++;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
	if(flag)
	{
	    break;
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

    cout<<"Number of Passes : "<<pass<<endl;
    cout<<"Number of Shifts : "<<shift<<endl;
    cout<<"Number of Comparisons : "<<comp<<endl;
    return 0;
}
