#include<stdio.h>
#include<stdlib.h>
int main()

{
    char accountName[20] = "Rijan Manandhar";
    const long int phoneNumber = 9847000010;
    const char email[20] = "rijanrr33@gmail.com";
    long int accountNumber = 270087701 ;
    char accountType[20] = "Saving";
    double balance = 500000;
    int option;
    double newAmount;
    char choice;

     do{

    

   

    printf("Options: \n");
    printf("1. Profile Information.\n");
    printf("2. Deposit Money.\n");
    printf("3. Withdraw Money.\n");
    printf("4. Exit.\n");
    printf("Enter option\n");
    scanf("%d",&option);

    switch (option)
    {
    case 1:
       printf("Account Name : %s \n",accountName);
       printf("Phone Number : %ld \n",phoneNumber);
       printf("Email : %s \n",email);
       printf("Account Number : %ld \n",accountNumber);
       printf("Account Type : %s \n",accountType);
       printf("Balance : %lf \n",balance);

        break;
    case 2:
        printf("Enter the amount you would like to deposit : ");
        scanf("%lf",&newAmount);

        newAmount = balance + newAmount ;
        printf("Your new account balance : %.2lf",newAmount);

        break;
    case 3:
    printf("enter amount to withdraw:");
    scanf("%lf",&withdrawmoney);
    validateamount = (balance > withdrawmoney);
    if(validateamount)
    {
    	
    balance = balance - withdrawmoney;
    printf("Total Balance =%lf",balance);
    }
    else
    {
    	printf("Insufficient Balance");
	}
	
        break;
    case 4:
        exit(0);
    }

    printf("Do you want to continue again?\n");
    printf("If yes press y or press any key to terminate the program. : ");
    scanf(" %c", &choice);
    }while(choice == 'y' || choice == 'Y' );


    return 0;
}
