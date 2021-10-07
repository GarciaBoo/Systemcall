#include </home/adduser/git/master/staging/usr/include/myservice.h>
#include <stdio.h>
#define __NR_myservice 449
#define ARR_LEN 5

int main() {

   int ret, i;

   int a[] = {'h','e','l','l','o'};
   int b[ARR_LEN];

   ret = syscall(__NR_myservice, a, b, ARR_LEN * sizeof(int)); 
   if (ret == -1)
      printf("error: %d\n", errno);

   for (i = 0; i < ARR_LEN; i++) {
      printf("%c \n", b[i]);
   }


}