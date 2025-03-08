#include<iostream>
#include<ctime>

using namespace std;



int main()
{
    srand(time(NULL));
    int guess=0;
    int tries=0;

    int randNum = (rand()%20)+1;

    do
    {
        cout<<"Enter a guess between (1-20): ";
        cin>>guess;
        tries++;

        if(guess>randNum)
            cout<<"Too high!\n";
        else if(guess<randNum)
            cout<<"Too low!\n";
        else
            cout<<"You Won! # of tries: "<<tries;
    } while (guess!=randNum);
    
}