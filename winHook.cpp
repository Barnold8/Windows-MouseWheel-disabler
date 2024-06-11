#include <windows.h>
#include <iostream>


HHOOK hMouseHook;


LRESULT CALLBACK MouseProc(int nCode, WPARAM wParam, LPARAM lParam) {

    if(nCode < 0){
        return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
    }

    if (wParam == WM_MOUSEWHEEL) {
            return 1;
        }

    return CallNextHookEx(hMouseHook, nCode, wParam, lParam);
}


int main() {

    SetWindowsHookEx(WH_MOUSE_LL,MouseProc, GetModuleHandle(NULL),0);

    MSG msg;

    while(GetMessage(&msg,NULL,0,0)){

        

    }


    return 0;
}
