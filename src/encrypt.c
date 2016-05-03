#include "encrypt.h"

void encrypt(char *message) {
  
  char c;
  
  while (*message) { // Loop through the array 
    *message = *message ^ 31; // ^ 31 means to XOR each character with the number 31.
    message++;
  }
}
