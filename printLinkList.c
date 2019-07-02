#include"myHuffmanHead.h"

int printLinkList(nodeHuffmanTree_t *head)
{
    printf(" Key\t Frequncy\t HuffmanCode\n\n");
    while (head != NULL)
    {
        printf(" %c\t %d\t %s\n", head->key, head->frequency, head->code);
        
        head = head->next;
    }
}

