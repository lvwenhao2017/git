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
    pos cursor = 0; //光标位置
    pos height = 0, width = 0; //屏幕高和宽
    string contents;//屏幕内容

};

void inputScreen(Screen scr);




//以下成员函数因为需要声明为inline所以应该将其定义放在头文件中
//移动光标
inline Screen& Screen::move(pos r, pos c)
{
    r = r - 1;
    c = c - 1;
    pos row = r * width; //计算行的位置
    cursor = row + c;  //行内将坐标移动到制定的列
    return *this;
}
//读取坐标对应字符
char Screen::get(pos r,pos c) const
{
    r = r - 1;
    c = c - 1;
    pos row = r * width;
    return contents[row + c];
}
//设置光标所在处的字符
inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
//设置对应位置的字符
inline Screen &Screen::set(pos r, pos c, char ch)
{
    r = r - 1;
    c = c - 1;
    contents[ r * width + c] = ch;
    return *this;
}

#endif // SCREEN_H_INCLUDED
