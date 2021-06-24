#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType; /* 一改多改 */
 /* 静态顺序表的设计（固定大小） 错 */
 /* 设计动态顺序表 正确*/
typedef struct
{
    /*实际上静态顺序表用的很少*/
    //DataType a[N];
    DataType* a;  //动态开辟的数组
    int size;     //有效数据个数
    int capacity; //容量
}SqList;
void SqListInit(SqList* s);
void SqListPrint(SqList* s);
void SqListCheckcapacity(SqList *p);
// 头插尾插 头删尾删
void SqListPushBack(SqList* p, DataType X);
void SqListPopBack(SqList* p);
void SqListPushFront(SqList* p, DataType X);
void SqListPopFront(SqList* p);

//任意位置的插入与删除
void SqListInsert(SqList *p, int pos, DataType X);
void SqListErase(SqList *p, int pos);
