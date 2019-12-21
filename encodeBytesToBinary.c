#include "myHuffmanHead.h"

int encodeByBinary(void* arg)
{
	printf("%d\n", sizeof(binaryNode));
	binaryNode* test = (binaryNode*)malloc(sizeof(binaryNode));
	memset(test, 0, sizeof(binaryNode));

	FILE* encodeFile = fopen("./src/encodedBytes.txt", "r");
	FILE* writeByBinary = fopen("./src/encodeBinary.txt", "w");

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
			if (temp != EOF)
			{
				switch (i)
				{
				case 0:
					test->one = temp;
					break;
				case 1:
					test->two = temp;
					break;
				case 2:
					test->three = temp;
					break;
				case 3:
					test->four = temp;
					break;
				case 4:
					test->five = temp;
					break;
				case 5:
					test->six = temp;
					break;
				case 6:
					test->seven = temp;
					break;
				case 7:
					test->eight = temp;
					break;
				default:
					break;
				}
			}
			else
			{
				goto done;
			}
			/*else	//surplus binary processing
			{	// surplus binary processing
				if (i < 8)
				{
					for (i; i < 8; i++)
					{
						switch (i)
						{
							case 0:
								test->one = temp;
								break;
							case 1:
								test->two = temp;
								break;
							case 2:
								test->three = temp;
								break;
							case 3:
								test->four = temp;
								break;
							case 4:
								test->five = temp;
								break;
							case 5:
								test->six = temp;
								break;
							case 6:
								test->seven = temp;
								break;
							case 7:
								test->eight = temp;
								break;
							default:
								break;
						}
					}
				}
				break;
			}*/
		}
		fwrite((char*)test, 1, 1, writeByBinary);
	}
done:
	fclose(encodeFile);
	fclose(writeByBinary);
	return 0;
}