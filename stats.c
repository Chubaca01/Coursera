/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Functions that analyze an array fo char
 *
 * Functions that can analyze an array of unsigned char data items and report
 * analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author JP Ruster
 * @date 11/12/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char val;
  /* Statistics and Printing Functions Go Here */

  printf("find Minimum \n");
  val = find_minimum(test,SIZE);
  printf("%d\n",val);
  printf("find Maximum \n");
  val = find_maximum(test,SIZE);
  printf("%d\n",val);
  printf("find Mean \n");
  val = find_mean(test,SIZE);
  printf("%d\n",val);
  sort_array(test,SIZE);
  printf("print array \n");
  print_array(test,SIZE);
}

/* Add other Implementation File Code Here */
void sort_array(unsigned char *array, unsigned int arraySize) {
  int i,j;
  unsigned char *pt_array,*pt_array_plus;
  pt_array =array;
  pt_array_plus = array;
  pt_array_plus++;

    for (i=0; i<arraySize; i++) {
      for(j=0 ;j< (arraySize-i-1) ; j++,pt_array++,pt_array_plus++) {
        if (*pt_array > *pt_array_plus ) {
          unsigned  char temp;
          temp = *pt_array;
          *pt_array = *pt_array_plus;
          *pt_array_plus = temp;
          }
        }
      pt_array =array;
      pt_array_plus = array;
      pt_array_plus++;
      }
};

unsigned char find_minimum(unsigned char *array, unsigned int arraySize) {
  int i;
  unsigned char saveVal = *array;

  for (i=0; i<arraySize;i++,array++){
    if (*array < saveVal)
      saveVal = *array;
  }
  return saveVal;
};

unsigned char find_maximum(unsigned char *array, unsigned int arraySize) {
  int i;
  unsigned char saveVal = 0;

  for (i=0; i<arraySize;i++,array++){
    if (*array > saveVal)
      saveVal = *array;
  }
  return saveVal;
};

unsigned int find_mean(unsigned char *array, unsigned int arraySize) {
int i;
int saveVal = 0;

for (i=0; i<arraySize;i++,array++){
      saveVal += (int) *array;
}
saveVal /= SIZE;
return saveVal;
};

unsigned int find_median(unsigned char *array,unsigned int arraySize ) {

};

void print_statistics(unsigned char* array,unsigned int arraySize){
};

void print_array(unsigned char* array,unsigned int arraySize){
  int i;

  for ( i=0 ; i<arraySize; i++,array++)
    printf("%d ",*array);
  printf("\n");
};
