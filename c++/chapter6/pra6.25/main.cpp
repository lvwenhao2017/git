#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello world!" << endl;
    int i;
    string s;
    for (i = 1; i < argc; i++)
    {
        s = s + argv[i];
        s = s + " ";
        printf("Argument %d is %s.\n", i, argv[i]);
    }
    cout << s;
    return 0;
}
