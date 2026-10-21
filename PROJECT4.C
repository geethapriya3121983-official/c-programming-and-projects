#include<stdio.h>
int main()
{
 int pin=2008;
 int epin;
 float balance=100;
 float amount;
 int choice;
 printf("welcome to our DCE ATM");
 printf("enter the pin");
 scanf("%d",&epin);
 if(epin!=pin)
 {
  printf("invalid pin");
  return 0;
 }
 printf("log in successfull");
 do
 {
  printf("\nmenu\n");
  printf("\n1.check the balance\n");
  printf("\n2.withdraw money\n");
  printf("\n3.deposit money\n");
  printf("n4.exit\n");
  printf("\nenter your choice\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    printf("total balance=%f",balance);
    break;
   }
   case 2:
   {
    printf("\nenter the withdrawal amount\n");
    scanf("%f",&amount);
     if(amount<=0)
     {
      printf("\ninvalid amount\n");
     }
     else if(amount>balance)
     {
      printf("\ninsufficient amount\n");
     }
     else
     {
      balance=balance-amount;
      printf("new balance=%f",balance);
      printf("\nwithdraw successsfully\n");
     }
     break;
     }
     case 3:
     {
      printf("\nenter the deposit amount\n");
      scanf("%f",amount);
       if(amount>0)
       {
	balance += amount;
	printf("\ndeposit successfull\n");
	printf("total amount=%f",balance);
       }
       break;
       }
       case 4:
       {
	printf("\nthank you\n");
	break;
	}
      default:
      {
       printf("\ninvaild choice....bye bye...\n");
      }
     }
      }while(choice!=4);
      return 0;
 }