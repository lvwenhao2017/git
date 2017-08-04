#include <iostream>
#include <random>
using namespace std;
//随机数简单应用
int main()
{
    cout << "Hello world!" << endl;
    long long i = 0;
    for( long long b = 0; b <= 1000000000; b++ )
        i++;
    cout << i;
/*    uniform_int_distribution<unsigned> u(1,10);
    default_random_engine e;
    long b = 0,s = 0;
    for(long a = 0; a < 1000000000; a++)
        if(u(e) <= 5)
        s++;
    else
        b++;
    cout << b << "\n"
    << s;
    */
 /*   for( b = 0; b < 30;b++)
        cout << u(e) << endl;
        */
    return 0;
}
