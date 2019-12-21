#include "myHuffmanHead.h"

int writeBinary() 
{
	binaryNode* test = (binaryNode*)malloc(sizeof(binaryNode));
	memset(test,0,sizeof(binaryNode));
	FILE* encodeFile = fopen("./src/encoded.txt", "rb");
	FILE* writeByBinary = fopen("./src/encodeBinary.txt", "wb");

	if (encodeFile == NULL || writeByBinary == NULL)
	{
		printf("open file fial\n");
		exit(1);
	}


	while (!feof(encodeFile))
	{
		for (int i = 0; i < 8; ++i) 
		{
			char temp = fgetc(encodeFile);
			if(temp!=EOF)
			{
				*(unsigned char*)(test+i) = (unsigned char)temp;
			}
			else
			{
				if (i < 8) 
				{
					for ( i = 0; i < 8; i++)
					{
						*(unsigned char*)(test + i) = 0;
					}
				}
				break;
			}
		}
		fputc(test, writeByBinary);
	}

	fclose(encodeFile);
	fclose(writeByBinary);
	return 0;
}