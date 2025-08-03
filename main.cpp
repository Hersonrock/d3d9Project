import std;
import D3DApp;

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
                LPSTR lpCmdLine, int nCmdShow){

        D3DApp d3dApp;
        if(!d3dApp.initWindow(hInstance))
                return 1;

        

        //Message Loop
        MSG msg{};
        while(msg.message != WM_QUIT){
                if(PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)){
                        TranslateMessage(&msg);
                        DispatchMessage(&msg);
                }
                else { 
                        //Game Loop
                }

        }

        return (int)msg.wParam;
}

