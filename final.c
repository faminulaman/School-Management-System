#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>
#include<dos.h>
 int S_schedule()
 {
     printf("\t\t\t ''Welcome To Student Class Schedule''\n\n");
     printf("\t Day\t\t '1st'\t\t '2nd'\t\t '3rd' \n");
     printf("\t '''\t\t 10.00pm\t 11.30pm\t 1.00pm \n\n");
     printf("\t Sun\t\t Bangla\t\t English\t G Math \n");
     printf("\t Mon\t\t Science\t H Math\t\t Biology \n");
     printf("\t Tue\t\t Science\t G Math\t\t English \n");
     printf("\t Wed\t\t Bangla\t\t H Math\t\t Biology \n");
     printf("\n\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

 }
 int  S_courses()
 {
     printf("\t\t\t ''Welcome To Student Courses List''\n\n");
     printf("\t Name \t\t Code\n\n");
     printf("\t Bangla \t\t 101\n");
     printf("\t English \t\t 201\n");
    printf("\t G Math \t\t 301\n");
     printf("\t H Math \t\t 302\n");
     printf("\t Science \t\t 401\n");
     printf("\t Biology \t\t 501\n\n");
     printf("\n\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
 }
 int  Sbangla()
{
    printf("\n\n \t\t Subject: Bangla\t Amount: 1000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  Senglish()
{
    printf("\n\n \t\t Subject: English\t Amount: 1000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  Sscience()
{
    printf("\n\n \t\t Subject: Math\t Amount: 2000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}

 int hmath()
{
    printf("\n\n \t\t Subject: H Math\t Amount: 2500 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
 int gmath()
{
    printf("\n\n \t\t Subject: G Math\t Amount: 2500 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
 int Sbiology()
{
    printf("\n\n \t\t Subject: Biology\t Amount: 1500 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         S_payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
 int S_bank()
{
   char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bank Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.H Math");
    printf("\t\t 2500");
    printf("\n 4.G Math");
    printf("\t\t 2500");
     printf("\n 5.Science");
    printf("\t\t 3000");
     printf("\n 6.Biology");
    printf("\t\t 1500");
     printf("\n\n 7.For go back.");
   printf("\n\n 8.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Sbangla();
        break;
    case 2:
        Senglish();
        break;
    case 3:
         hmath();
        break;
    case 4:
        gmath();
        break;
    case 5:
         Sscience();
        break;
    case 6:
        Sbiology();
        break;
    case 7:
       S_payment();
        break;
    case 8:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int S_bkash()
{
   char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bkash Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.H Math");
    printf("\t\t 2500");
    printf("\n 4.G Math");
    printf("\t\t 2500");
     printf("\n 5.Science");
    printf("\t\t 3000");
     printf("\n 6.Biology");
    printf("\t\t 1500");
     printf("\n\n 7.For go back.");
   printf("\n\n 8.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Sbangla();
        break;
    case 2:
        Senglish();
        break;
    case 3:
         hmath();
        break;
    case 4:
        gmath();
        break;
    case 5:
         Sscience();
        break;
    case 6:
        Sbiology();
        break;
    case 7:
       S_payment();
        break;
    case 8:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int S_rocket()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Rocket Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.H Math");
    printf("\t\t 2500");
    printf("\n 4.G Math");
    printf("\t\t 2500");
     printf("\n 5.Science");
    printf("\t\t 3000");
     printf("\n 6.Biology");
    printf("\t\t 1500");
     printf("\n\n 7.For go back.");
   printf("\n\n 8.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Sbangla();
        break;
    case 2:
        Senglish();
        break;
    case 3:
         hmath();
        break;
    case 4:
        gmath();
        break;
    case 5:
         Sscience();
        break;
    case 6:
        Sbiology();
        break;
    case 7:
       S_payment();
        break;
    case 8:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int S_nagad()
{
   char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Nagad Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.H Math");
    printf("\t\t 2500");
    printf("\n 4.G Math");
    printf("\t\t 2500");
     printf("\n 5.Science");
    printf("\t\t 3000");
     printf("\n 6.Biology");
    printf("\t\t 1500");
     printf("\n\n 7.For go back.");
   printf("\n\n 8.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Sbangla();
        break;
    case 2:
        Senglish();
        break;
    case 3:
         hmath();
        break;
    case 4:
        gmath();
        break;
    case 5:
         Sscience();
        break;
    case 6:
        Sbiology();
        break;
    case 7:
       S_payment();
        break;
    case 8:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
 int  S_payment()
 {
    printf("\t \t \t \t 'Welcome To Payment System' \n\n");
    printf("\t 1.Bank.\n");
    printf("\t 2.Bkash.\n");
    printf("\t 3.Rocket.\n");
    printf("\t 4.Nagad.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        S_bank();
        break;
    case 2:
       S_bkash();
        break;
    case 3:
        S_rocket();
        break;
    case 4:
        S_nagad();
        break;
    default:
        printf("Wrong Input\n");
    }

 }
 int S_result()
 {
    FILE *re;
     printf("Student Result:\n");

   char buff[255];//creating char array to store data of file
   re = fopen("result.txt", "r");
   while(fscanf(re, "%s", buff)!=EOF)
    {
       printf("%s\t", buff);
   }
   fclose(re);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
 }
int Student()
{
    printf("\t\t\t ''Welcome To Student Login System''");
    printf("\n\n");
    printf("\t 1.Class Schedule.\n");
    printf("\t 2.Courses.\n");
    printf("\t 3.Payment.\n");
    printf("\t 4.Result.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        S_schedule();
        break;
    case 2:
       S_courses();
        break;
    case 3:
        S_payment();
        break;
    case 4:
        S_result();
        break;
    default:
        printf("Wrong Input\n");
    }
}
int T_schedule()
 {
     printf("\t\t\t ''Welcome To Teacher Class Schedule''\n\n");
     printf("\t Day\t\t '1st'\t\t '2nd'\t\t '3rd' \n");
     printf("\t '''\t\t 10.00 pm\t 11.30 pm\t 1.00 pm \n\n");
     printf("\t Sun\t\t \t\t English\t  \n");
     printf("\t Mon\t\t \t \t\t  \n");
     printf("\t Tue\t\t \t \t\t\t English \n");
     printf("\t Wed\t\t \t\t \t\t  \n");
     printf("\n\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
 }
 int  T_courses()
 {
    printf("\t\t\t ''Welcome To Teacher Courses List''\n\n");
    printf("\t Name \t\t Code\n\n");
    printf("\t English \t\t 201\n");
    printf("\t English \t\t 202\n");
    printf("\t English \t\t 203\n");
    printf("\n\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
 }
 int T_bank()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bank Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.English 201");
    printf("\t\t 5000");
    printf("\n 2.English 202");
    printf("\t\t 5000");
    printf("\n 3.English 203");
    printf("\t\t 5000");
    printf("\n\n 4.For go back.");
    printf("\n\n 5.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        english201();
        break;
    case 2:
        english202();
        break;
    case 3:
         english203();
        break;
    case 4:
       T_payment();
        break;
    case 5:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int T_bkash()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bkash Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.English 201");
    printf("\t\t 5000");
    printf("\n 2.English 202");
    printf("\t\t 5000");
    printf("\n 3.English 203");
    printf("\t\t 5000");
    printf("\n\n 4.For go back.");
    printf("\n\n 5.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        english201();
        break;
    case 2:
        english202();
        break;
    case 3:
         english203();
        break;
    case 4:
       T_payment();
        break;
    case 5:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int T_rocket()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Rocket Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.English 201");
    printf("\t\t 5000");
    printf("\n 2.English 202");
    printf("\t\t 5000");
    printf("\n 3.English 203");
    printf("\t\t 5000");
    printf("\n\n 4.For go back.");
    printf("\n\n 5.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        english201();
        break;
    case 2:
        english202();
        break;
    case 3:
         english203();
        break;
    case 4:
       T_payment();
        break;
    case 5:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int T_nagad()
{
     char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Nagad Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.English 201");
    printf("\t\t 5000");
    printf("\n 2.English 202");
    printf("\t\t 5000");
    printf("\n 3.English 203");
    printf("\t\t 5000");
    printf("\n\n 4.For go back.");
    printf("\n\n 5.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        english201();
        break;
    case 2:
        english202();
        break;
    case 3:
         english203();
        break;
    case 4:
       T_payment();
        break;
    case 5:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  english201()
{
    int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\n \t\t Subject: English 201\t Amount: 5000 \n\n \t\t''Payment Successful Taken To Account No:%d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  english202()
{
    int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\n \t\t Subject: English 202\t Amount: 5000 \n\n \t\t''Payment Successful Taken To Account No:%d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  english203()
{
    int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\n \t\t Subject: English 203\t Amount: 5000 \n\n \t\t''Payment Successful Taken To Account No:%d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
 int  T_payment()
 {
    printf("\t \t \t \t 'Welcome To Teacher Salary Payment System' \n\n");
    printf("\t 1.Bank.\n");
    printf("\t 2.Bkash.\n");
    printf("\t 3.Rocket.\n");
    printf("\t 4.Nagad.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        T_bank();
        break;
    case 2:
       T_bkash();
        break;
    case 3:
        T_rocket();
        break;
    case 4:
        T_nagad();
        break;
    default:
        printf("Wrong Input\n");
    }

 }
int T_result()
{
    char name[500],result[500],id[500];
    int intake,section;
    FILE *Result;
    Result = fopen("result.txt", "w+");/*  open for writing */
    if (Result == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }
    printf("''\t\t\t\tAdd Student Result''\n\n");
    printf("\t Student Name:");
    scanf("%s",&name);
    printf("\t Student Intake:");
    scanf("%d",&intake);
    printf("\t Student Section:");
    scanf("%d",&section);
    printf("\t Student Id:");
    scanf("%s",&id);
    printf("\t Student Result:");
    scanf("%s",&result);
    fprintf(Result, "Name: %s \n", name);
    fprintf(Result, "Intake: %d \n", intake);
    fprintf(Result, "Section: %d \n", section);
    fprintf(Result, "Id: %s \n", id);
    fprintf(Result,"Result: %s\n",result);

     fclose(Result);
    FILE *re;
   char buff[500];//creating char array to store data of file
   re = fopen("result.txt", "r");
   while(fscanf(re, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(re);
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Teacher()
{
    printf("\t\t\t ''Welcome To Teacher Login System''");
    printf("\n\n");
    printf("\t 1.Class Schedule.\n");
    printf("\t 2.Courses.\n");
    printf("\t 3.Payment.\n");
    printf("\t 4.Add Result.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        T_schedule();
        break;
    case 2:
       T_courses();
        break;
    case 3:
        T_payment();
        break;
    case 4:
        T_result();
        break;
    default:
        printf("Wrong Input\n");
    }
}
int E_bank()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bank Payment System' \n\n");
     int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\t\t''Payment Successful Taken To Account Number: %d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int E_bkash()
{
        char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bkash Payment System' \n\n");
     int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\t\t''Payment Successful Taken To Account Number: %d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int E_rocket()
{
       char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Rocket Payment System' \n\n");
     int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\t\t''Payment Successful Taken To Account Number: %d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
          Employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int E_nagad()
{
         char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Nagad Payment System' \n\n");
     int x;
    printf("\n\t Give your account number:");
    scanf("%d",&x);
    printf("\n");
    printf("\n\t\t''Payment Successful Taken To Account Number: %d''\n\n",x);
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int E_payment()
{
    printf("\t \t \t \t 'Welcome To Employee Salary Payment System' \n\n");
    printf("\t 1.Bank.\n");
    printf("\t 2.Bkash.\n");
    printf("\t 3.Rocket.\n");
    printf("\t 4.Nagad.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        E_bank();
        break;
    case 2:
       E_bkash();
        break;
    case 3:
        E_rocket();
        break;
    case 4:
        E_nagad();
        break;
    default:
        printf("Wrong Input\n");
    }
}
int E_schedule()
{
    printf("\t\t\t ''Welcome To Employee Work Schedule''\n\n");
    printf("\t Day\t\t '1st'\t\t '2nd'\t\t '3rd' \n");
    printf("\t '''\t\t 10.00 pm\t 11.30 pm\t 1.00 pm \n\n");
    printf("\t Sun\t\t Room 401 \t Room 402\t Room 403  \n");
    printf("\t Mon\t\t Room 301\t Room 302\t Room 303  \n");
    printf("\t Tue\t\t Room 201 \t Room 202\t Room 203  \n");
    printf("\t Wed\t\t Room 101\t Room 102\t Room 103  \n");
    printf("\n\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         Employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Employee()
{
    printf("\t\t\t ''Welcome To Employee Login System''");
    printf("\n\n");
    printf("\t 1.Work Schedule.\n");
    printf("\t 2.Payment.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        E_schedule();
        break;
    case 2:
        E_payment();
        break;
    default:
        printf("Wrong Input\n");
    }
}
struct Ulogin{
    char first_name[500];
    char last_name[500];
    char s_id_or_u_id[500];
    char username[500];
    char password[500];
};

Uregiste (){
    FILE *log;
    log=fopen("Alogin.dll","w");
    struct Ulogin A;
    printf("\n\n\n\t\t\t **************** Enter your information **************** \n");
    printf("\n\t Enter your first name : ");
    scanf("%s",A.first_name);
    printf("\n\tEnter your last name : ");
    scanf("%s",A.last_name);
    printf("\n\tEnter your username : ");
    scanf("%s",A.username);
    printf("\n\tEnter your password : ");
    scanf("%s",A.password);
    fwrite(&A,sizeof(A),1,log);
    fclose(log);

    printf("\n\n \t\t*****Registration Successful***** !\nNow login with your username and password : ");
    printf("\n\n press any key to continue....... ");
    getch();
    system("CLS");
    Ulogin();
}
Ulogin(){
    char username [200],password[200];
    FILE *log;
    log =fopen("Alogin.dll","r");
    struct Ulogin A;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&password);

     while(fread(&A,sizeof(A),1,log)){
        if (strcmp(username,A.username)==0 && strcmp (password,A.password)==0)
        {
             printf("\n\n\n\t\t\t\t **************** Successful Login ****************\n");
             printf("\t\t\t\t\t****** *** ***** ***** ***** **** ****** \n\n");
             printf("\t\t\t\t****** **** Enter What you Want **** ****** \n\n");
            printf("\t \t 1. Student. \n");
    printf("\t \t 2. Teacher. \n");
    printf("\t \t 3. Employee.  \n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Student();
        break;
    case 2:
        Teacher();
        break;
    case 3:
        Employee();
        break;
    default:
        printf("Wrong Input\n");
    }
        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
          Ulogin();
        }
     }
     fclose(log);

}
int User()
{
      printf("\n\t\t\t**************************************************************************\n");
    printf("\t\t\t              WELCOME TO SCHOOL  MANAGEMENT SYSTEM\n");
    printf("\t\t\t**************************************************************************\n\n\n");

    int cho;
    printf("\t\t\t 1.Create New Account  \n ");
    printf("\n\t\t\t 2.Login  \n\n\t Please Enter What you want :" );
    scanf("%d",&cho);
    if (cho==1)
    {
        system ("CLS");
        Uregiste();
    }
    else if (cho==2)
    {
        system ("CLS");
        Ulogin();
    }
    else
    {
        User();
    }


}
int Cadd_info()
{
     char name[100];
    FILE *cour;
    int code;
    char section[100];
    cour = fopen("cour.txt", "w+");/*  open for writing */
    if (cour == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }
     int n,i;
    printf("How many Courses data you want to enter:");
    scanf("%d", &n);
    for(i = 1; i <=n; i++)
    {
        printf("\nEnter data for #%d no Course\n",i);
    printf("Enter the #%d no Course name \n",i);
    scanf("%s", name);
    fprintf(cour, "Name: %s\n", name);
    printf("Enter the Course Code\n");
    scanf("%d", &code);
    fprintf(cour, "Code: %d\n", code);
    printf("Enter the Course Section\n");
    scanf("%s", &section);
    fprintf(cour, "Section: %s\n", section);
    }
    fclose(cour);
    FILE *co;
   char buff[255];//creating char array to store data of file
   co = fopen("cour.txt", "r");
   while(fscanf(co, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(co);
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         courses();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Cshow_list()
{
    FILE *co;
     printf("Course list");

   char buff[255];//creating char array to store data of file
   co = fopen("cour.txt", "r");
   while(fscanf(co, "%s", buff)!=EOF)
    {
       printf("%s \n", buff);
   }
   fclose(co);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         courses();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Cupdate_info()
{
    char name[100];
    FILE *cour;
    int code;
    char section[100];
    cour = fopen("cour.txt", "w+");/*  open for writing */
    if (cour == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }
     int n,i;
    printf("How many Courses data you want to Update:");
    scanf("%d", &n);
    for(i = 1; i <=n; i++)
    {
        printf("\nUpdate data for #%d no Course\n",i);
    printf("Update the #%d no Course name \n",i);
    scanf("%s", name);
    fprintf(cour, "Name: %s\n", name);
    printf("Update the Course Code\n");
    scanf("%d", &code);
    fprintf(cour, "Code: %d\n", code);
    printf("Update the Course Section\n");
    scanf("%s", &section);
    fprintf(cour, "Section: %s\n", section);
    }
    fclose(cour);
    FILE *co;
   char buff[255];//creating char array to store data of file
   co = fopen("cour.txt", "r");
   while(fscanf(co, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(co);
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         courses();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Cdelete_info()
{
    remove("cour.txt");
    printf("Record deleted successfully");
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         courses();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int courses()
{
    printf("Courses Of School Management System: \n");
    printf("1. ADD Info \n");
    printf("2. Show List \n");
    printf("3. Update Info \n");
    printf("4. Delete Info\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Cadd_info();
        break;
    case 2:
        Cshow_list();
        break;
    case 3:
        Cupdate_info();
        break;
    case 4:
        Cdelete_info();
        break;
    default:
        printf("Wrong Input\n");

    }
}
int Eadd_info()
{
     char name[100];
    FILE *em;
    int id;

    float intake, section;
    em = fopen("em.txt", "w+");/*  open for writing */
    if (em == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Employee data you want to enter:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nEnter data for #%d no Employee\n",i);
    printf("Enter the name \n");
    scanf("%s", name);
    fprintf(em, "Name: %s\n", name);
    printf("Enter the Intake\n");
    scanf("%f", &intake);
    fprintf(em, "Intake: %.2f\n", intake);
    printf("Enter the id\n");
    scanf("%d", &id);
    fprintf(em, "Id: %d\n", id);
    printf("Enter the Section\n");
    scanf("%f", &section);
    fprintf(em, "Section: %.2f\n", section);
    }
    fclose(em);
    FILE *e;
   char buff[255];//creating char array to store data of file
   e = fopen("em.txt", "r");
   while(fscanf(e, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(e);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Eshow_list()
{
    FILE *e;
     printf("Employee list");

   char buff[255];//creating char array to store data of file
   e = fopen("em.txt", "r");
   while(fscanf(e, "%s", buff)!=EOF)
    {
       printf("%s \n", buff);
   }
   fclose(e);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Eupdate_info()
{
    char name[100];
    FILE *em;
    int id;

    float intake, section;
    em = fopen("em.txt", "w+");/*  open for writing */
    if (em == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Employee data you want to Update:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nUpdate data for #%d no Employee\n",i);
    printf("Update the name: \n");
    scanf("%s", name);
    fprintf(em, "Name: %s\n", name);
    printf("Update the Intake:\n");
    scanf("%f", &intake);
    fprintf(em, "Intake: %.2f\n", intake);
    printf("Update the id:\n");
    scanf("%d", &id);
    fprintf(em, "Id: %d\n", id);
    printf("Update the Section:\n");
    scanf("%f", &section);
    fprintf(em, "Section: %.2f\n", section);
    }
    fclose(em);
    FILE *e;
   char buff[255];//creating char array to store data of file
   e = fopen("em.txt", "r");
   while(fscanf(e, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(e);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Edelete_info()
{
    remove("em.txt");
    printf("Record deleted successfully");
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         employee();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int employee()
{
     printf("Employee Of School Management System: \n");
    printf("1. ADD Info \n");
    printf("2. Show List \n");
    printf("3. Update Info \n");
    printf("4. Delete Info\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Eadd_info();
        break;
    case 2:
        Eshow_list();
        break;
    case 3:
        Eupdate_info();
        break;
    case 4:
        Edelete_info();
        break;
    default:
        printf("Wrong Input\n");

    }
}
int Tadd_info()
{
     char name[100];
    FILE *ta;
    int id;

    float intake, section;
    ta = fopen("ta.txt", "w+");/*  open for writing */
    if (ta == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Teachers data you want to enter:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nEnter data for #%d no Teacher\n",i);
        printf("Enter the name \n");
    scanf("%s", name);
    fprintf(ta, "Name: %s\n", name);
    printf("Enter the Intake\n");
    scanf("%f", &intake);
    fprintf(ta, "Intake: %.2f\n", intake);
    printf("Enter the id\n");
    scanf("%d", &id);
    fprintf(ta, "Id: %d\n", id);
    printf("Enter the Section\n");
    scanf("%f", &section);
    fprintf(ta, "Section: %.2f\n", section);
    }
    fclose(ta);
    FILE *t;
   char buff[255];//creating char array to store data of file
   t = fopen("ta.txt", "r");
   while(fscanf(t, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(t);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Tshow_list()
{
    FILE *t;
     printf("Teachers list");

   char buff[255];//creating char array to store data of file
   t = fopen("ta.txt", "r");
   while(fscanf(t, "%s", buff)!=EOF)
    {
       printf("%s \n", buff);
   }
   fclose(t);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Tupdate_info()
{
    char name[100];
    FILE *ta;
    int id;

    float intake, section;
    ta = fopen("ta.txt", "w+");/*  open for writing */
    if (ta == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Teachers data you want to Update:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nUpdate data for #%d no Teacher\n",i);
        printf("Update the name: \n");
    scanf("%s", name);
    fprintf(ta, "Name: %s\n", name);
    printf("Update the Intake:\n");
    scanf("%f", &intake);
    fprintf(ta, "Intake: %.2f\n", intake);
    printf("Update the id:\n");
    scanf("%d", &id);
    fprintf(ta, "Id: %d\n", id);
    printf("Update the Section:\n");
    scanf("%f", &section);
    fprintf(ta, "Section: %.2f\n", section);
    }
    fclose(ta);
    FILE *t;
   char buff[255];//creating char array to store data of file
   t = fopen("ta.txt", "r");
   while(fscanf(t, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(t);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Tdelete_info()
{
    remove("ta.txt");
    printf("Record deleted successfully");
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         teacher();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  teacher()
{
    printf("Teacher Of School Management System: \n");
    printf("1. ADD Info \n");
    printf("2. Show List \n");
    printf("3. Update Info \n");
    printf("4. Delete Info\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Tadd_info();
        break;
    case 2:
        Tshow_list();
        break;
    case 3:
        Tupdate_info();
        break;
    case 4:
        Tdelete_info();
        break;
    default:
        printf("Wrong Input\n");

    }
}
int Sadd_info()
{
     char name[100];
    FILE *st;
    int id;

    float intake, section;
    st = fopen("st.txt", "w+");/*  open for writing */
    if (st == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Students data you want to enter:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nEnter data for #%d no Student\n",i);
        printf("Enter the name \n");
    scanf("%s", name);
    fprintf(st, "Name: %s\n", name);
    printf("Enter the Intake\n");
    scanf("%f", &intake);
    fprintf(st, "Intake: %.2f\n", intake);
    printf("Enter the id\n");
    scanf("%d", &id);
    fprintf(st, "Id: %d\n", id);
    printf("Enter the Section\n");
    scanf("%f", &section);
    fprintf(st, "Section: %.2f\n", section);
    }
    fclose(st);
    FILE *stp;
   char buff[255];//creating char array to store data of file
   stp = fopen("st.txt", "r");
   while(fscanf(stp, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(stp);
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int sashow_list()
{
    FILE *stp;
     printf("students list");

   char buff[255];//creating char array to store data of file
   stp = fopen("st.txt", "r");
   while(fscanf(stp, "%s", buff)!=EOF)
    {
       printf("%s \n", buff);
   }
   fclose(stp);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Supdate_info()
{
         char name[100];
    FILE *st;
    int id;

    float intake, section;
    st = fopen("st.txt", "w+");/*  open for writing */
    if (st == NULL)
    {
        printf("File does not exists \n");
        return 0;
    }

     int n,i;

    printf("How many Students data you want to Update:");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        printf("\nUpdate data for #%d no Student\n",i);
        printf("Update the name: \n");
    scanf("%s", name);
    fprintf(st, "Name: %s\n", name);
    printf("Update the Intake:\n");
    scanf("%f", &intake);
    fprintf(st, "Intake: %.2f\n", intake);
    printf("Update the id:\n");
    scanf("%d", &id);
    fprintf(st, "Id: %d\n", id);
    printf("Update the Section:\n");
    scanf("%f", &section);
    fprintf(st, "Section: %.2f\n", section);
    }
    fclose(st);
    FILE *stp;
   char buff[255];//creating char array to store data of file
   stp = fopen("st.txt", "r");
   while(fscanf(stp, "%s", buff)!=EOF){
   printf("%s\n ", buff);
   }
   fclose(stp);
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Sdelete_info()
{
    remove("st.txt");
    printf("Record deleted successfully");
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         student();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int student()
{
    printf("Students Of School Management System: \n");
    printf("1. ADD Info \n");
    printf("2. Show List \n");
    printf("3. Update Info \n");
    printf("4. Delete Info\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        Sadd_info();
        break;
    case 2:
        sashow_list();
        break;
    case 3:
        Supdate_info();
        break;
    case 4:
        Sdelete_info();
        break;
    default:
        printf("Wrong Input\n");

    }
}
int NAAdd_info()
{
    char name[100],address[1000];
    FILE *fptr;

    float intake, section;
    fptr = fopen("emp.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Enter the name of school:\n");
    scanf("%s", name);
    fprintf(fptr, "Name: %s\n", name);
    printf("Enter the school address:\n");
    scanf("%s", address);
    fprintf(fptr, "Address: %s\n", address);
    fclose(fptr);

    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("emp.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         schoolname_address();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}

int NAshow_list()
{
    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("emp.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s \n", buff);
   }
   fclose(fp);
    printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         schoolname_address();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Aupdate_info()
{
       char name[100],address[1000];
    FILE *fptr;

    float intake, section;
    fptr = fopen("emp.txt", "w+");/*  open for writing */
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    printf("Update the name of school:\n");
    scanf("%s", name);
    fprintf(fptr, "Name: %s\n", name);
    printf("Update the school address:\n");
    scanf("%s", address);
    fprintf(fptr, "Address: %s\n", address);
    fclose(fptr);

    FILE *fp;
   char buff[255];//creating char array to store data of file
   fp = fopen("emp.txt", "r");
   while(fscanf(fp, "%s", buff)!=EOF){
   printf("%s ", buff);
   }
   fclose(fp);
   printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         schoolname_address();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int Adelete_info()
{
    remove("emp.txt");
    printf("Record deleted successfully");
     printf("\n 1.For go back.");
   printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         schoolname_address();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int schoolname_address()
{
    printf("School name and address Of School Management System: \n");
    printf("1. ADD Info \n");
    printf("2. Show List \n");
    printf("3. Update Info \n");
    printf("4. Delete Info\n");

    int ch;
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        NAAdd_info();
        break;
    case 2:
        NAshow_list();
        break;
    case 3:
        Aupdate_info();
        break;
    case 4:
        Adelete_info();
        break;
    default:
        printf("Wrong Input\n");
    }
}
int  bangla()
{
    printf("\n\n \t\t Subject: Bangla\t Amount: 1000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  english()
{
    printf("\n\n \t\t Subject: English\t Amount: 1000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  math()
{
    printf("\n\n \t\t Subject: Math\t Amount: 2000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}
int  science()
{
    printf("\n\n \t\t Subject: Math\t Amount: 2000 \n\n \t\t''Payment Successful''\n\n");
    printf("\n 1.For go back.");
    printf("\n 2.Home.");
    printf("\t \t \t \t Enter your Choice: ");
    int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         payment();
        break;
    case 2:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }
}

 int bank()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bank Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.Math");
    printf("\t\t\t 2000");
    printf("\n 4.Science");
    printf("\t\t 3000");
     printf("\n\n 5.For go back.");
   printf("\n\n 6.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         bangla();
        break;
    case 2:
        english();
        break;
    case 3:
         math();
        break;
    case 4:
        science();
        break;
    case 5:
         payment();
        break;
    case 6:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int bkash()
{
  char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Bkash Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.Math");
    printf("\t\t\t 2000");
    printf("\n 4.Science");
    printf("\t\t 3000");
     printf("\n\n 5.For go back.");
   printf("\n\n 6.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         bangla();
        break;
    case 2:
        english();
        break;
    case 3:
         math();
        break;
    case 4:
        science();
        break;
    case 5:
         payment();
        break;
    case 6:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int rocket()
{
    char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Rocket Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.Math");
    printf("\t\t\t 2000");
    printf("\n 4.Science");
    printf("\t\t 3000");
     printf("\n\n 5.For go back.");
   printf("\n\n 6.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         bangla();
        break;
    case 2:
        english();
        break;
    case 3:
         math();
        break;
    case 4:
        science();
        break;
    case 5:
         payment();
        break;
    case 6:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
int nagad()
{
   char c[100];
    int f;
    printf("\t \t \t \t 'Welcome To Nagad Payment System' \n\n");
    printf(" Course List:");
    printf("\t\t Fees");
    printf("\n 1.Bangla");
    printf("\t\t 1000");
    printf("\n 2.English");
    printf("\t\t 1000");
    printf("\n 3.Math");
    printf("\t\t\t 2000");
    printf("\n 4.Science");
    printf("\t\t 3000");
     printf("\n\n 5.For go back.");
   printf("\n\n 6.Home.");
    printf("\n\t Enter Subject of fees:");
     int ch;
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         bangla();
        break;
    case 2:
        english();
        break;
    case 3:
         math();
        break;
    case 4:
        science();
        break;
    case 5:
         payment();
        break;
    case 6:
        main();
        break;
         default:
        printf("Wrong Input\n");
    }

}
 int  payment()
 {
    printf("\t \t \t \t 'Welcome To Payment System' \n\n");
    printf("\t 1.Bank.\n");
    printf("\t 2.Bkash.\n");
    printf("\t 3.Rocket.\n");
    printf("\t 4.Nagad.\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        bank();
        break;
    case 2:
       bkash();
        break;
    case 3:
        rocket();
        break;
    case 4:
        nagad();
        break;
    default:
        printf("Wrong Input\n");
    }
 }
struct login{
    char first_name[500];
    char last_name[500];
    char s_id_or_u_id[500];
    char username[500];
    char password[500];
};

registe (){
    FILE *log;
    log=fopen("ulogin.dll","w");
    struct login l;
    printf("\n\n\n\t\t\t **************** Enter your information **************** \n");
    printf("\n\t Enter your first name : ");
    scanf("%s",l.first_name);
    printf("\n\tEnter your last name : ");
    scanf("%s",l.last_name);
    printf("\n\tEnter your username : ");
    scanf("%s",l.username);
    printf("\n\tEnter your password : ");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);

    printf("\n\n \t\t*****Registration Successful***** !\nNow login with your username and password : ");
    printf("\n\n press any key to continue....... ");
    getch();
    system("CLS");
    login();
}
login(){
    char username [200],password[200];
    FILE *log;
    log =fopen("ulogin.dll","r");
    struct login l;
    printf("\n\n\n\t\t\t ****************Enter your Username & Password*************");
    printf("\n\n\t\t\tUsername:");
    scanf("%s",&username);
    printf("\n\n\t\t\tPassword:");
    scanf("%s",&password);

     while(fread(&l,sizeof(l),1,log)){
        if (strcmp(username,l.username)==0 && strcmp (password,l.password)==0)
        {
             printf("\n\n\n\t\t\t\t **************** Successful Login ****************\n");
             printf("\t\t\t\t\t****** *** ***** ***** ***** **** ****** \n\n");
             printf("\t\t\t\t****** **** Enter What you Want **** ****** \n\n");
            printf("1. School Name & Address\n");
    printf("2. Students\n");
    printf("3. Teachers\n");
    printf("4. Employees\n");
    printf("5. Courses\n");
    printf("6. Payment Method\n");
    int ch;
    printf("\t \t \t \t Enter your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
         schoolname_address();
        break;
    case 2:
        student();
        break;
    case 3:
        teacher();
        break;
    case 4:
        employee();
        break;
    case 5:
        courses();
    case 6:
        payment();
        break;
    default:
        printf("Wrong Input\n");
    }
        }

        else{
          printf("\t\t\tPlease Enter Correct UserID And Password\n");
          login();
        }
     }
     fclose(log);

}

int Admin()
{
   printf("\n\t\t\t**************************************************************************\n");
    printf("\t\t\t              WELCOME TO SCHOOL  MANAGEMENT SYSTEM\n");
    printf("\t\t\t**************************************************************************\n\n\n");

    int cho;
    printf("\t\t\t 1.Create New Account  \n ");
    printf("\n\t\t\t 2.Login  \n\n\t Please Enter What you want :" );
    scanf("%d",&cho);
    if (cho==1)
    {
        system ("CLS");
        registe();
    }
    else if (cho==2)
    {
        system ("CLS");
        login();
    }
    else
    {
        Admin();
    }

}
int main()
{
    printf("\t \t \t \t PROJECT NAME : SCHOOL MANAGEMENT SYSTEM\n\n\n");
    printf("\t \t \t \t 1. USER LOGIN\n");
    printf("\t \t \t \t 2. ADMIN LOGIN\n");
    int ch;
    printf("\t \t \t \t Enter Your Choice: ");
    scanf("%d", &ch);
    switch(ch)
    {
    case 1:
        User();
        break;
    case 2:
        Admin();
        break;

    default:
        printf("Wrong Input\n");
    }

    return 0;
}

