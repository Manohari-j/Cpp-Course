#include<iostream>
using namespace std;

int main()
{
    int n=5;
    string foods[n];
    string temp;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter food # (q to quit)"<<i+1<<": ";
        getline(cin,temp);
        if(temp == "q")
        {
            break;
        }
        else{
            foods[i]=temp;
        }
    }
    cout<<"Your favourite foods are:\n";
    //for(string food:foods)
    for(int i=0;!foods[i].empty();i++)
    {
        cout<<foods[i]<<"\n";
    }
    

    return 0;
}