#include <iostream>
#include <string>
using namespace std;
//�öγ���ּ����ͨ����Ӧ����������string����
int main()
{
    const string hex("0123456789ABCDEF");
    cout << "please input a series of number "
    <<endl;
    string result;
    decltype(hex.size()) n=0;
    while(cin >> n)
        if(n < hex.size())
        result+=hex[n];
        else
        {
            cerr << "\a���ݲ��Ϸ�"<<endl;
        }
    cout << result << endl;
    return 0;
}
