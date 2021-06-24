#include "SeqList.h"

void TestSqList1()
{
    SqList s;
    SqListInit(&s);
    SqListPushBack(&s,1);
    SqListPushBack(&s,2);
    SqListPushBack(&s,3);
    SqListPushBack(&s,4);
    SqListPushBack(&s,5);
    SqListPushBack(&s,6);
    SqListPrint(&s);

    SqListPopBack(&s);
    SqListPopBack(&s);
    SqListPrint(&s);

    SqListPushFront(&s,8);
    SqListPushFront(&s,9);
    SqListPushFront(&s,-1);
    SqListPrint(&s);

    SqListPopFront(&s);
    SqListPopFront(&s);
    SqListPrint(&s);

    SqListInsert(&s,4,9);
    SqListInsert(&s,5,9);
    SqListInsert(&s,6,9);
    SqListInsert(&s,7,9);
    SqListInsert(&s,8,9);
    SqListPrint(&s);

    SqListErase(&s,4);
    SqListErase(&s,2);
    SqListPrint(&s);
}
int main()
{
    TestSqList1();
    return 0;
}
