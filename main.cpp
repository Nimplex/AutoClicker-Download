#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int at1;
int at2;


int main()
{
    system("cls");
    cout<<"Aby zaczac klikac nacisnij F6\nAby zakonczyc klikac nacisnij F7"<<endl;
    while(GetAsyncKeyState(VK_F6)) {
        while(!GetAsyncKeyState(VK_F7))
        {
            Sleep(1);
            mouse_event(MOUSEEVENTF_LEFTDOWN, at1, at2, 0,0);
            mouse_event(MOUSEEVENTF_LEFTUP, at1, at2, 0,0);
        }
        main();
    }
    Sleep(1000);
    main();
}
