#include <iostream>
#include <stdexcept>
//��ϰtry���÷�
using namespace std;

int main()
{
    double a,b;
    while(cin >> a>>b)
    {
        err:
        try//��������ִ������Ҳ�ɽ��������ı������������ǿ��������ı���������û���ã�catch��Ҳ����
        {
            if(b==0)
                throw runtime_error("Data mustn't be the zero ");
            cout << a/b;
        }
        catch(runtime_error err)
        {
            cout << err.what()
            << " \nTry again? Enter a new numbers "<<endl;
            cin >> b;
            if(!cin||b=='0')
                goto err;
                else
                    cout << a/b;
                  }
    }
    return 0;
}
