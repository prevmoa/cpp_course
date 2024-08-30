#include <iostream>

int main(){
    int n1, n2, choice, result;
    std::cout<<"enter 1st number: ";
    std::cin>>n1;
    std::cout<<"enter 2st number: ";
    std::cin>>n2;
    std::cout<<"Press 1 for +, 2 for *: ";
    std::cin>>choice;
    
    if (choice==1)
        result= n1+n2;
    else if(choice==2)
        result= n1*n2;
    
    std::cout<<"result is: "<< result<<std::endl;

    
    return 0;
}
