#include <stdio.h>
#include "gradeStats.h"

void gradeStats(int list[MAX_GRADES], int number) {
	int max = 0;
	int min = 100;
	int total = 0;
	int avg = 0;
	int i;
	for(i = 0; i < number; i++) {
		total += list[i];
		if(list[i] > max) max = list[i];
		if(list[i] < min) min = list[i];
	}
	avg = total / number;
	printf("Minimum: %d, Maximum: %d, Average: %d\n", min, max, avg);
}
