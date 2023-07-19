#include <stdio.h>

int findDigits(int n) {
    int num = n;
    int count = 0;
        
    // Loop through each digit of the number
    while (num > 0) {
    int digit = num % 10; // Get the last digit
    num /= 10; // Remove the last digit
                                
     // Check if the digit is a divisor of n (avoid division by zero)
     if (digit != 0 && n % digit == 0) {
     count++;
      }
        }
                                                                        
     return count;
          }
                                                                            
       int main() {
       int t; // number of test cases
       scanf("%d", &t);
                                                                                    
         while (t--) {
         int n;
         scanf("%d", &n);
         int result = findDigits(n);
         printf("%d\n", result);
            }
                                                                                                                            
            return 0;
               }
                                                                                                                                
