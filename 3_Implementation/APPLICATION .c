
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
   long int employee;
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
    int passwordlength, i, seek = 0;
    char ch;
    FILE *fp, *fu;
    struct pass u1;
    struct userpass p1;


    fp = fopen("username.txt", "ab");

    // Inputs
    system("cls");
    printf("\n\n______START FILLING APPLICATION FOM__________");

    printf("\n\nCANDIATE NAME  :  ");
    scanf("%s", &u1.cname);



    printf("\n\nFATHER's NAME  :  ");
    scanf("%s", &u1.fathname);

    printf("\n\nMOTHER NAME  :  ");
    scanf("%s", &u1.motname);

    printf("\n\nADDRESS  :  ");
    scanf("%s", &u1.address);

    printf("\n\nHIGHEST QUALIFICATION  :  ");
    scanf("%s", &u1.highest);
    printf("\n\nHIGHEST QUALIFICATION PERCENTAGE  :  ");
    scanf("%s", &u1.per);
    
     printf("\n\n10TH PERCENTADE OR CGPA  :  ");
    scanf("%s", &u1. cgpa);
    
     printf("\n\n 10+2 OR INTER PERCENTAGE  :  ");
    scanf("%s", &u1.percentage);

    printf("\n\nDATE OF BIRTH  :");
    printf("\nDATE-");
    scanf("%d", &u1.date);
    printf("\nMONTH-");
    scanf("%d", &u1.month);
    printf("\nYEAR-");
    scanf("%d", &u1.year);

    printf("\n\nADHAR NUMBER  :  ");
    scanf("%s", u1.adharnum);

    printf("\n\nPHONE NUMBER  :  ");
    scanf("%s", u1.pnumber);

    printf("\n\nUSERNAME  :  ");
    scanf("%s", &u1.username);

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

