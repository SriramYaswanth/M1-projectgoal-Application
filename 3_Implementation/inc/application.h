/**
 * @file applivation.h
 * @author Sriram Yaswanth (you@domain.com)
 * @brief  Billing System  generate bill  and save data.
 * @version 0.1
 * @date 2022-02-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief application.h
 * 
 * Billing System  generate bill  and save data.
 * 
 */
#ifndef Billing System_generate bill
#define Billing System_generate bill


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
 
/**
 * @brief input funtions create account
 * 
 */
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
  }
  /**
   * @brief 
   * 
   */

#endif  /* # _Billing System_generate bill _*/
