#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s;
    unsigned int cnt = 0, wpcnt = 0;
    while( getline(cin,s) )
    {
        for( auto ch:s )
        {
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cnt++;
        if( isspace(ch) )
            wpcnt++;
        }
    }
    cout << cnt << " " << wpcnt;
    return 0;
}
