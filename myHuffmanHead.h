#pragma once

#pragma warning(disable :4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
    huffmanTree : 思路
     注：每个关键字为一个节点 整个数据使用链表存储
        节点内容 : 关键字 ，出现次数 ，编码 ， 下一个节点。 
        将 关键字的出现频率作为权值来生成HuffmanTree 然后进行Huffman code
            //1.获取关键字频率 
                1.1 获取输入 并 记录 关键字 出现次数
                                
            2.生成HuffmanTree
                
                
            3.根据h uffmanTree 进行HuffmanCode 并打印每个关键字的  Huffman编码 
                    tips : 左 0 ; 右 1 
*/
/*
	替换思路 
		charset map


*/

typedef struct BinaryNode
{
	unsigned char one : 1;
	unsigned char two : 1;
	unsigned char three : 1;
	unsigned char four : 1;
	unsigned char five : 1;
	unsigned char six : 1;
	unsigned char seven : 1;
	unsigned char eight : 1;
}binaryNode;

typedef struct nodehuffmantree {

    char key;
    int frequency;
    
    char *code;

    int isCoded;

    struct nodehuffmantree * next;
    struct nodehuffmantree *lchild, *rchild;

}nodeHuffmanTree_t;

int myStrCat(char *des, char *str);

int changeCode(char *strParent, char *strKid, char needAppend, char *tempspace);
 
int printLinkList(nodeHuffmanTree_t *head);

int makeBranch(nodeHuffmanTree_t **spaceSave, int spaceSize, int t1, int t2);

nodeHuffmanTree_t* isExitence(nodeHuffmanTree_t* head, char inputTemp);

int creatHuffmanTree(nodeHuffmanTree_t *headLinkList, nodeHuffmanTree_t **headhuffmanTree);

nodeHuffmanTree_t ** getSpaceSave(nodeHuffmanTree_t *headLinkList);

int huffmanCode(nodeHuffmanTree_t *headLinkList, nodeHuffmanTree_t *headhuffmanTree);

int createHuffMap(nodeHuffmanTree_t* head);
int hartSearcherEncode(nodeHuffmanTree_t* head);
int decode(nodeHuffmanTree_t* head);

int encodeByBinary(void *);
int decodeByBinary(void *);
int decodeBytes(nodeHuffmanTree_t* head);

