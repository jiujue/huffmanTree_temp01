#include"myHuffmanHead.h"

int changeCode(char *strParent, char *strKid, char needAppend, char *tempspace)
{
    strcpy(tempspace, strParent);

    char *tempP = tempspace;

    while (1)
    {
        if (*tempP == '\0')
        {
            *tempP = needAppend;

            *(tempP + 1) = '\0';

            strcpy(strKid, tempspace);

            break;
        }
        else
        {
            ++tempP;
        }
    }
    return 0;
}
