#include <iostream>
#include <string>
using namespace std;
//����7.1.2������ ��дһ���� ���۳�Ա�����볣����Ա����������

class test
{
public:
    string s;
    test(string a)
    {
        (*this).s = a;
    }
    string add(string a)/*���Ϻ������29�оͲ��ᱨ��*/ const
    {
        return (s + a);
    }
private:

};

int main()
{
    cout << "Hello world!" << endl;
    test tes1("hello");
    const test tes2("world");
    string a = "",b = "";
    a = tes1.add(a);
    b = tes2.add(b);
    return 0;
}
