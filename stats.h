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
 * @file  stats.h
 * @brief  Function that analyze an aray fo char
 *
 *  Functions that can analyze an array of unsigned char data items and report
 *  analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author  JP Ruster
 * @date  11/12/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief  Sort an Array of character
 *
 *  Given an array of data and a length, sorts the array from largest
 * to smallest. (The zeroth Element should be the largest value, and the last
 * element (n-1) should be the smallest value. )
 *
 * @param  char *array  A unsigned char pointer to an n-element data array
 * @param  unsigned int arraySize  An unsigned integer as the size of the array
 *
 * @return  None
 */
 void sort_array(unsigned char *array, unsigned int arraySize);
 /**
  * @brief  Find min value in array of char
  *
  *  Given an array of data and a length, returns the minimum
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  char minimum
  */
 unsigned char find_minimum(unsigned char *array, unsigned int arraySize);
 /**
  * @brief  Find maximun value in array of char
  *
  *  Given an array of data and a length, returns the maximum
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  char maximun
  */
 unsigned char find_maximum(unsigned char *array, unsigned int arraySize);
 /**
  * @brief  return the mean of an array of char
  *
  *  Given an array of data and a length, returns the mean
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  char min
  */
 unsigned char find_mean(unsigned char *array, unsigned int arraySize);
 /**
  * @brief  return the median of an array of char
  *
  *  Given an array of data and a length, returns the median
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  char median
  */
 unsigned char find_median(unsigned char *array,unsigned int arraySize );
 /**
  * @brief  Print statistics from an array of char
  *
  *  Given an array of data and a length, prints the array to the screen
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  none
  */
 void print_statistics(unsigned char* array,unsigned int arraySize);
 /**
  * @brief  Add Brief Description of Function Here
  *
  *  A function that prints the statistics of an array including minimum,
  * maximum, mean, and median.
  *
  * @param  char *array  A unsigned char pointer to an n-element data array
  * @param  unsigned int arraySize  An unsigned integer as the size of the array
  *
  * @return  none
  */
 void print_array(unsigned char* array,unsigned int arraySize);

#endif /* __STATS_H__ */
