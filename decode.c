#include "myHuffmanHead.h"


int getKey(char needrapa, FILE* EncodedFile,FILE* DecodedFile, nodeHuffmanTree_t* head)
{
	if (head == NULL) 
	{
		
		return 1;
	}
	else
	{
		if (needrapa == '0') {
			head = head->lchild;
			if ((int)head->key != -51)
			{
				fputc(head->key, DecodedFile);
				return 0;
			}
			else
			{
				needrapa = fgetc(EncodedFile);
				getKey(needrapa, EncodedFile, DecodedFile, head);
			}
		}
		else if(needrapa == '1')
		{
			//change here
			head = head->rchild;
			if ((int)head->key != -51)
			{
				fputc(head->key, DecodedFile);
				return 0;
			}
			else
			{
				needrapa = fgetc(EncodedFile);
				getKey( needrapa, EncodedFile, DecodedFile, head);
			}
		}
	}

	return 0;
}


int decode(nodeHuffmanTree_t* head)
{
	FILE* EncodedFile = fopen("./src/encoded.txt", "r");
	FILE* DecodedFile = fopen("./src/decoded.txt", "w");
	nodeHuffmanTree_t* head01 = NULL ;

	if (EncodedFile == NULL || DecodedFile == NULL) 
	{
		printf("open file fial\n");
		exit(1);
	}

	while (!feof(EncodedFile))
	{
		head01 = head;
		char temp = fgetc(EncodedFile);
		getKey(temp, EncodedFile, DecodedFile, head01);
	}

	fclose(DecodedFile);
	fclose(EncodedFile);

	return 0;
}
