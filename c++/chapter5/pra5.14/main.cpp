#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s,temps;
    unsigned int cnt = 1;//�������ظ�����
    cin >> temps;
    unsigned int tempcnt = 1;//����ʱ���ظ�����
    while ( cin >> s )
    {
        if( s == temps )//����ظ� ��ô�ظ�������һ ��ǰ�ַ���������ʱ�ַ���
        {
            tempcnt++;
        }
        else//�ظ�ֹͣ����ʼ����ϴ���ظ�����
        {
            if( tempcnt >cnt )
            {
                cnt = tempcnt;//�Ѷ��ߵĽϴ�ֵ����cnt
                tempcnt = 1;
            }
            temps = s;//�����ַ�������� ����ı�temps
        }
    }
    if( tempcnt > cnt )//���һ������֮��δ���бȽ�
    {
        cnt = tempcnt;//�Ѷ��ߵĽϴ�ֵ����cnt
        tempcnt = 1;
    }
    if( cnt != 1 )
        cout << cnt;
    else
        cout << "No same data!\n";
    return 0;
}
