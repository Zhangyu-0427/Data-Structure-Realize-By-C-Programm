#include "SLink_List.h"
void TestSList1();
void TestSList2();
int main()
{
    //TestSList1();
    TestSList2();
    return 0;
}
void TestSList1()
{
    SListNode* PList = NULL;
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPrint(PList);

    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPrint(PList);

    SListPushFront(&PList, 7);
    SListPushFront(&PList, 6);
    SListPushFront(&PList, 5);
    SListPushFront(&PList, 4);
    SListPushFront(&PList, 3);
    SListPushFront(&PList, 2);
    SListPushFront(&PList, 1);
    SListPushFront(&PList, 0);
    SListPrint(PList);

    SListPopFront(&PList);
    SListPrint(PList);
}
void TestSList2()
{
    SListNode* PList = NULL;
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPushBack(&PList, 5);
    SListPrint(PList);

    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPopBack(&PList);
    SListPrint(PList);

    SListPushFront(&PList, 7);
    SListPushFront(&PList, 6);
    SListPushFront(&PList, 5);
    SListPushFront(&PList, 4);
    SListPushFront(&PList, 3);
    SListPushFront(&PList, 2);
    SListPushFront(&PList, 1);
    SListPushFront(&PList, 0);
    SListPrint(PList);

    SListPopFront(&PList);
    SListPrint(PList);

    SListNode* pos = SListFind(PList, 3);
    if(pos)
        pos->data = 30;
    SListPrint(PList);
}
