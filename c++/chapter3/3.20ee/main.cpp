#include <iostream>
#include <vector>
using namespace std;
//���һ������������������  ���õ�������д��
int main()
{
    int i,sum;
    vector<int> vec;
    while (cin >> i)
        vec.push_back(i);
    for(auto it=vec.begin();it!=vec.end()-1;it++)
    {
        sum=(*it)+(*(it+1));
        cout << sum << " ";
    }
    return 0;
}
