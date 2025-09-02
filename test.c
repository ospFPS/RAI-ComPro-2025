#include<stdio.h>
#include<string.h>

int i,n;
int main()
{

  printf("how many students: ");
  scanf("%d",&n);

struct profile
{
    char name[20];
    int age;
};
struct profile s[6];

for(i=1;i<=n;i++)
{
   printf("enter name of student no.%d: ",i);
   scanf("%s",s[i].name);
   printf("enter age of student no.%d: ",i);
   scanf("%d",&s[i].age);
}

for(i=1;i<=n;i++)
{
    printf("/name: %s ,Age: %d/ \n",s[i].name ,s[i].age);
}
}

/*int main()
{
    int n,i;
  struct book
  {
    char name[20];
    float price;
    float discount;
  };
  struct book book[i];
  
  printf("how many books: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\nName of book %d: ",i);
    scanf("%s",book[i].name);
    printf("Price of book %d: ",i);
    scanf("\n%f",&book[i].price);
    }
    for(i=0;i<n;i++)
    {
    printf("\nName of book %d : %s \n price: %.2f \n Discount: %.2f thb",i,book[i].name,book[i].price,0.1*book[i].price);
    }
}*/
