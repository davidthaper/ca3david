
#include<pthread.h>
#include<stdio.h>
#include<stdbool.h>
void *func1();
void *func2();
int i,j,flag;
  flag[i],flag[j];
bool True,False;
int turn=0;

int main()
{
    pthread_t tid1,tid2;
    pthread_create(&tid1,NULL,func1,NULL);
    pthread_create(&tid2,NULL,func2,NULL);
    pthread_join(tid1,NULL);
    pthread_join(tid2,NULL);
}

void *func1()
{
while(1)
{
flag[i]=True;
turn=j;
while (flag[j] == True && turn == j) 
   
printf("Critical section");
flag[i]=False;
    }
  
  void *func2()
{
  while(1)
{
flag[j]=True;
turn=i;
while (flag[i] == True && turn == i) 
   
printf("Critical section");
flag[j]=False;
    }
 
}
}
