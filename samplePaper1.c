#include <stdio.h>
#include <stdlib.h>

int main()
{

   // Write a C program to find the largest element in an array.
   // int n ;
   // printf("Enter the length of array\n");
   // scanf("%d",&n);
   // int arr[n];

   // // now will take the array elements from the user

   // for(int i = 0 ; i<n ; i++){
   //    scanf("%d",&arr[i]);
   // }

   // int max_elem = arr[0];

   // for(int i = 1 ; i<n; i++){
   //    if(arr[i]>max_elem){
   //       max_elem = arr[i];
   //    }
   // }

   // printf("largest element is %d", max_elem);

   //   Write a C program to reverse a string without using library functions.

   //  char namee[7] = "ashish";  // Correct size to accommodate null terminator
   //  char temp;
   //  int length = 6;  // The length of the string "ashish" (not including '\0')

   // Reverse the string, avoiding the null terminator
   //  for (int i = 0; i < length / 2; i++) {
   //      temp = namee[i];
   //      namee[i] = namee[length - i - 1];
   //      namee[length - i - 1] = temp;
   //  }

   //  printf("%s\n", namee);  // Output the reversed string

   // Write a C program that allocates memory for an array of 10 float numbers using malloc. Initialize the array with values from 1.0 to 10.0 and print the values.

   // float *arr;
   // arr = (float*)malloc(10 * sizeof(float));
   //   if (arr == NULL) {
   //      printf("Memory allocation failed!\n");
   //      return 1; // Exit if allocation fails
   //  }

   // for (int i = 0; i < 10; i++)
   // {
   //   arr[i] = (float)(i+1);
   // }
   // for (int i = 0; i < 10; i++)
   // {
   //    printf("%.1f ", arr[i]);
   // }
   // printf("\n");
   // free(arr);
   // return 0 ;

   //  write a program that allocates memory for 5 integers using calloc, initializes them to 0, and prints their values.

   //    int* arr;
   //    arr = (int*)calloc(5 * sizeof(int));

   //    if(arr==NULL){
   //       printf("memory allocation failed");
   //       return 1 ;
   //    }

   //    for(int i=0; i<5; i++){
   //       printf("%d",arr[i]);
   //       printf(" ");
   //    }
   //    free(arr);

   //  return 0 ;

   //  Write a C program to check whether a number is prime or not.

   int n, i, prime = 1;

   printf("enter the num\n");
   scanf("%d", &n);

   if (n <= 1)
   {
      prime = 0;
   }

   else
   {
      for (i = 2; i <= n / 2; i++)
      {
         if (n % i == 0)
         {
            prime = 0;
            break;
         }
      }
   }

   if (prime)
   {
      printf("%d is prime ", n);
   }
   else
   {
      printf("not a prime ");
   }
}