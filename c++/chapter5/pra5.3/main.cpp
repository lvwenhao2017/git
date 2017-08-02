#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int sum = 0, val = 0;
    while( val <= 10 )
        sum += val++;
    /*
    while( ++val, val <= 10 )
        sum += val;
    while(val <= 10)
        sum += val, ++val;
    */
    cout << sum;
    return 0;
}
