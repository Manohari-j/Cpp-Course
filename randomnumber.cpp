#include<iostream>
#include<ctime>

int main()
{
    //random number generator
    //pseudo random - not truly random but close
     //srand(seed);

     /*srand(time(NULL));

     //int num = rand(); //0 and 32677

     int num1 = (rand()%6)+1; // if the range is from 0 t0 5. +1 if we need it from 1 to 6
     int num2 = (rand()%6)+1;
     int num3 = (rand()%6)+1;

     std::cout<<num1<<"\n";
     std::cout<<num2<<"\n";
     std::cout<<num3<<"\n";*/

     //random event generator

     srand(time(0));

     int randNum = rand()%5+1;//0to 4  => 1 to 5

     switch (randNum)
     {
     case 1:
        std::cout<<"You win a bumper sticker!";
        break;
    case 2:
        std::cout<<"You win a t-shirt!";
        break;
    case 3:
        std::cout<<"You win a free lunch!";
        break;
    case 4:
        std::cout<<"You win a gift card!";
        break;
    case 5:
        std::cout<<"You win a concert tickets!";
        break;
     
     default:
        break;
     }



    return 0;
}