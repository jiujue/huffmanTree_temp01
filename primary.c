#include"myHuffmanHead.h"

int main()
{

    nodeHuffmanTree_t *head = NULL;
    nodeHuffmanTree_t *headTree = NULL;
    char *needcode;
    printf("we will create file on src dir  \n");

    obtainIput(&head, &needcode);
	

    creatHuffmanTree(head, &headTree);

    huffmanCode(head, headTree);

    printLinkList(head);

	printf("---------------split line-------------------------\n");
	hartSearcherEncode(head);
	printf("Encode done\n");
	decode(headTree);
	printf("Encode done\n");
	printf("---------------split line-------------------------\n");
	//writeBinary();
	printf("writeBinary done\n");

	system("pause");
    return 0;
}
