#include "SLink_List.h"

/*-----------打印单链表---------*/
void SListPrint(SListNode* phead)
{
    //遍历链表
    SListNode* cur = phead;

    while(cur != NULL)
    {
        printf("%d->",cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}
/*-----------创建单链表结点-----------*/
SListNode* BuySListNode(SListDataType x)
{
    SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
    if(newNode == NULL)
    {
        printf("申请结点失败!\n");
        exit(0);
    }
    //完善结点
    newNode->data = x;
    newNode->next = NULL;

    return newNode;
}
/*-----------------单链表的尾插---------------------*/
void SListPushBack(SListNode** pphead, SListDataType x)
{
    SListNode* newNode = BuySListNode(x);

    if(*pphead == NULL)
    {
        *pphead = newNode;
    }
    else
    {
        SListNode* tail = *pphead;
        //找尾指针
        while(tail->next != NULL)
        {
            tail = tail->next;
        }
        //此时的tail即为尾指针

        //链接结点
        tail->next = newNode;
    }
}

//单链表的尾删需要好好琢磨
/*------尾部删除单链表的结点--------*/
void SListPopBack(SListNode** pphead)
{
    if(*pphead == NULL)
    {
        return ;
    }
    else if((*pphead)->next == NULL)
    {
        free(*pphead);
        *pphead = NULL;
    }
    else
    {
        SListNode* prev = NULL;
        SListNode* tail = *pphead;
        while(tail->next != NULL)
        {
            prev = tail;
            tail = tail->next;
        }
        free(tail);
        prev->next = NULL;
    }
}

/*---------单链表的头部插入------------*/
void SListPushFront(SListNode** pphead, SListDataType x)
{
    SListNode* newNode = BuySListNode(x);

    //1. 空链表
    if(*pphead == NULL)
    {
        *pphead = newNode;
    }
    //2. 非空
    else
    {
        newNode->next = *pphead;
        *pphead = newNode;
    }

    //1和2 可以结合成一种情况 但是为了代码简单分明起见 还是分
    //两种情况来写
}
/*------单链表的头部删除------*/
void SListPopFront(SListNode** pphead)
{
    if(*pphead == NULL)
        return ;
    else
    {
        SListNode* next = (*pphead)->next;
        free(*pphead);//free之后不可再访问其内存
        *pphead = next;
    }
}
/*--------------------单链表的查找-------------------*/
SListNode* SListFind(SListNode* phead, SListDataType x)
{
    SListNode* cur = phead;
    while(cur)
    {
        if(cur->data == x)
            return cur;
        cur = cur->next;
    }
    return NULL;
}
