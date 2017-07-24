#include <iostream>
//本程序旨在练习指向指针的指针
int main()
{
    int ival=1024;
    int *pi=&ival;
    int **ppi=&pi;
    std::cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n"
    << "doubly indirect value: " << **ppi <<std::endl;
    return 0;
}
