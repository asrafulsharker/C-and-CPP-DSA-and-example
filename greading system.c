#include<stdio.h>
int main()
{

   int score;
   char grade;


   printf("Enter score(0-100): ");
   scanf("%d",&score);


   if(score<0 || score>100) {
     printf("Invalid Score");
     // stop execution
     return 0;
   }


   if(score>=80 && score<=100)
     grade = 'A+';

   else if(score>=75)
     grade = 'A';


   else if(score>=70)
     grade = 'A-';


   else if(score>=65)
     grade = 'B+';

   // for score>=50 and <60
   else if(score>=60)
     grade = 'B';

   else if(score>=55)
     grade = 'B-';

    else if(score>=50)
     grade = 'C+';

    else if(score>=45)
     grade = 'C';

    else if(score>=40)
     grade = 'D';


   else
     grade = 'F';


   printf("Grade: %c\n", grade);

   return 0;
}
