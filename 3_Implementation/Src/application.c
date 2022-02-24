/**
 * @file Untitled-1
 * @author SriramYaswanth(you@domain.com)
 * @brief  Billing System , generate bill and save data
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// Billing System  generate bill  and save data
// check by adding old bal, new, amount paid & Remaning

#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"conio.h"



 struct date{
       int month;
       int day;
       int year;
       };
 void input_fun();
 void inputfile_fun();
 void search_fun();
 void showoutput ();
 

  struct account {
    int num;
    char name_1[20];
    int acno;
    float phno;
    char city[15];
    char accountype;
    float newbal;
    float oldbal;
    float payment;
    struct date last_payment;
  }customer;
  int tl,sl,ts;
 int main()
    {
      int i,n;
      char ch;
      system("cls");

      printf(" \n-----BILLING SYSTEM-----\n\n");
      printf("\n\n ");
      printf("\n   1:CREATE NEW ACCOINT ON LIST\n");
      printf("\n\n ");
      printf("     2:TO FIND CUSTOMER ACCOUNT\n");
      printf("\n\n ");
      printf("     3:Exit\n");
      printf("\n\n ");
      /**
       * @brief select the option which is required
       * 
       */

      do{
           printf("\nPLEASE SELECT ONE OF THE ABOVE:");
           ch=getche();
      }while(ch<='0' || ch>'3');
      switch(ch){
        case '1':
            system("cls");
            printf("\nHow many customer accounts:    ");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                input_fun();
                if(customer.payment>0)
                    customer.accountype=(customer.payment<0.1*customer.oldbal)? 'B': 'C';
                else
                    customer.accountype=(customer.oldbal>0)?'C' : 'A';
                customer.newbal=customer.oldbal - customer.payment;
                inputfile_fun();
            }
            /**
             * @brief if the account alredy exist or old customer
             * 
             */
            main();
        case '2':
            system("cls");
            printf("Search by what?\n");
            printf("\n  1 --- Search by customer ID \n");
            printf("    2 --- Search by customer name\n");
            search_fun();
            ch=getche();
            main();
        case '3':
            system("cls");
            printf("\n\t ______OUR MOST VALIBLE CUSTOMER_____");
            void gotoxy(int x, int y);
{
            COORD c = { 5, 5};  
            SetConsoleCursorPosition(  GetStdHandle(STD_OUTPUT_HANDLE) , c);
}
            _cprintf("\n\t    *-THANK YOU AND VISIT AGAIN-*");
            exit(1);
      }
 }
 /**
  * @brief input functions that to take customer details to genertae bill and store data
  * 
  */

   void input_fun()
    {
      FILE *fp=fopen("bidur.dat","rb");
      fseek (fp,0,SEEK_END);
      tl=ftell(fp);
      sl=sizeof(customer);
      ts=tl/sl;
      fseek(fp,(ts-1)*sl,SEEK_SET);
      fread(&customer,sizeof(customer),1,fp);
      printf("\nCustomer no:%d\n",++customer.num);
      fclose(fp);
      printf("       ID num             :");
      scanf("%d",&customer.acno);
      printf("\n    Customer Name :");
      scanf("%s",customer.name_1);
      printf("\n       Mobile no              :");
      scanf("%f",&customer.phno);
      printf("\n       Current City           :");
      scanf("%s",customer.city);
       printf("\n       Current payment       :");
      scanf("%f",&customer.payment);
      printf("\n       Previous balance       :");
      scanf("%f",&customer.oldbal);
     
      printf("\n       Payment date(mm/dd/yyyy):");
      scanf("%d/%d/%d",&customer.last_payment.month,&customer.last_payment.day,&customer.last_payment.year);
      return;
   }

   void inputfile_fun()
   {
      FILE *fp;
      fp=fopen("bidur.dat","ab");
      fwrite(&customer,sizeof(customer),1,fp);
      fclose(fp);
      return;
   }

   void search_fun()
   {
     char ch;
     char nam[100];
     int n,i,m=1;
     FILE *fp;
     fp=fopen("bidur.dat","rb");
     do{
        printf("\nEnter your choice:");
        ch=getche();
     }while(ch!='1' && ch!='2');
     switch(ch){
          case '1':
            fseek(fp,0,SEEK_END);
            tl=ftell(fp);
            sl=sizeof(customer);
            ts=tl/sl;
            do{
            printf("\nCHOOSE CUSTOMER NAME:");
            scanf("%d",&n);
            if(n<=0 || n>ts)
            printf("\n ENTER CORRECT \n");
            else{
                fseek(fp,(n-1)*sl,SEEK_SET);
                fread(&customer,sl,1,fp);
               showoutput();
            }
            printf("\n\nAGAIN.....?(YES/NO)");
            ch=getche();
            }while(ch=='y');
            fclose(fp);
            break;
          case '2':
            fseek(fp,0,SEEK_END);
            tl=ftell(fp);
            sl=sizeof(customer);
            ts=tl/sl;
            fseek(fp,(ts-1)*sl,SEEK_SET);
            fread(&customer,sizeof(customer),1,fp);
            n=customer.num;

            do{
            printf("\nEnter name:");
            scanf("%s",nam);
            fseek(fp,0,SEEK_SET);
            for(i=1;i<=n;i++)
            {
                 fread(&customer,sizeof(customer),1,fp);
                 if(strcmp(customer.name_1,nam)==0)
                 {
                showoutput();
                m=0;
                break;
                 }
            }
            if(m!=0)
            printf("\n\n Not  exist ??? \n");
            printf("\nAnother......?(YES/NO)");
            ch=getche();
            }while(ch=='y');
            fclose(fp);
          }
          return;
     }
     
     /**
      * @brief Display of Billslip comtains 
      * current payment, old balance, and new balance 
      * 
      */
   void showoutput()
     {
       printf("\n\n    Customer no    :%d\n",customer.num);
       printf("    Name        :%s\n",customer.name_1);
       printf("    Mobile no      :%.f\n",customer.phno);
       printf("    Account num :%d\n",customer.acno);
       printf("    Current City           :%s\n",customer.city);
       printf("    Old balance    :%.2f\n",customer.oldbal);
       printf("    Current payment:%.2f\n",customer.payment);
       printf("    New balance    :%.2f\n",customer.newbal);
       printf("    Payment date   :%d/%d/%d\n\n",customer.last_payment.month,customer.last_payment.day,customer.last_payment.year);
       printf("    Account status :");
       switch(customer.accountype)
          {
          case 'A':
         _cprintf("CURRENT\n\n");
         break;
          case 'B':
         _cprintf("OVERDUE\n\n");
         break;
          case 'C':
         _cprintf("DELINQUENT\n\n");
         break;
         /**
          * @brief If the details given by the customer/candidaye invalid
          * 
          */
          default:
         _cprintf(" Invalid\\n\n");
          }
       
          return ; /*billing system*/
       }
