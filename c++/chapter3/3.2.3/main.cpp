#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//该段程序讨论了
int main()
{
    string line;
    getline(cin,line);
    decltype(line.size()) punct_cnt =0;
    for(auto c:line)
    {
        if(ispunct(c))
            ++punct_cnt;
    }
    cout << punct_cnt << endl;
    return 0;
}
