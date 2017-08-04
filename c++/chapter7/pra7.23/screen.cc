#include "screen.h"
#include <string>
using pos = string::size_type;
//函数定义位置声明为内联函数

void inputScreen(Screen scr)
{
    for( pos j = 0; j < scr.height; ++j )
        for( pos i = 0; i < scr.width; ++i )
    {
        std::cout << scr.contents[ i * scr.width + j];
        if( i == ( scr.width - 1 ) )
            cout << endl;
    }
}
//

