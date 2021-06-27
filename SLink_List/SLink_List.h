#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef int SListDataType;
//结点
typedef struct SListNode
{
    SListDataType data;
    struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);

void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFront(SListNode** pphead);

//打印单链表
void SListPrint(SListNode* phead);
//创建结点
SListNode* BuySListNode(SListDataType x);
//单链表的查找
SListNode* SListFind(SListNode* phead, SListDataType x);
