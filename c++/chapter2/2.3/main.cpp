#include <iostream>
//������������������������͵�����
int main()
{
    int i,&ri=i;
    i=5;
    ri=20;
    std::cout << i << " " << ri <<std::endl;
}
