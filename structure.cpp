#include<iostream>
//. -> class member access operator
//enums: paired named integer const.
//switch cannot have strings

enum Days{sunday = 0 ,monday,tuesday,wednesday,thursday,friday,saturday};
/*int main()
{

    std::string today="sunday";
    
    switch(today)
    {
        case "sunday":
            std::cout<<"It is Sunday\n";
            break;
        case "monday":
            std::cout<<"It is monday\n";
            break;
        case "tuesday":
            std::cout<<"It is tuesday\n";
            break;
        case "wednesday":
            std::cout<<"It is wednesday\n";
            break;
        case "thursday":
            std::cout<<"It is thursday\n";
            break;
        case "friday":
            std::cout<<"It is friday\n";
            break;
        case "saturday":
            std::cout<<"It is saturday\n";
            break;
        default:
            std::cout<<"Not a day\n";
            break;

    }

    return 0;
}*/
int main()
{

    Days today=sunday;
    
    switch(today)
    {
        case sunday:
            std::cout<<"It is Sunday\n";
            break;
        case monday:
            std::cout<<"It is monday\n";
            break;
        case tuesday:
            std::cout<<"It is tuesday\n";
            break;
        case wednesday:
            std::cout<<"It is wednesday\n";
            break;
        case thursday:
            std::cout<<"It is thursday\n";
            break;
        case friday:
            std::cout<<"It is friday\n";
            break;
        case saturday:
            std::cout<<"It is saturday\n";
            break;
        default:
            std::cout<<"Not a day\n";
            break;

    }

    return 0;
}