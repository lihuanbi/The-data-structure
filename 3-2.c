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
            printf("���ɴ���ԭ����,������\n\n");
            return;

        }
            for (k=j;k<L.last;k++)
         {
             L.data[k]=L.data[k+1];

             sum++;
         }
         L.last--;
        }
    printf("���Ԫ��ֵ:\n");
    for(k=0;k<=L.last;k++)
    {
       printf("%d ",L.data[k]);
    }
     printf("\nĿǰ���Ա���Ϊ:%d",k);

        return sum;
}

void main()
{
    list L;
    int idx[100];
    int number,wrong;
    int r;
    int i,j,k,s;
    printf("A�ĳ���:");
    scanf("%d",&r);
    L.last = r-1;
    printf("ɾ����Ԫ�ظ�����");
    scanf("%d",&number);
    printf("L�ĸ�Ԫ��ֵ:\n");
    for(i=0; i<=L.last; i++)
    {
        scanf("%d",&L.data[i]);
    }
    printf("ɾ����Ԫ�أ�");
    for(j=0; j<number; j++)
    {
        scanf("%d",&idx[j]);
    }

   ListDelElems(L,idx,number);

}
