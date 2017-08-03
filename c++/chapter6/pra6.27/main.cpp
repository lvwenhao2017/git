#include <iostream>
#include <initializer_list>
#include <vector>
using namespace std;
using ilist = initializer_list<int>;
int sum( initializer_list<int> );

/*
int main()
{
    cout << "Hello world!" << endl;
    int i;
    vector<int> vec;
    while(cin >> i)
        vec.push_back(i);
    cout << sum(vec);
    return 0;
}
int sum( vector<int> vec)
{
    int sum = 0;
    for( auto beg = vec.begin(); beg != vec.end(); ++beg)
        sum += *beg;
    return sum;
}

*/
int main()
{
    int i;

}

int sum( ilist il)
{
    int sum = 0;
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        sum += *beg;
    return sum;
}
