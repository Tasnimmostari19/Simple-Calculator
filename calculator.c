#include<stdio.h>
#include<math.h>
int n,i,s=0,a[100],j;
float b[100],r=1;
void add()
{
    printf("Addition\nHow many numbers you want to add?\n");
    scanf("%d",&n);
    printf("enter the numbers.\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("Ans= %d\n",s);

}
void sub()
{
     printf("Subtraction\nHow many numbers you want to subtract?\n");
    scanf("%d",&n);
    printf("enter the numbers.\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[1]-a[2];
    for(i=3;i<=n;i++)
    {
        s=s-a[i];
    }
    printf("Ans= %d\n",s);

}
void mult()
{
     printf("multiplication\nHow many numbers you want to multiply?\n");
    scanf("%d",&n);
    printf("enter the numbers.\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        r=r*a[i];
    }
    printf("Ans= %d\n",r);
}
void div()
{
     printf("division\nHow many numbers you want to divide?\n");
    scanf("%d",&n);
    printf("enter the numbers.\n");
    for(i=1;i<=n;i++)
    {
        scanf("%f",&b[i]);
    }
    r=b[1];
     for(i=2;i<=n;i++)
    {
        r=r/b[i];
    }
    printf("Ans= %f\n",r);

}
void root()
{
    printf("enter the number.\n");
    scanf("%d",&n);
    r=sqrt(n);
    printf("Ans=%f\n",r);
}
int main()
{

    char calculator;
    printf("write a for addition, write s for subtraction, write m for multiplication, write d for division, write r for root\n");
    while(scanf("%c",&calculator))
    {
    switch(calculator){
    case 'a' :
        add();
        break;
    case 's' :
        sub();
        break;
    case 'm':
        mult();
        break;
    case 'd':
        div();
        break;
    case 'r':
        root();
        break;
    }
    }
return 0;
}
