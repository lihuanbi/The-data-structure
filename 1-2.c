#include <stdio.h>
#include <math.h>

int main()
{
    float data,a,b,c;
    float x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    //可能1
    if(a==0&&b==0)
    {
        printf("None.");
        return 0;
    }
    //可能2
    else if(a==0&&b!=0&&c!=0)
    {
        x1=x2=(-c)/b;
        printf("%f",x1);
    }
    else if(a==0&&c==0)
    {
        printf("0");
    }
    ///能3
    else
    {
        data=b*b-4*a*c;
        if (data==0)
        {
            x1=(-b)/(2*a);
            printf("x1=%f\n",x1);
        }
        if(data>0)
        {
            x1=(-b+sqrt(data))/(2*a);
            x2=(-b-sqrt(data))/(2*a);
            printf("x1=%f,x2=%f\n",x1,x2);
        }
        if(data<0)
        {
            x1 = -b / 2 * a;	 // 保留实部
            x2 = sqrt( -data ) / 2 * a;	       //保留虚部
            if(x1==0)
            {
                 printf( " x1= %f i , x2= -%f i \n" , x2 , x2 );
            }
            else if(x2==1)
            {
                 printf( "x1= %f+ i , x2= %f- i \n" , x1 , x1 );
            }
            else
            {
                printf( " x1= %f+%f i , x2= %f-%f i \n" , x1 , x2 , x1 , x2 );
            }
        }
    }
    return 0;
}
