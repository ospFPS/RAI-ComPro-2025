#include<stdio.h>

struct student
{
    char name[50];
    int score;
};

double average(struct student arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i].score;
    }
    return (double) sum/n;
}

int highest(struct student arr[],int n)
{
    int max=arr[0].score;
    for(int i=1;i<n;i++)
    {
        if(arr[i].score>max)
        {
            max=arr[i].score;
        }
    }
    return max;
}

int lowest(struct student arr[],int n)
{
    int min=arr[0].score;
    for(int i=1;i<n;i++)
    {
        if(arr[i].score<min)
        {
            min=arr[i].score;
        }
    }
    return min;
}

void passed(struct student arr[],int n)
{
    printf("\nStudents who passed:\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i].score>=60)
        {
            printf("%s\n",arr[i].name);
        }
    }
}

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);

    struct student s[n];

    for(int i=0;i<n;i++){
        printf("\nEnter name of student %d: ",i+1);
        scanf("%49s",s[i].name);
        printf("Enter grade of %s: ",s[i].name);
        scanf("%d",&s[i].score);
    }

    printf("\n--- Results ---\n");
    printf("Average grade: %.2f\n",average(s,n));
    printf("Highest grade: %d\n",highest(s,n));
    printf("Lowest grade: %d\n",lowest(s,n));

    passed(s,n);

    return 0;
}