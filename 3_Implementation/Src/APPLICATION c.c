
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct pass
{
    char username[10];
    int date, month, year;
    char pnumber[10];
    char adharnum[10];
    char cname[10];
    char fathname[10];
    char motname[10];
    char address[10];
    char highest[10];
    char percentage[4];
    char cgpa[4];
    char per[4];
};
struct employee
{
    char usernameto[30];
    char userpersonfrom[30];
   long int candidate;
};
struct userpass
{
    char password[30];
};
int main()
{
    int i, a, b, choice, exit;
    int passwordlength;
    
    printf("\n\n");
    printf("______WELCOME TO RCB GROUP______ \n\n");
    printf("     ----- aim high -------");

 printf("\n\n");
    printf("______START FILLLING APPLICATION FOM______\n\n");

    printf("     WELCOME TO RCB   APPLICATION FOR INTERN\n\n");
    
    printf("    APPLY FOR RCB       ");

    printf("1.....START FILLING APPLICATION FOM     ");


    printf("2.... EXIT\n\n");

    printf("\n\nENTER YOUR CHOICE.......");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        system("cls");
        
        printf("\n\n USERNAME CHARACTERS MAX 10 !!!!");
        printf("\n\n PASSWORD CHARACTERS MAX 10 !!!!");
        char password[20];
    char ch;
    FILE *fa;
    struct pass p;
   


    fa = fopen("canname.txt", "ab");

    // Inputs
    system("cls");
    printf("\n\n______START FILLING APPLICATION FOM__________");

    printf("\n\nCANDIATE NAME  :  ");
    scanf("%d", &p.cname);



    printf("\n\nFATHER's NAME  :  ");
    scanf("%s", &p.fathname);

    printf("\n\nMOTHER NAME  :  ");
    scanf("%d", &p.motname);

    printf("\n\nADDRESS  :  ");
    scanf("%d", &p.address);

    printf("\n\nHIGHEST QUALIFICATION  :  ");
    scanf("%d", &p.highest);
    printf("\n\nHIGHEST QUALIFICATION PERCENTAGE  :  ");
    scanf("%d", &p.per);
    
     printf("\n\n10TH PERCENTADE OR CGPA  :  ");
    scanf("%d", &p. cgpa);
    
     printf("\n\n 10+2 OR INTER PERCENTAGE  :  ");
    scanf("%d", &p.percentage);

    printf("\n\nDATE OF BIRTH  :");
    printf("\nDATE-");
    scanf("%d", &p.date);
    printf("\nMONTH-");
    scanf("%d", &p.month);
    printf("\nYEAR-");
    scanf("%d", &p.year);

    printf("\n\nADHAR NUMBER  :  ");
    scanf("%d", &p.adharnum);

    printf("\n\nPHONE NUMBER  :  ");
    scanf("%d", &p.pnumber);

    printf("\n\nUSERNAME  :  ");
    scanf("%d", &p.username);

    printf("\n\nPASSWORD  :  ");
    for (i = 0; i < 50; i++)
    {
        ch = getch();
        if (ch != 13)
        {
            password[i] = ch;
            ch = '#';
            printf("%c", ch);
        }
        else
            break;
    }
           
    system("cls");
    printf(
        "PLEASE WAIT....\n\nYOUR DATA IS PROCESSING....");
    for (i = 0; i < 100; i++)
    {
        i++;
        i--;
    }

    printf("\n\n\nACCOUNT CREATED SUCCESSFULLY....");
    printf("\n\n________________________________________");

    printf(" \n\n\nAPPLICATION SUBMITTED SUCESSFULLY........");
        printf("\n\n\nNOW YOU CAN LOGOUT");
        printf("\n\n\nPRESS ANY KEY TO EXIT");


        getch();
    }
}

