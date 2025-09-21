void main(){
int n,i,sum=0;
printf("enter no of elements:\n");
scanf("%d",&n);

int a[n];

printf("enter an integre:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    sum=sum+a[i];
}
printf("sum of integers=%d\n",sum);
getch();
}
