#include <iostream>
#include <vector>
using namespace std;
//���һ�������ĶԳ�λ���ĺ�
int main()
{
    int i,sum;
    vector<int> vec;
    while (cin >> i)
        vec.push_back(i);
    vector<int>::size_type j;
    auto s=vec.size();
    for(j=0;j<=vec.size()-2;j++)
    {
        sum=vec[j]+vec[s-1-j];//����ż��������
        cout << sum << " ";
    }
    return 0;
}
