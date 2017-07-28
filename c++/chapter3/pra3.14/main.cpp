#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int currval;
    vector<int> val;
    while(cin >> currval)
        val.push_back(currval);
    for(auto i:val)
        cout << i << " ";
    return 0;
}
