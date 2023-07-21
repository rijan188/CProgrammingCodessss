#include<stdio.h>
#include<stdlib.h>
int main()
{
	int firstInput,result,option,i;
	char choice;
	do{
	  printf("options\n");
	  printf("1. positive or negative\n");
	  printf("2. odd or even");
	  
	  printf("3. prime or composite\n");
	  printf("4. exit\n");
	  
	  printf("enter your option: ");
	  scanf("%d",&option);
	  
	  switch(option)
	  {
	  	case 1:
	  		printf("enter first number:");
	  		scanf("%d",&firstInput);
	  		result=firstInput;
	  		if(result>=0)
	  		{
	  			printf("positive number=%d",result);
			  }
			  else
			  {
			  	printf("negative number=%d",result);
			  }
			  break;
		case 2:
			printf("enter first number");
			scanf("%d",&firstInput);
			if(result=firstInput%2==0)
			{
				printf("even number =%d",result);
			}
			else
			{
				printf("odd number=%d",result);
			}
			break;
		case 3:
			printf("enter first number:");
			scanf("%firstInput");
			printf("enter value of i:");
			scanf("%d",&i);
			if(firstInput%1==0 & firstInput%i+1==0 & firstInput%i+2==0)
			{
				printf("The number is composite=%d",result);
			}
			else
			{
				printf("The number is prime=%d",result);
				 }
				break;
		case 4:
			        exit(0);
			        break;
		default:
			            printf("please enter a valid Input\n");
			    
	  }
	printf("\ndo you want to continue??\n");
	printf("press y for yes and any other key for exit\n");
	scanf(" %c",&choice);
	}while(choice =='y'  ||  choice =='Y');
	return 0;
}
