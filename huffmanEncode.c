#include"myHuffmanHead.h"

/*

    递归 每次向下递归是 向左递归 传0 向右传1
    每次接受并改掉 '\0' 为传的 0或1 然后追加 '\0';
        每次传个n来记录编码空间长度 n+1

*/
int huffmanCode(nodeHuffmanTree_t *headLinkList, nodeHuffmanTree_t *headhuffmanTree)
{
    headhuffmanTree->code = (char*)malloc(2);
    
    *(headhuffmanTree->code) = '\0';

    huffmanCode_(headhuffmanTree, headhuffmanTree->lchild, '0', 1);
    huffmanCode_(headhuffmanTree, headhuffmanTree->rchild, '1', 1);
}

int huffmanCode_(nodeHuffmanTree_t *parenthuffmanTree, nodeHuffmanTree_t *nexthuffmanTree, char tempCode, int layer)
{
    if (NULL == nexthuffmanTree)
    {
        return 0;
    }
    else
    {
        char *tempSpace = (char*)malloc(sizeof(parenthuffmanTree->code));

        nexthuffmanTree->code = (char*)malloc(layer+2);
        
        changeCode(parenthuffmanTree->code, nexthuffmanTree->code, tempCode, tempSpace);

        huffmanCode_(nexthuffmanTree, nexthuffmanTree->lchild, '0', layer + 1);

        huffmanCode_(nexthuffmanTree, nexthuffmanTree->rchild, '1', layer + 1);

    }
}
