#include <iostream>
#include <string>
#include <cctype>
using namespace std;
//�öγ���������
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
