#include <stdio.h>
/****************************************************************
 * name；Seqlist
 * function：deleted element in sequence list
 * parameter；
 * ReValue；
 * author；bsb
 * attention；
 * date；
 * history；
 * version；
 * Copyright(c) 2024 huahuadebaby99@163.com All rights Reserved
 *****************************************************************/
// 构造记录顺序表各项参数（顺序表首地址 顺序表容量 顺序表中有效元素下标）的结构体
typedef int DataTpye_t; // 想要更改数据类型在这个函数进行更改int
typedef struct SequenceList
{
    DataTpye_t *Addr;  // 记录顺序表首地址
    unsigned int size; // 记录顺序表容量
    int Last;          // 记录顺序表最后一个元素的下标
} SeqList_t;
// 1.创建顺序表并对顺序表进行初始化
SeqList_t *SeqList_Create(unsigned int size)
{
    // 1.1利用calloc申请空间创建一个结构体管理者指针空间
    SeqList_t *Manager = (SeqList_t *)calloc(1, sizeof(Manager));
    if (NULL == Manager)
    {
        perror("calloc not get memory!"); // 错误处理
        exit(-1);                         // 程序异常终止
    }
    // 1.2利用calloc为所有元素申请堆内存
    Manager->Addr = (DataTpye_t *)calloc(size, sizeof(DataTpye_t));
    if (NULL == Manager->Addr)
    {
        perror("calloc memory not geted!");
        free(Manager); // 申请内存不成功释放Manager的内存
        exit(-1);
    }
    // 1.3对管理者顺序表的结构体进行初始化（元素容量 + 最后元素下标
    Manager->size = size; // 初始化顺序表容量
    Manager->Last = -1;   // 顺序表元素一个都没有下标应该为-1，下标为0表示有一个元素
    return Manager;
};

int main()
{
    // 1.创建顺序表
    return 0;
}