#include <iostream>
#include <string>
#include <cctype>
//�˶γ���ּ���ڶ��±��Ӧ��
using namespace std;
int main()
{
    string random;
    cout << "please enter a series of word:"<<endl;
    getline(cin,random);
    for(decltype(random.size()) index = 0; index!=random.size()&&!isspace(random[index]) ;++index)
        random[index]= toupper(random[index]);//����ǰ�ַ��ĳɴ�д��ʽ
    cout << random << endl;
    return 0;
}
