#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    char ch;
    unsigned int cnt = 0;
    while( cin >> ch )
    {
        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cnt++;
    }
    cout << cnt;
    return 0;
}
