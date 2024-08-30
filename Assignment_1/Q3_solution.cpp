
#include <iostream>

int main(){
    int choice;
    float result, f, c;
    std::cout<<"make a choice: \n1- Convert to Fahrenheit: \n2- Convert to Celsius: \n";
    std::cin>>choice;
    if(choice==1){
        std::cout<<"Enter temperature in Celsius: \n";
        std::cin>>c;   
        result=(9.0/5.0)*c+32.0;
    }
    else if(choice==2){
        std::cout<<"Enter temperature in Fahrinheit: \n";
        std::cin>>f;
        result=(f-32.0)*(5.0/9.0);
    }
    std::cout<<"Your temperature is "<<result<<std::endl;
    return 0;
}