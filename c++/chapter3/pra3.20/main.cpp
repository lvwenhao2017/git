#include <iostream>
#include <vector>
using namespace std;
//���һ������������������
int main()
{
    int i,sum;
    vector<int> vec;
    while (cin >> i)
        vec.push_back(i);
    vector<int>::size_type j;
    for(j=0;j<=vec.size()-2;j++)
    {
        sum=vec[j]+vec[j+1];
        cout << sum;
    }
    return 0;
}
