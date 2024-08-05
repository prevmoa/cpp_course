#include <iostream>

int main(){
    int n1, n2, n3, sum, product;
    std::cout<<"enter 1st number: ";
    std::cin>>n1;
    std::cout<<"enter 2st number: ";
    std::cin>>n2;
    std::cout<<"enter 3rd number: ";
    std::cin>>n3;
    sum= n1+n2+n3;
    product= n1*n2*n3;
    std::cout<<"sum is: "<< sum<<std::endl;
    std::cout<<"product is: "<< product<<std::endl;

    return 0;
}
