#include"myHuffmanHead.h"

nodeHuffmanTree_t* isExitence(nodeHuffmanTree_t* head, char inputTemp)
{
    int i = 0;

    if (NULL == head)
    {
        return NULL;
    }
    else
    {


        if((head->key==inputTemp))
        {
            return head;
        }
        else
        {
            isExitence(head->next, inputTemp);
        }
    }
}
