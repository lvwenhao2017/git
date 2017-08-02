#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s,temps;
    cin >> temps;
    bool i =true;
    while (cin >> s)
    {
        if(s == temps)
        {
            if( isupper( *( s.begin() ) ) )  //开头大写字母 才跳出循环
            {
                i = false;
                cout << s;
                break;
            }
            else continue;
        }
        else
            temps = s;
    }
    if (i)
        cout << "No same data";
    return 0;
}
