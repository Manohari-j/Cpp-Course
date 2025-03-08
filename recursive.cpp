//Recursion: func invokes itself. break complex concept into a repeatable single step.
//iterative vs recursive: adv - less code and clean, useful for sort and search algo
//disadv - uses more memory, slower

# include<iostream>
using namespace std;

void walk(int steps );

int main()
{
    walk(5);
    return 0;
}

void walk(int steps)
{
    if(steps>0)//no condn will lead to stack overflow
    {
        cout<<"Take a step\n";
        walk(steps-1);
    }
    return;
}

/*void walk(int steps, int n)
{
    
    if(n==steps)
        return ;
    cout<<"step #"<<n+1<<"\n";
    walk(steps,n+1);
    
}*/
/*void walk(int steps)
{
    for(int i=1;i<=steps;i++)
    {
        cout<<"step #"<<i<<"\n";
    }
}*/