#include<iostream>
using namespace std;

void bubblesort(int*, int);

int main()
{
    int arr[]= {7,4,6,1,9,3,2,8};
    int n= sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr, n);
    cout<<"The sorted array is: \n";

    for(int i=0;i<n;i++)
    {        
        cout<<arr[i]<<" ";
    }


    return 0;
}

void bubblesort(int arr[], int n)
{
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)
        {
            break;
        }
        
    }
}