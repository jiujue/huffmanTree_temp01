#include"myHuffmanHead.h"

int makeBranch(nodeHuffmanTree_t **spaceSave, int spaceSize, int t1, int t2)
{

    nodeHuffmanTree_t *newNode = (nodeHuffmanTree_t*)malloc(sizeof(nodeHuffmanTree_t));

    newNode->frequency = spaceSave[t1]->frequency + spaceSave[t2]->frequency;
    newNode->isCoded = 0;

    newNode->lchild = spaceSave[t1];
    newNode->rchild = spaceSave[t2];

    spaceSave[t1] = newNode;
    spaceSave[t2] = NULL;

}
