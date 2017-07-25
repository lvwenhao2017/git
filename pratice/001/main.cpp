#include <iostream>
//原题为初始存款100万，年利率8％，每年最后一天取10万 求几年取完
using namespace std;
int main()
{
    int om = 100,year=0;
    double currm=100,rate=0.08;
    while(currm>0)
    {
        currm=currm*(1+rate)-10;
        year++;
    }
    cout << year <<endl;
    return 0;//输出结果为21年
}
