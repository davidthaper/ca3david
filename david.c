/*Q14.. Three students (a, b, c) are arriving in the mess at the same time. The id numbers of these
students are 2132, 2102, 2453 and the food taken time from the mess table is 2, 4 and 8 minutes.
If the two students have same remaining time so it is broken by giving priority to the students
with the lowest id number. Consider the longest remaining time first (LRTF) scheduling
algorithm and calculate the average turnaround time and waiting time.
*/


#include<stdio.h>
int main()
{
    int arr_t[100],burst_t[100],priority[100];
    int i,n;
    printf("Enter no of Processes : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter arrival time for process P%d : ",i+1);
        scanf("%d",&arr_t[i]);
        printf("Enter burst time for process P%d : ",i+1);
        scanf("%d",&burst_t[i]);
        printf("Enter priority for process P%d :",i+1);
        scanf("%d",&priority[i]);
    }
}

