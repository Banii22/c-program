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
            
            if(e[j].category>=1 && e[j].category<=6 )
            {
               valid= 1;
            }
            else{
               printf("Invalid");
            }
         }
         else if(choice==2)
         {
            float total=0;

            printf("Expenses\n");

            for(int i=0; i<count; i++)
            {
               printf("amount: %.2f || category: ", e[i].amount);

               if(e[i].category==1){
                  printf("Food\n");
               }
               else if(e[i].category== 2){
                  printf("Transportation\n");
               }
               else if(e[i].category== 3 ){
                  printf("Savings\n");
               }
               else if(e[i].category== 4){
                  printf("Entertainment\n");
               }
               else if(e[i].category== 5){
                  printf("Education\n");
               }
               else {
                  printf("Miscellaneous\n");
               }
            }
         }
         else if(choice==3) {
            float total=0;
            for(i=0; i< count; i++){
            total+= e[i].amount;
            }
            printf("Your total expence is: %.2f\n", total); 
         }

         else if(choice==4){
            printf("Exiting program\n");
            break;
         }

         else {
            printf("Invalid choice\n");
         }
      }
      return 0;
 }



   