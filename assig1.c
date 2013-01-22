#include <stdio.h>
#include "gradeStats.h"

/* function main begins program execution */
int main( void )
{
   int counter; /* number of grade to be entered next */
   int grade; /* grade value */
   int grades[MAX_GRADES];
   
   /* initialization phase */
   counter = 0; /* initialize loop counter */
   grade = 0; // Initialize grade

   /* instructions */
   printf("Enter a list of grades, and a negative number when done.\n");
   
   /* processing phase */
   while (grade >= 0 && counter < MAX_GRADES) { /* loop until a negative grade is entered */
      printf( "Enter grade: " ); /* prompt for input */
      scanf( "%d", &grade ); /* read grade from user */
      if (grade >= 0) {
          if (grade <= 100) {
            grades[counter] = grade;
            counter = counter + 1; /* increment counter */
          }
          else printf("Grades can't be over 100.\n");
       }
   } /* end while */
   
   gradeStats(grades, counter);
   return 0; /* indicate program ended successfully */
} /* end function main */
