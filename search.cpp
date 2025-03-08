#include<iostream>

using namespace std;

int binarySearch(int*,int, int);
int main()
{
    int num[] = {1,4,7,9,12,15,45,70,83};
    int n=sizeof(num)/sizeof(num[0]);
    int key;
    cout<<"Enter a number to search: ";
    cin>>key;

    int pos = binarySearch(num,n,key);
    if(pos==-1)
        cout<<key<<" not found\n";
    else
        cout<<key<<" is found in position "<<pos;

    return 0;
}
int binarySearch(int num[],int n, int key)
{
    int pos = -1;
    int low = 0;
    int high = n-1;
    while(high>=low)
    {
        int mid = low+(high-low)/2;
        
        if(num[mid] == key)
        {
            return mid;
        }
        else if(num[mid] < key)
        {
            low = mid+1;
        }
        else if(num[mid] > key)
        {
            high = mid-1;
        }
       
        
    }
    return pos;
}

