#include"myHuffmanHead.h"

static int  flag = 0;

int getMinTwo(nodeHuffmanTree_t **spaceSave,int spaceSize ,int *t1, int *t2)
{

    int i = 0;
    int j = 0;

    while (i<2)
    {
        int min = 1;
        j = 0;

        while (j+1 < spaceSize)
        {
            if (NULL==spaceSave[1 + j])
            {
                j++;
                continue;
            }
            if (0 == spaceSave[1 + j]->isCoded)
            {
                min = 1 + j;
                break;
            }
            else
            {
                j++;
            }
        }

        for (j= 0; j < spaceSize; ++j)
        {
            if (NULL == spaceSave[min] || NULL == spaceSave[1 + j])
            {
                continue;
            }
            if (spaceSave[min]->frequency > spaceSave[1 + j]->frequency && spaceSave[1 + j]->isCoded !=1)
            {
                min = 1 + j;
            }
        }

        spaceSave[min]->isCoded = 1;

        if (0 == flag)
        {
            *t1 = min;
            flag++;
        }
        else
        {
            *t2 = min;
            flag--;
        }

        i++;
    }


}
