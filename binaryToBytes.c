#include "myHuffmanHead.h"

int decodeByBinary(void *arg)
{
	printf("%d\n", sizeof(binaryNode));
	binaryNode* test = (binaryNode*)malloc(sizeof(binaryNode));
	memset(test, 0, sizeof(binaryNode));

	//encodeBinary
	FILE* encodeFile = fopen("./src/encodeBinary.txt", "r");
	FILE* decodeFile = fopen("./src/decodeBinary.txt", "w");

	if (encodeFile == NULL || decodeFile == NULL)
	{
		printf("open file fial\n");
		exit(1);
	}

	while (!feof(encodeFile))
	{
		unsigned char temp = 1;
		int res = fread(test, 1, 1, encodeFile);
		if (res == 0) {
			break;
		}
		for (int i = 0; i < 8; ++i)
		{
			switch (i)
			{
			case 0:
				if (test->one == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 1:
				if (test->two == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 2:
				if (test->three == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 3:
				if (test->four == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 4:
				if (test->five == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 5:
				if (test->six == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 6:
				if (test->seven == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			case 7:
				if (test->eight == temp)
				{
					fputc('1', decodeFile);
				}
				else
				{
					fputc('0', decodeFile);

				}
				break;
			default:
				break;
			}
		}
	}

	fclose(encodeFile);
	fclose(decodeFile);
	return 0;
}