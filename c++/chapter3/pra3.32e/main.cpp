#include <iostream>
#include <vector>
//把一个vecto元素拷贝到另一个容器内
using namespace std;

int main()
{
    vector<int> ovec;
    vector<int> cvec{1,2,3,4,5,6,7,8,9,10};
    int i;
    while(cin >> i)
        ovec.push_back(i);//初始化原容器
    auto beg=ovec.begin(),oend=ovec.end();
    for(;beg!=oend;beg++) {
        cvec.push_back(*beg);
    }
    for(auto d:cvec)
        cout << d << " ";
    return 0;
}
