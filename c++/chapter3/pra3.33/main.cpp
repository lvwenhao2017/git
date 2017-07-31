#include <iostream>

using namespace std;

int main()
{
    int scores[11];//未初始化会随机数值
    unsigned grade;
    while(cin >> grade)
        if(grade <= 100)
            ++scores[grade/10];
    for(auto i : scores)
        cout << i << " ";
    return 0;
}
