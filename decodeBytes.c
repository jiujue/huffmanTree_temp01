#include "myHuffmanHead.h"


int decodeBytes(nodeHuffmanTree_t* head)
{

		//decodeBinary
		FILE* EncodedFile = fopen("./src/decodeBinary.txt", "r");
		FILE* DecodedFile = fopen("./src/src-duplicate.txt", "w");
		nodeHuffmanTree_t* head01 = NULL;

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