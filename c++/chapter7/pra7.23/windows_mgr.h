#ifndef WINDOWS_MGR_H_INCLUDED
#define WINDOWS_MGR_H_INCLUDED
#include "screen.h"
#include <vector>

//������Ļ����
class windows_mgr
{
public:
    vector<Screen> screens{screen(25,4,' ')};
    windows_mgr(Screen scr) { screens.push_back(screen); }

};


#endif // WINDOWS_MGR_H_INCLUDED
