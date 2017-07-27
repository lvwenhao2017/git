#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string val;
    getline(cin,val);
    for(char c:val)
    {
        c= 'X';
        cout << c;
    }
    return 0;
}
