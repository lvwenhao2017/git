#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<int> vec1,vec2;
    vector<int> vec3;
    int i;
    while( cin >> i )
        vec1.push_back(i);
    cin.clear();
    while(cin >> i)
        vec2.push_back(i);
    if ( vec1.size() > vec2.size() )//��֤vec1Ϊ�϶̵�����
    {
        vec3 = vec1;
        vec1 = vec2;
        vec2 = vec3;
    }
    auto it1 = vec1.begin(), it2 = vec2.begin();
    for( ;it1 != vec1.end();it1++ )
    {
        i = 1;
        if( *it1 != *it2 )
            i = 0;
        it2++;
    }
    if( i )
        cout << "����ǰ׺��ϵ";
    else
        cout << "������";
    return 0;
}
