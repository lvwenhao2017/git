#include <iostream>
#include <vector>
//用递归函数输出vector的内容
using namespace std;
void printVec(const vector<int>& , vector<int>::size_type  );
 main()
{
    cout << "Hello world!" << endl;
    vector<int> vec;
    int val;
    while( cin >> val )
        vec.push_back(val);
    vector<int>::size_type i = 0;
    printVec(vec,i);
    return 0;
}
void printVec(const vector<int>& vec, vector<int>::size_type i )
{
    if( i == vec.size() )
        return;
    else
    {
        cout << vec[i++] << " ";
        printVec(vec, i);
    }
}
