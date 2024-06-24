#include<stdio.h>
int main(){
int n;
printf("enter your char value: ");
scanf("%d",&n);
for(int i=0; i<n; i++){
  for(int j=0;j<n-i;j++){
    printf(" ");
  }
  for(int k=0; k<2*i+1; k++){
    printf("%c",'n'+k);
  }

  printf("\n");
}





  return 0;
}



//        A
//       ABC
//      ABCDE
//     ABCDEFG
//    ABCDEFGHI
//   ABCDEFGHIJK
//  ABCDEFGHIJKLM















