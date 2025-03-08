#include <iostream>
#include <vector>
#include <iomanip> //for precision
// typedef is alias

/*typedef std::vector<std::pair<std::string,int>> pairlist_t;
//using keyword, mainly for templates aliases

using text_t = std::string;

namespace first
{
    int x=10;
} // namespace name

namespace second
{
    int x=100;
} // namespace name*/

int variable = 5;
double getTotal(double* ,int );
int main()
{
    // std::cout<<"Hello World!"<<std::endl;
    // endl flush the output buffer. /n can also be used
    // int, double, bool data types
    // string is object of String class
    // std::string name = "Mano";
    // const - capitals - cannot be changed. likeconst double PI = 3.14159
    // namespace: prevent name conflicts in large projects.
    // each entity needs a unique name. namespace allows
    // identical named entities as long as the namespaces are different.
    /*int x=1;
    std::cout<<x<<'\n';
    std::cout<<first::x<<'\n';
    std::cout<<second::x<<'\n';

    pairlist_t pairlist; */
    std::string fullname, name;
    int age;
    // std::cout<<"What is your age? ";
    // std::cin>>age; //this includes \n so it skips the next input line to avoid use ws in getline
    // while using getline after cin , it takes /n character as its input and skips the getline
    // ws eliminates new line character before user input
    // std::cout<<"What's your fullname? ";
    // std::getline(std::cin>>std::ws,fullname);

    // std::cin>>name;
    // std::cout<<name;

    // std::cout<<fullname;

    // max(x,y), min
    // cmath: pow(2,4), sqrt(9), abs(-3), round(3.14)
    // ceil, floor

    // string methods: name.length(), name.empty(),name.insert(0,"@")
    // name.clear(), name.append("@gmail.com"), name.at(0),name.find(' ')
    // name.erase(index = 0,len = 3)

    int variable = 3;

    std::cout << variable << "\n";   // local print
    std::cout << ::variable << "\n"; // global value print use ::

    double val = 123;

    std::cout << std::setprecision(2)<<std::fixed<<val;
    //to avois /n character which might lead 
    //to infinite loop if given inside a loop

    std::cin.clear();
    fflush(stdin);

    //foreacheay traver an iterable data set

    std::string fruits[]={"Apple","Banana","orange"};
    for(std::string fruit:fruits)
    {
        std::cout<<fruit<<"\n";
    }

    //while passing arrays pass only the name of the array not the []
    //passing the array decays to pointer, so send the size too

    double prices[] = {49.99,15.05,75,9.99};
    int n = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,n);
    std::cout<<total;

    //fill() : fills a range of elts with a specified value
    //fill(begin,end,value)
    const int SIZE=30;
    std::string lucky[SIZE];
    fill(lucky,lucky+SIZE/2,"love");
    fill(lucky+SIZE/2,lucky+SIZE,"You");
    for(std::string luck:lucky)
    {
        std::cout<<luck<<"\n";
    }

    //nullptr used to determine if an addr assigned successfully or not
    //dynamic memory: allocated after the program is already compiled and running.
    //use new operator to allocate memory in the heap rather than stack
    //useful when we dont know how much memory we will need.

    int *pNum = nullptr;
    pNum = new int;
    *pNum=21;
    
    std::cout<<"Address: "<<pNum<<"\n";
    std::cout<<"Value: "<<*pNum<<"\n";

    delete pNum; //else it will cause memory leak

    //char array

    char *pGrades = NULL;
    int size;
    std::cout<<"How many grades to enter in: ";
    std::cin>>size;

    pGrades=new char[size];

    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter grade #"<<i+1<<": ";
        std::cin>>pGrades[i];
    }

    std::cout<<"The grades are:\n";
    for(int i=0;i<size;i++)
    {
        std::cout<<pGrades[i];
    }

    delete[] pGrades;




    return 0;
}
double getTotal(double prices[],int n)
{
    double total = 0;
    for(int i =0;i<n;i++)
    {
        total +=prices[i];
    }
    return total;
}