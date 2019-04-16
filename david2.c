#include<fcntl.h>
#include<sys/types.h>
#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdbool.h>
void *func1();
void *func2();
int flag[2];
int turn;
int shared;
int main()
{
int actual=shared;
flag[0]=flag[1]=0;
 turn=0;

    pthread_t t1,t2;
    pthread_create(&t1,NULL,func1,NULL);
    pthread_create(&t2,NULL,func2,NULL);
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
printf("the actual value of shared variable:%d\n",actual);
printf("the final value of shared variable:%d\n",shared);

}

void *func1()
{
printf("\n Thread t1 \n");
flag[0]=1;
turn=1;
while(turn==1 &&flag[1]==1);

int fd = open("File.txt",O_CREAT|O_RDWR,0777);
printf("\n Thread t1 is writing into the File \n");
write(fd,"Thread t1 data",33);
flag[0]=0;
}
  void *func2()
{
printf("\n Thread t2\n");
flag[1]=1;
turn=0;
while(turn ==0 && flag[0] ==1);

int fd= open("File.txt",O_CREAT|O_RDWR,0777);
printf("\n Thread t2 is writing into the File \n");
write(fd,"Thread t2 data",33);
flag[1]=0;
}





