#include <windows.h>
#include <string>
#include <cstring>

void message_windows_activated(std::wstring win_ver);
void message_windows_error_activated(void);

void run_activation(void);

void set_activation_key(std::string key);

std::wstring application_title = L"FKMSActivator";
std::string win_8_1_key = "GCRJD-8NW9H-F2CDX-CCM8D-9D6T9";
std::string win_10_11_key = "W269N-WFGWX-YVC9B-4J6C9-T83GX";
std::string activation_service = "kms8.msguides.com";

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    using namespace std;

    ShowWindow(GetConsoleWindow(),0);

    OSVERSIONINFOEX info;
    ZeroMemory(&info, sizeof(OSVERSIONINFOEX));
    info.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
    GetVersionEx((LPOSVERSIONINFO)&info);

    string version = 
    string(to_string(info.dwMajorVersion)) + 
    '.' +
    string(to_string(info.dwMinorVersion));

    wstring windows_ver;

    if(version == "10.0"){
        if(info.dwBuildNumber >= 20000)
            windows_ver = L"11";
        else
            windows_ver = L"10";
        set_activation_key(win_10_11_key);
        run_activation();
    }
    else if(version == "6.2"){
        windows_ver = L"8.1";
        set_activation_key(win_8_1_key);
        run_activation();
    }
    else{
        message_windows_error_activated();
    }

    message_windows_activated(windows_ver);

    return 0;
}

void message_windows_error_activated(){
    using namespace std;

    wstring windows_title = wstring(L"Windows 7 и 8 не поддерживается KMS активатором! Обновите систему, либо используете другой активатор");

    MessageBoxW(NULL, LPCWSTR(windows_title.c_str()), LPCWSTR(application_title.c_str()), MB_ICONERROR | MB_OK);

    exit(1);
}

void message_windows_activated(std::wstring winver){
    using namespace std;

    LPCWSTR windowstitle = LPCWSTR((wstring(L"Windows ") + winver + L" успешно активирован!").c_str());

    MessageBoxW(NULL, LPCWSTR(windowstitle), LPCWSTR(application_title.c_str()), MB_ICONINFORMATION | MB_OK);
}

void set_activation_key(std::string key){
    using namespace std;
    system((string("cscript C:\\Windows\\System32\\slmgr.vbs /ipk ") + key).c_str());
}

void run_activation(){
    using namespace std;
    system((string("cscript C:\\Windows\\System32\\slmgr.vbs /skms ") + activation_service).c_str());
    system("cscript C:\\Windows\\System32\\slmgr.vbs /ato");
}
