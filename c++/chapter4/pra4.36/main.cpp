#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int i = 2;;
    double d = 2.5;
    i *= static_cast<int>(d);//得到结果4
    cout << i;
    return 0;
}
