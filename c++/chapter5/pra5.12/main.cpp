#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s;
    unsigned int cnt = 0;
    while ( cin >> s )
    {
        auto it = s.begin();
        while( it != s.end() )
        {
            if( ( *it++ == 'f' ) && ( *it == 'f' || *it == 'l' || *it == 'i' ) )
            {
                cnt++;
                it++;//ÌÞ³ýffflµÄÇé¿ö           }

        }
    }
    cout << cnt;
    return 0;
}
