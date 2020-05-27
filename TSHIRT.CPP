#include<stdio.h>
#include<conio.h>
#include<process.h>
void main(){
	int i,j=0,m,max,point,a[100],Number,count=1,n;
	clrscr();
      int p[]={1,2,4,8,16};
	printf("\n Enter the number of students");
	scanf("%d",&Number);
	printf("\n Enter the points of students");
	for(i=0;i<Number;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=Number-1;i++){
		   int max1=a[i];
			 j=0;
		while(j<5){
			if(max1>=p[j])
				j++;
			else
			break;

		}
		m=j-1;
		max=p[m];

   n=m;
       while(n>=0){

		if(max==a[i])  {
		count++;
		break;}
	       else if(max+p[n]<=a[i]){

		count++; //one count is skipped  initially

		}

			n--;
		}


}

		//As one count is skipped in all the process
		printf(" Result:-%d",count+1);

}
