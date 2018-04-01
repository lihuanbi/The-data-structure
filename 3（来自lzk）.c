
#include<stdio.h>
#include<stdlib.h>
int wrong=0;
int cmp(const void *a, const void *b)
{return *(int *)a - *(int *)b;}
int ListDelElems(int *order_List,  int  del_List[],  int del_Sum,int list_Sum){
    int i,flag=0,j,over=0,sum=list_Sum;
    for(i=0;i<del_Sum;i++){
        if(del_List[i]<1||del_List[i]>sum){
            wrong++;continue;
        }
        j=del_List[i]-1-over;
        for(;j<sum-over;j++){
            *(order_List+j)=*(order_List+j+1);
        }
        flag++;list_Sum--;over++;
        //for(int k=0;k<sum;k++)printf("%d ",order_List[k]); printf("\n");
    }
    return flag;
}
main()
{
    int order_List[200000]={0},del_List[200000]={0},del_Sum,list_Sum,i=0;
    char x;
    printf("请输入顺序表元素(int型)，一行输入，最大20w数据，以回车结束\n");
    while(1)
    {
    scanf("%d%c",&order_List[i],&x);
    i++;
    if(x!=' ')break;
    if(i>=2000000)
        {
            printf("输入超过限制,退出程序\n");
            exit(1);
        }
    }
    list_Sum=i;i=0;
    printf("请输入指示要删除的元素的位序(从1开始,以回车结束，每输入一个请空一格)\n");
    while(1){scanf("%d%c",&del_List[i],&x);
    i++;
    if(x!=' ')break;
    if(i>=list_Sum)
        {
            printf("输入超过限制,退出程序\n");
            exit(1);
    }}
    qsort(del_List,i,sizeof(del_List[0]),cmp);
    del_Sum=i;int flag;
    flag=ListDelElems(order_List,del_List,del_Sum,list_Sum);printf("删除后的数组为:\n") ;
    for(i=0;i<list_Sum-del_Sum +wrong;i++)printf("%d ",order_List[i]); printf("\n");
    printf("成功删除：%d个元素\n",flag);
}
