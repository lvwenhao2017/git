#include <iostream>
#include <vector>
using namespace std;
//判断两个容器是否相等3
//判断两个容器是否相等
string compare(vector<int> a,vector<int> b) {
    auto it1 = a.begin();
    auto it2 = b.begin();
    if ( a.size() != b.size() )//判断容器大小是否相等
    return "无法比较";//不相等返回无法比较
    else {
    while( it1 != a.end() && it2 != b.end()) {
        if( *it1 != *it2 )//如果任何一个元素不相等
        return "不相等";  //返回不相等
        else {            //否则迭代器继续前进
            it1++;
            it2++;
        }
    }
    }
    return "相等";
}

int main()
{
    vector<int> vec1{1,2,3,4,5,6,7,8,9,10},vec2;
    int i;
    while(cin >> i)
        vec2.push_back(i);
    cout << compare(vec1,vec2);
    return 0;
}
