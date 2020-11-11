// Lacy Hayes
// COP 3223C MWF
// 10.16.20
// Assignment 3 - Program 4
 
// this program will use arrays to declare 1000 ints and count how many times each of the values appears in an array of 1000 die rolls
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main () {

srand(time(0));
// declaring counter and num array & initializing variables i and dice_roll

int counter[6], num[1000], i, dice_roll;
// for loop filling counter array with elements 1-6

for(i = 0; i<6; i++) {	
counter[i] = 0;		
}
// for loop that counts how many times each of the values appears in the array of 1000 dice rolls
for(i = 0; i<1000; i++) {
dice_roll = (rand () % 6);
counter[dice_roll] ++;	
}

for(int i = 0; i<6; i++) {
// printing out how many times each value appears in the array
printf("%d occurs %d times\n\n", i+1, counter[i]);		
}
return 0;
}


