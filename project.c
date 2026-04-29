#include<stdio.h>


   struct Expences
   {
    int category;
    float amount;
   };

   int main()
   {
      struct Expences e[20];
      int count=0;
      int choice;
      int i, j=0;
      int valid=0;

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
            printf("6. Miscellaneous\n");

            scanf("%d", & e[j].category);
            count++;
            j++;
            
            
         }
         else if(choice==2)
         {
            float total=0;

            printf("Expenses\n");

            for(int i=0; i<count; i++)
            {
               printf("amount: %.2f || category: ", e[i].amount);

               if(e[i].category==1){
                  printf("\nFood\n");
               }
               else if(e[i].category== 2){
                  printf("\nTransportation\n");
               }
               else if(e[i].category== 3 ){
                  printf("\nSavings\n");
               }
               else if(e[i].category== 4){
                  printf("\nEntertainment\n");
               }
               else if(e[i].category== 5){
                  printf("\nEducation\n");
               }
               else {
                  printf("\nMiscellaneous\n");
               }
            }
         }
         else if(choice==3) {
            float total=0;
            for(i=0; i< count; i++){
            total+= e[i].amount;
            }
            printf("\nYour total expence is: %.2f\n", total); 
         }

         else if(choice==4){
            printf("\nExiting program\n");
            break;
         }

         else {
            printf("\nInvalid choice\n");
         }
      }
      return 0;
 }

   