#include"myHuffmanHead.h"

int obtainIput(nodeHuffmanTree_t **head,char **input)
{
    char tempInput;
    nodeHuffmanTree_t **t1 = head;
    nodeHuffmanTree_t *t2 = NULL;

	FILE* srcFile = fopen("./src.txt","r");
	if (srcFile == NULL) 
	{
		printf("op file fail\n");
		exit(1);
	}
	tempInput = fgetc(srcFile);
    *input = tempInput;
    while (!feof(srcFile))
    {
      if (!(t2= isExitence( (*head), tempInput)))
        {
            nodeHuffmanTree_t *nodeTempHuffman = (nodeHuffmanTree_t *)malloc(sizeof(nodeHuffmanTree_t));

            (*t1) = nodeTempHuffman;

            nodeTempHuffman->key = tempInput;
            nodeTempHuffman->frequency = 1;
            nodeTempHuffman->next = NULL;
            nodeTempHuffman->lchild = NULL;
            nodeTempHuffman->rchild = NULL;
            nodeTempHuffman->isCoded = 0;
			nodeTempHuffman->code = NULL;
            t1 = &((*t1)->next);
            tempInput = fgetc(srcFile);
        }
        else
        {
            t2->frequency++ ;
            tempInput = fgetc(srcFile);
            continue;
        }
    }

	fclose(srcFile);
    return 0;
}
