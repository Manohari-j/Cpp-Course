#include<iostream>

using namespace std;

template <typename T,typename U>
/*T maxval(T x, T y)
{
    return(x>y)?x:y;
}*/
//compiler deduce what data type to return. use auto
auto maxval(T x, U y)
{
    return(x>y)?x:y;
}
int main()
{
    //func temp: generate many overloaded func, with diff data types
    cout<<maxval(3.44,2)<<"\n";
    //for 2 diff types use another temp
    return 0;
}