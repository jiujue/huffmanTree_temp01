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
	printf("---------------split line-------------------------\n");
	decode(headTree);
	printf("Decode done\n");

	printf("---------------split line-------------------------\n");

	encodeByBinary(NULL);
	printf("encodeByBinary done\n");
	printf("---------------split line-------------------------\n");
	decodeByBinary(NULL);
	printf("decodeByBinary done\n");
	printf("---------------split line-------------------------\n");
	decodeBytes(headTree);
	system("pause");
    return 0;
}
