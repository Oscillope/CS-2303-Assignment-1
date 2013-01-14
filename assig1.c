#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int counter; /* number of grade to be entered next */
   int grade; /* grade value */
   int total; /* sum of grades input by user */
   int average; /* average of grades */
   
   /* initialization phase */
   total = 0; /* initialize total */
   counter = 0; /* initialize loop counter */
   grade = 0; // Initialize grade

   /* instructions */
   printf("Enter a list of grades, and a negative number when done.\n");
   
   /* processing phase */
   while ( grade >= 0) { /* loop until a negative grade is entered */
      printf( "Enter grade: " ); /* prompt for input */
      scanf( "%d", &grade ); /* read grade from user */
      if (grade >= 0) {
          if (grade <= 100) {
            total = total + grade; /* add grade to total if it's not negative */
            counter = counter + 1; /* increment counter */
          }
          else printf("Grades can't be over 100.\n");
       }
   } /* end while */
   
   /* termination phase */
   average = total / counter; /* integer division */

   printf( "Class average is %d\n", average ); /* display result */
   return 0; /* indicate program ended successfully */
} /* end function main */
