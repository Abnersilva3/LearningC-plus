#include <iostream>
#include <cmath>


int main (){
    double Weight,Height,Imc ;

    std::cout << "enter you Weight: ";
    std::cin >> Weight;
    std::cout << "enter you Height: ";
    std::cin >> Height;

    Imc = Weight / std::pow(Height, 2);

    std::cout <<"Result : "<< Imc << std::endl;

    return 0;


}