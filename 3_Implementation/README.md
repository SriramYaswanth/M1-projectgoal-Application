
void generateBillHeader(char name[40], char date[31])
{
    printf("\n\n");
    printf("\t    Mysore.Hotel");
    printf("\n\t  -----------")
    printf("\nInovice to: %s", Name);
    printf("\nDate:%s:", Date);
    printf("\n");
    printf("--------------\n");
    printf("Item\t\t");
    printf("Quantity\t\t");
    printf("Total RS\t\t");
    printf("\n-----------");
    printf("\n\n");
}
void generateBillBody( char Item[20],int Quantity,int Price)
{
    printf("%s\t\t", Item);
    printf("%d\t\t", Quantity);
    Printf("%.2\t\t",Quantity * Price);
    printf("\n");
}

void generateBillFooter(float total)
{
   printf("\n");
   float dis=0.1*total;
   float netTotal=total-dis;
   float cgst= 0.18*netTotal,grandTotal=netTotal + 2*cgst
   printf("---------------------\n");
   printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",dis);
     printf("\n\t\t\t\t-----");
      printf("\nNet Total\t\t\t%.2f",netTotal);
       printf("\nCGST @18%s\t\t\t%.2f","%",cgst);
        printf("\nSGST @18%s\t\t\t%.2f","%",cgst);
        printf("\n---------------");
         printf("\nGrand Total\t\t\t%.2f",grandTotal);
          printf("---------------\n");
}
int main()
{
    float total;
   int opt,n;
   struct orders ord;
    printf("\n______Mysore.Hotel;__________");
    printf("\n\nPlease select your prefered operation ");
     printf("\n\nGenerate Invoice");
      printf("\nShow all Invoices");
       printf("\nSearch Invoice");
       printf("\nExit");
         printf("\n\nYour choice:\t");
         scanf("%d",&opt)
         fgets(stdin);
         switch(opt){
             case 1:
             printf("\nPlease enter the name of the customer:\t");
fgets(ord.customer, 40,stdin);
ord.customer[strlen(ord.customer)-1]=0;
strcpy(ord.date,_DATE_);
printf("\nplease enter the number of items:\t");
scanf("%d",&n);
ord.numberOfItems=n;
for(int i=0;i<n;i++){
    fgetc(stdin);
    printf("/n/n");
    printf("please enter the item %d:\t",i+1);
    fgets(ord.itm[i].item,20,stdin);
    ord.item[i].item[strlen(ord.itm[i].itm)-1]=0;
    printf("please enter the Quantity:\t");
    scanf("%d",order.itm[i].Quality);
    printf("please enter the unit price:\t");
    scanf("%f",&ord.itm[i].price);
    total +=ord.itm[i].qty *ord.itm[i].price;
}

generateBillHeader(ord.customer,ore.date);
for(int i=0;i<ord.numOfItems;i++){
generateBillBody(ord.itm[i].item,ord.itm[i].qty,ord.itm[i].price);

}
generateBillFooter(total);
         }
        printf("\n\n");
        return 0;

}
