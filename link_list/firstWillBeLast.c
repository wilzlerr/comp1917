/*
 *  firstWillBeLast.c
 *  concept thanks to Matthew
 *  20 13 s1 Practice Prac Exam #2
 *  UNSW comp1917
 *
 *  Created by INSERT YOUR NAME HERE
 *  Share freely CC-BY-3.0
 *
 */

// Complete this function and submit this file ONLY
// for the prac exam.  Do not change the other supplied
// as you will not be submitting them.

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "firstWillBeLast.h"

nodePtr frontToBack (nodePtr list) {
   if(list == NULL) {
      return list;
   }
   
   nodePtr firstNode = list;
   nodePtr lastNode = list;
   nodePtr newList;
   if(list->next == NULL) {
      newList = list;
   } else {
      newList = list->next;
      
      while(lastNode->next != NULL) {
         lastNode = lastNode->next;
      }  
      firstNode->next = NULL;
      lastNode->next = firstNode;
   }
   return newList;   
}
