#include<stdio.h>


   struct Expences
   {
    char category[30];
    char description[50];
    float amount;
   };

   int main()
   {
      struct Expences e[20];
      int count=0;
      int choice;
      int i, j=0;

      printf("Welcome to my Expense Tracker.");

      for(int i=0; i<=100; i++)
      {
         printf("Expense tracker\n");
         printf("1. Add expenses.\n");
         printf("2. View Expenses.\n");
         printf("3.Total expense\n");
         printf("4. Exit.\n");

         printf("Enter a choice: ");
         scanf("%d", & choice);

         if(choice==1)
         {
            printf("Enter amount:");
            scanf("%f", & e[j].amount);

            printf("Select Category:\n");
            printf("1. Food\n");
            printf("2. Transportation\n");
            printf("3. Savings\n");
            printf("4. Entertainment\n");
            printf("5. Education\n");
            printf("5. MIscellaneous\n");

            scanf("%d", & e[j].category);

            j++;
            
         }
         else if(choice==2)
         {
            float total=0;
            printf("Expenses\n");

            for(int i=0; i<count; i++)
            {
               printf("amount: 2f", e[i].amount);
            }
         }
      }



   }



   