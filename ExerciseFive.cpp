#include <iostream>
#include <cmath>

int main(){
    double HoursWorked;
    double HourlyPay;

    std::cout << "introduce hourly pay: ";
    std::cin >> HourlyPay;

    std::cout << "enter how many hours you work: ";
    std::cin >> HoursWorked;

    double operacion = HourlyPay * HoursWorked;

    std::cout <<"total horas: "<< operacion << std::endl;

}