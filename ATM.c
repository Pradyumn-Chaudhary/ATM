#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define clrscr() system("cls")

void ministatement();
void balance_enquiry();
void quickCash();
void deposit();
void cashWithdraw();
void pin();

struct Acc{
    char name[20];
    double accNo;
    double amt;
};
struct Acc A1;
int  main(){
    strcpy(A1.name,"Pradyumn Chaudhary");
    A1.accNo = 12345678901;
    A1.amt = 10000000;
    int input;
    do{
        printf("---------------------ATM MACHINE---------------------\n");
        printf("1.CASH WITHDRAWAL\n");
        printf("2.MINI STATEMENT\n");
        printf("3.BALANCE ENQUIRY\n");
        printf("4.QUICK CASH\n");
        printf("5.DEPOSIT\n");
        printf("6.EXIT\n");
        printf("------------------------------------------------------\n");
        scanf("%d",&input);
        switch(input){
            case 1 : cashWithdraw(); break;
            case 2 : ministatement(); break;
            case 3 : balance_enquiry(); break;
            case 4 : quickCash(); break;
            case 5 : deposit();break;
            case 6 : printf("THANK YOU");break;
            default : printf("INVALID INPUT\n");
        }
    }while(input != 6);

    return 0;
}

void ministatement(){
    pin();
    printf("\nNAME : %s\n",A1.name);
    printf("ACC NO : %0.2lf\n",A1.accNo);
    printf("AMOUNT : %0.2lf\n",A1.amt);
}

void balance_enquiry(){
    pin();
    printf("\nBALANCE : %0.2lf\n",A1.amt);
}
void quickCash(){
    int input;
    pin();
    printf("\n1.100\n");
    printf("2.200\n");
    printf("3.500\n");
    printf("4.1000\n");
    printf("5.2000\n");
    printf("6.5000\n");
    printf("7.10000\n");
    scanf("%d",&input);
    if(input > 0 && input < 8){
    if(input == 1){
        if(100 <= A1.amt){
            A1.amt = A1.amt - 100;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 2){
        if(200 <= A1.amt){
            A1.amt = A1.amt - 200;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 3){
        if(500 <= A1.amt){
            A1.amt = A1.amt - 500;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 4){
        if(1000 <= A1.amt){
            A1.amt = A1.amt - 1000;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 5){
        if(2000 <= A1.amt){
            A1.amt = A1.amt - 2000;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 6){
        if(5000 <= A1.amt){
            A1.amt = A1.amt - 5000;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    if(input == 7){
        if(10000 <= A1.amt){
            A1.amt = A1.amt - 10000;
            printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
        }else{
            printf("INSUFFICIENT BALANCE\n");
        }
    }
    }else{
        printf("INVALID INPUT\n");
    }
}

void deposit(){
    double accNo;
    double amt;
    pin();
    printf("\nENTER ACCOUNT NUMBER\n");
    scanf("%lf",&accNo);
    if(accNo == A1.accNo){
    printf("ENTER AMOUNT\n");
    scanf("%lf",&amt);
    A1.amt = A1.amt + amt;
    printf("BALANCE : %0.2lf\n",A1.amt);
    }else{
        printf("INCORRECT ACCOUNT NUMBER\n");
    }
}

void cashWithdraw(){
    double amt;
    pin();
    printf("\nENTER AMOUNT\n");
    scanf("%lf",&amt);
    if(amt <= A1.amt && amt > 0){
    A1.amt = A1.amt - amt;
    printf("REMAINING BALANCE : %0.2lf\n",A1.amt);
    }else if(amt <=0 ){
        printf("INVALID AMOUNT\n");
        }
        else{
        printf("INSUFFICIENT AMOUNT\n");
    }
}

void pin(){
    int pin = 0000;
    printf("Enter PIN: ");
    char ch1,ch2,ch3,ch4,ch5 = '0',ch6 = '0',ch7 = '0',ch8 = '0',ch9,ch10,ch11,ch12;
    ch1 = getch();
    printf("*");
    ch2 = getch();
    printf("*");
    ch3 = getch();
    printf("*");
    ch4 = getch();
    printf("*");
     if(ch1 == ch5 && ch2 == ch6 && ch3 == ch7 && ch4 == ch8){
    
    }else{
        printf("\nINCORRECT PIN\n");
        exit(0);
    }
}