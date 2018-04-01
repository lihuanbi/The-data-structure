#include <stdio.h>
#include <stdlib.h>
#define DataType int
#define MAXSIZE  100
typedef struct
{
    DataType data[MAXSIZE];
    int last;
}list;

int ListDelElems(list L, int idx[], int number)
{
    int i,j,k,s,wrong,sum;
    i=0;
    j=0;
    k=0;
    sum=0;
    wrong=0;
    s=0;
        for(i=0;i<number;i++)
        {
            j=idx[i]-1;
            if(idx[i]<1||idx[i]-1>L.last){
            printf("不可大于原长度,请重置\n\n");
            return;

        }
            for (k=j;k<L.last;k++)
         {
             L.data[k]=L.data[k+1];

             sum++;
         }
         L.last--;
        }
    printf("最后元素值:\n");
    for(k=0;k<=L.last;k++)
    {
       printf("%d ",L.data[k]);
    }
     printf("\n目前线性表长度为:%d",k);

        return sum;
}

void main()
{
    list L;
    int idx[100];
    int number,wrong;
    int r;
    int i,j,k,s;
    printf("A的长度:");
    scanf("%d",&r);
    L.last = r-1;
    printf("删除的元素个数：");
    scanf("%d",&number);
    printf("L的各元素值:\n");
    for(i=0; i<=L.last; i++)
    {
        scanf("%d",&L.data[i]);
    }
    printf("删除的元素：");
    for(j=0; j<number; j++)
    {
        scanf("%d",&idx[j]);
    }

   ListDelElems(L,idx,number);

}
