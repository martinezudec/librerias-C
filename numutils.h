#include <limits.h>

int intInRange(int num, int min, int max)
{
    int result=0;

    if ((int)(num)==num&&num>=min&&num<=max)
    {
        result=1;
    }

    return result;
}

int fltInRange(float num, float min, float max)
{
    int result=0;

    if ((float)(num)==num&&num>=min&&num<=max)
    {
        result=1;
    }

    return result;
}

int aprox(float x)
{
    int new_int;
    new_int=((x)>=0?(int)((x)+0.5):(int)((x)-0.5));
    return new_int;
}
