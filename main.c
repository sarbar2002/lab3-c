//Author: Sarthak Singh sxs6666@psu.edu
//Collaborator:Joshua Chang jvc6690@psu.edu
//ection: 012R
//Breakout: 5
#include <stdio.h>
#include <readline/readline.h>
#include<stdlib.h>


int sum_n(int n) {
  if (n <= 0){
    return 0;
  } else{
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n){
  if (n <= 0){
    return;

  } else {
    printf ("%s\n",s);
    print_n(s, n-1);
  }
}

int main(void) {
  char*number = readline("Enter an int: ");
  int intNumber =atoi(number);
  printf("sum is %d.\n", sum_n(intNumber));
  char*word=readline("Enter a string: ");
  printf(word, intNumber);
  
}

