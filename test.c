#include<stdio.h>
#include<unistd.h>
#include<sys/time.h>

int main(void){
  unsigned int microseconds;
  struct timeval tv1, tv2;
  gettimeofday(&tv1,NULL);
  sleep(10);//10 secondes seulement.
  gettimeofday(&tv2,NULL);
  microseconds=(tv2.tv_sec-tv1.tv_sec)*1000000+(tv2.tv_usec-tv1.tv_usec);
  printf("On a attendu: (3600)%d microseconds.\n",microseconds);
  return 0;//10^7 microseonds soit 10 seconds brut~.
}
