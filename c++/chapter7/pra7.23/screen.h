#ifndef SCREEN_H_INCLUDED
#define SCREEN_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

//
class Screen
{
    friend void inputScreen(Screen scr);
public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; }
    inline char get(pos r, pos c) const;
    Screen& move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos,pos,char);
private:
    pos cursor = 0; //���λ��
    pos height = 0, width = 0; //��Ļ�ߺͿ�
    string contents;//��Ļ����

};

void inputScreen(Screen scr);




//���³�Ա������Ϊ��Ҫ����Ϊinline����Ӧ�ý��䶨�����ͷ�ļ���
//�ƶ����
inline Screen& Screen::move(pos r, pos c)
{
    r = r - 1;
    c = c - 1;
    pos row = r * width; //�����е�λ��
    cursor = row + c;  //���ڽ������ƶ����ƶ�����
    return *this;
}
//��ȡ�����Ӧ�ַ�
char Screen::get(pos r,pos c) const
{
    r = r - 1;
    c = c - 1;
    pos row = r * width;
    return contents[row + c];
}
//���ù�����ڴ����ַ�
inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
//���ö�Ӧλ�õ��ַ�
inline Screen &Screen::set(pos r, pos c, char ch)
{
    r = r - 1;
    c = c - 1;
    contents[ r * width + c] = ch;
    return *this;
}

#endif // SCREEN_H_INCLUDED
