#include"myHuffmanHead.h"

/*
    1.1 先遍历 链表 计算有几个需要编码
    1.2 创建一个空间 来存储 需要被编码的节点 并在每次编码后将编码后的过的删除 替换成 parent
*/

static nodeHuffmanTree_t **spaceSave = NULL;

nodeHuffmanTree_t ** getSpaceSave(nodeHuffmanTree_t *headLinkList)
{
    nodeHuffmanTree_t *t1 = headLinkList;

    int n = 0;
    int i = 1;

    while (t1 != NULL)
    {
        n++;
        t1 = t1->next;
    }

    spaceSave = (nodeHuffmanTree_t*)malloc(sizeof(nodeHuffmanTree_t*)*n + 1);

    t1 = headLinkList;

    while (i < n + 1)
    {
        spaceSave[i] = t1;
        ++i;
        t1 = t1->next;
    }

    (int)spaceSave[0] = n;

    return n;
}

int creatHuffmanTree(nodeHuffmanTree_t *headLinkList, nodeHuffmanTree_t **headhuffmanTree)
{
    //nodeHuffmanTree_t **spaceSave = NULL;

    int n = getSpaceSave(headLinkList);
    int n2 = (int)spaceSave[0];

    while (n2 > 1)
    {

        int t1, t2;

        getMinTwo(spaceSave, n, &t1, &t2);


        makeBranch(spaceSave, n, t1, t2);

        n2--;
    }

    while (n >= 1)
    {
        if (spaceSave[n] != NULL)
        {
            *headhuffmanTree = spaceSave[n];
            break;
        }
        else
        {
            n--;
        }
    }

    return 0;
}
