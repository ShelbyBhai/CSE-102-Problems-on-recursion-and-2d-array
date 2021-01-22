#include<stdio.h>
void move(int d,char ft,char tot,char tempt)
{
       if(d==1)
       {
              printf("\nMove disk %d from tower %c to tower %c",d,ft,tot);
              return;
       }
              move(d-1,ft,tempt,tot);
              printf("\nMove disk %d from tower %c to tower %c",d,ft,tot);
              move(d-1,tempt,tot,ft);

}
int main()
{
       int disk_num;
       printf("enter the number of disks: ");
       scanf("%d",&disk_num);
       printf("The sequence of moves involved in the TOWER OF HANOI are\n ");
       move(disk_num,'x','y','z');
       return 0;

}
