#include <stdio.h>
#include <stdlib.h>
#define DataType int
#define MAXSIZE  100
typedef struct
{
    DataType data[MAXSIZE];
    int last;
}list;
list *Initlist()
{
    list *L;
    L=(list*)malloc(sizeof(list));
    if(L)
        {
            L->last=-1;
            return L;
        }
}
void merge(list A,list B,list *C)
{
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<=A.last&&j<=B.last)
        if(A.data[i]<B.data[j]&&A.data[i]!=C->data[k-1])
        {
            C->data[k]=A.data[i];
    k++;
    i++;
     }
    else if(A.data[i]>B.data[j]&&B.data[j]!=C->data[k-1])
        {
            C->data[k]=B.data[j];
    k++;
    j++;
     }
     else if(A.data[i]==B.data[j])
    {
            C->data[k]=B.data[j];
    k++;
    j++;
    i++;
     }
     else if(B.data[j]==C->data[k-1])
     {
    j++;
     }
     else if(A.data[i]==C->data[k-1])
     {
    i++;
     }
      while(i<=A.last)
        {
        if(A.data[i]!=C->data[k-1])
         {
            C->data[k]=A.data[i];
              k++;
         }
      i++;

 }   while(j<=B.last)
  {
     if(B.data[j]!=C->data[k-1])
      {
        C->data[k]=B.data[j];
          k++;
      }

  j++;
  }
   C->last=k-1;
   }

    void main()
    {
        list A,B,*C;
        int r;
        int i,j,k;
        printf("A的长度:");
        scanf("%d",&r);
        A.last = r-1;
         printf("A的各元素值:\n");
         for(i=0; i<=A.last; i++)
         {
                scanf("%d",&A.data[i]);
         }

         printf("\nB的长度:");
         scanf("%d",&r);
         B.last = r-1;
          printf("B的各元素值:\n");
          for(i=0; i<=B.last; i++)
          {
                scanf("%d",&B.data[i]);
          }
         C=Initlist();
          merge(A,B,C);
          printf("C的各元素值:\n");
          for(k=0;k<=C->last;k++)
          {
                printf("%d ",C->data[k]);
          }
    }
