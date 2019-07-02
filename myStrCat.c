#include"myHuffmanHead.h"

int myStrCat(char *des, char *str)
{
    char *needCatP = des;

    while (1)
    {
        if (*needCatP == '\0')
        {
            *needCatP = str;

            *(needCatP + 1) = '\0';

            break;
        }
        else
        {
            ++needCatP;
        }
    }
    return 0;
}
