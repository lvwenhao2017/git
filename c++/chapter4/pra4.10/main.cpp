#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 1,j = 0, k = 1;
/*   while( i != j <k ) //k>1������
        cout << i << " ";*/
/*    while (cin >>i ) {
        if( i == 42)
        {
            break;
        }
        cout << i << " ";
    }��������42ֹͣ*/
/*    char name[16];
    char school[50];
    cin.get(name,16);
    /*  cin.get();  */
/*    cin.getline(school,50);
    cout << name << " " << endl << school << endl;//������������ school�յ��س��� ���� �����һ����� ��ȥ�س�
    */

    while(cin >> i)
        j+=i;
    cin.clear();
  /*  cin >> k;     �ڱ��ļ��������������֮�� ��λ����״̬�ɼ�������*/
    cout << j << " " << k;
    return 0;
}
