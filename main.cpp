#include <iostream>
#include <string>

int main(){

    int age;
    std::string full_name;

    std::cout<< "please type in your full name and age" <<std::endl;
    //std::cerr << "Error message : something is wrong " << std::endl;
    //std::clog << "log message : something happened " << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age;

    std::cout << "Hello " << full_name << " you're " 
            << age << "years old" << std::endl;
    
    return 0;
}