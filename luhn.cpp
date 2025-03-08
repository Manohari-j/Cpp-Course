#include<iostream>
using namespace std;


//6011000990139424
int getDigit(const int number)
{
    //18 =>8+1=9
    //6=>6+0 = 6
    return number%10 + (number/10%10);
}

int SumOddDigits(const string cardNumber)
{
    int sum=0;

    for(int i=cardNumber.size()-1;i>=0;i -= 2)
    {
        sum += cardNumber[i]-'0';
    }
    return sum;

}
int SumEvenDigits(const string cardNumber)
{
    int sum=0;

    for(int i=cardNumber.size()-2;i>=0;i -= 2)
    {
        sum += getDigit((cardNumber[i]-'0')*2);//'0' is 48
    }
    return sum;
    
}


int main()
{
    string credNum;

    cout<<"Please enter your credit card number: ";
    cin>>credNum;

    int result = SumEvenDigits(credNum)+ SumOddDigits(credNum);

    if(result%10 == 0)
        cout<<"Card Number is valid ";
    else
        cout<<"Card Number is not valid";

    return 0;
}