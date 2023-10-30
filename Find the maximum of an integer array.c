#include <stdio.h>

int main(void) {
 int arr[]={1,23,3,4,5,6,7,7,8,8,44,2,5,6,7,8,9,44,66,33,22};
 int size=sizeof(arr)/sizeof(arr[0]);
  int max=arr[0];
  for(int i=1;i<size;i++)
     if(max<arr[i])
          max=arr[i];

  printf("max=%d\n",max);



  
  return 0;
}