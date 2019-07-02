#include "myHuffmanHead.h"

int hartSearcherEncode(nodeHuffmanTree_t* head)
{
	nodeHuffmanTree_t* head01 = NULL;
	FILE* srcFile = fopen("./src/src.txt","r");
	FILE* EncodeFile = fopen("./src/encoded.txt", "wb");
	if (srcFile == NULL || EncodeFile == NULL)
	{
		printf("open file fial\n");
		exit(1);
	}

	while (!feof(srcFile)) 
	{
		char temp = fgetc(srcFile);
		head01 = head;
		while (head01 !=NULL)
		{
			if (head01->key==temp)
			{
				fputs(head01->code, EncodeFile);
				break;
			}
			else
			{
				head01 = head01->next;
			}
		}
	}
	fclose(EncodeFile);
	fclose(srcFile);
	return 0;
}