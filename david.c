/*Q14.. Three students (a, b, c) are arriving in the mess at the same time. The id numbers of these
students are 2132, 2102, 2453 and the food taken time from the mess table is 2, 4 and 8 minutes.
If the two students have same remaining time so it is broken by giving priority to the students
with the lowest id number. Consider the longest remaining time first (LRTF) scheduling
algorithm and calculate the average turnaround time and waiting time.
*/


#include<stdio.h>
int main()
{
    int arrival_time[50],burst_time[50],remain_time[50],complete_time,left=0;
    int waiting_time[50],TurnArroundTime[50];
    int i,n;
    printf("Enter no of Processes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter arrival time for process P%d : ",i+1);
        scanf("%d",&arrival_time[i]);
        printf("Enter burst time for process P%d : ",i+1);
        scanf("%d",&burst_time[i]);
    
        remain_time[i]=burst_time[i];
    }
int small,time;
	float total_wait = 0,total_turn_around = 0;
	remain_time[19]=0;
	for(time = 0;left != n;time++){
		small = 19;
		for(i=0;i<n;i++){
			if(arrival_time[i]<=time && burst_time[i]>remain_time[small] && remain_time[i]>0){
				small = i;
			}
		}
		remain_time[small]--;
		if(remain_time[small]==0){
			left++;
			complete_time = time++;
			total_turn_around += complete_time - arrival_time[small]; 
			total_wait += complete_time - arrival_time[small] - burst_time[small];
			
		}
	}
	
	printf("the total turn around time is: %2f \n",total_turn_around/n);
	printf("the total waiting time is: %2f",total_wait/n);
}
