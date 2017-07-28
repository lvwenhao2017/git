#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string word;
    vector<string> ivec;
    while(cin >> word)
        ivec.push_back(word);
    for(auto i : ivec)
        cout << i;
    return 0;
}
