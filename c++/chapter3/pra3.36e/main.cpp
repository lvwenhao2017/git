#include <iostream>
#include <vector>
using namespace std;
//�ж����������Ƿ����3
//�ж����������Ƿ����
string compare(vector<int> a,vector<int> b) {
    auto it1 = a.begin();
    auto it2 = b.begin();
    if ( a.size() != b.size() )//�ж�������С�Ƿ����
    return "�޷��Ƚ�";//����ȷ����޷��Ƚ�
    else {
    while( it1 != a.end() && it2 != b.end()) {
        if( *it1 != *it2 )//����κ�һ��Ԫ�ز����
        return "�����";  //���ز����
        else {            //�������������ǰ��
            it1++;
            it2++;
        }
    }
    }
    return "���";
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
