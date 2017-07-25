#include <iostream>
//p176 16.
using namespace std;
int main()
{
    double currda=100,currde=100,year=1;
    while(currde<=currda)
    {
        currda+=10;
        currde*=1.05;
        year++;
    }
    cout << year << " " << currde <<endl;
    return 0;
}
