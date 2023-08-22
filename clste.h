#ifdef _WIN32
    #include <windows.h>
#endif
    #include <stdlib.h>
void cls()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}