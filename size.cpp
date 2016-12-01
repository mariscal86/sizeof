//program to know the size of the variables in your computer
#include <iostream>

int main()
{
    //Print the size in bytes of the variables
    std::cout << "unsigned short int size  is:\t\t";
    std::cout << sizeof(unsigned short int) << " bytes.\n";
    std::cout << "short int size is:\t\t\t";
    std::cout << sizeof(short int) << " bytes.\n";
    std::cout << "unsigned long int size is:\t\t";
    std::cout << sizeof(unsigned long int) << " bytes.\n";
    std::cout << "long int size is:\t\t\t";
    std::cout << sizeof(long int) << " bytes.\n";
    std::cout << "int size is:\t\t\t\t";
    std::cout << sizeof(int) << " bytes.\n";
    std::cout << "unsigned int size is:\t\t\t";
    std::cout << sizeof(unsigned int) << " bytes.\n";
    std::cout << "char size is:\t\t\t\t";
    std::cout << sizeof(char) << " bytes.\n";
    std::cout << "bool size is:\t\t\t\t";
    std::cout << sizeof(bool) << " bytes.\n";
    std::cout << "float size is:\t\t\t\t";
    std::cout << sizeof(float) << " bytes.\n";
    std::cout << "double size is:\t\t\t\t";
    std::cout << sizeof(bool) << " bytes.\n";
}
