#include<sys/syscall.h>
#include<unistd.h>
#include<stdio.h>
#define __NR_helloworld 338
int helloworld(){
  return (int) syscall(__NR_helloworld);
};
main(){
  printf("The return from mysyscall is %d\n",helloworld());
}
