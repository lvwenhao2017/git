#include <iostream>
#include <vector>
//�öγ�����ϰ���ʹ�õ��������ж�������
using namespace std;

int main()
{
    cout << "Please enter a series of number:" << endl;
    vector<int> vec;
    int b,e,sought;
    cin >> b >> e;
    for(;b<=e;b++)
        vec.push_back(b);
    auto beg = vec.begin(),end=vec.end();
    auto mid = beg + (end-beg)/2;
    cin >> sought;
    while( mid != end && *mid != sought)
    {
        if(sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg +(end - beg)/2;
    }
    if(*mid == sought)
        cout << "Finded";
    else
        cout << "\aError";
    return 0;//�˶γ����������Ϊcin�������޷�ʶ��س�
}
