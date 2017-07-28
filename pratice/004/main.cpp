#include <iostream>
#include <stdexcept>
//练习try的用法
using namespace std;

int main()
{
    double a,b;
    while(cin >> a>>b)
    {
        err:
        try//语句块正常执行其中也可进行正常的变量声明，但是块中声明的变量，外面没法用，catch内也不行
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
