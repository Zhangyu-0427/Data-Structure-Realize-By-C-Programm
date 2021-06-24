#include "SeqList.h"

void SqListCheckcapacity(SqList *p)
{
    if(p->size >= p->capacity)
    {
        p->capacity *= 2;
        p->a = (DataType*)realloc(p->a, sizeof(DataType) * p->capacity);
        if(p->a == NULL)
        {
            printf("增容失败");
            exit(0);
        }
    }
}

void SqListInit(SqList* s)
{

    s->a = (DataType*)malloc(sizeof(DataType) * 4);
    if(s->a == NULL)
    {
        printf("申请内存失败");
        exit(0);
    }
    s->size = 0;
    s->capacity = 4;

}

void SqListPrint(SqList* s)
{
    assert(s);
    int i = 0;
    for(i = 0; i < s->size; i++)
        printf("%d ",s->a[i]);
    printf("\n");
}

void SqListPushBack(SqList* p, DataType X)
{
    assert(p);
    //增容
    SqListCheckcapacity(p);
    p->a[p->size] = X;
    p->size++;
}

void SqListPopBack(SqList* p)
{
    assert(p);

    p->size--;
}

void SqListPushFront(SqList* p, DataType X)
{
    assert(p);
    SqListCheckcapacity(p);
    int i = 0;
    for(i = p->size; i>0; i--)
    {
        p->a[i] = p->a[i-1];
    }
    p->a[0] = X;
    p->size++;
}

void SqListPopFront(SqList* p)
{
    assert(p);
    int i = 0;
    for(i = 1; i<p->size; i++)
    {
        p->a[i-1] = p->a[i];
    }
    p->size--;
}

void SqListInsert(SqList *p, int pos, DataType X)
{
    assert(p);
    SqListCheckcapacity(p);
    int i = 0;
    for(i = p->size; i>pos; i--)
    {
        p->a[i] = p->a[i-1];
    }
    p->a[pos] = X;
    p->size++;
}

void SqListErase(SqList *p, int pos)
{
    int i = 0;
    for(i = pos; i<p->size-1; i++)
    {
        p->a[i] = p->a[i+1];
    }
    p->size--;
}
