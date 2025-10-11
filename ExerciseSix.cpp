#include <iostream>
#include <cmath>

int main (){
    double Number;

    std::cout << "enter the number: ";
    std::cin >> Number;

    double Operation = Number * (Number + 1)/2;

    std::cout <<"resultado es igual: "<< Operation << std::endl;


    return 0;

}