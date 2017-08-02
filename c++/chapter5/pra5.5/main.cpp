#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    unsigned int grade;
    char crank;
    cin >> grade;
    if ( grade < 60)
            crank = 'E';
    else
        if( grade < 70 )
            crank = 'D';
        else
            if( grade < 80 )
                crank = 'C';
            else
                if( grade < 90 )
                    crank = 'B';
                else
                    if( grade <= 100 )
                        crank = 'A';
                    else
                        cout << "\aError Data\n";
    cout << crank << endl;
    return 0;
}
