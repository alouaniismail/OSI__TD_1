#include<stdio.h>
#include<unistd.h>

int main(){
  int sleep_time=3600;//attendre 1 heure(3600 secondes)
  //printf("Je vais dormir pendant %d secondes ...\n",sleep_time);
  sleep(sleep_time*3600*3600);
  printf("Je me suis réveillé après avoir dormi %d secondes.\n",sleep_time);
  return 0;
}
