#include <stdio.h>
int main() {
  int a, s, temp = 0, temp1 = 0;
  printf("enter the np of symbols in alphabet:");
  scanf("%d", & a);
  printf("enter the no of state:");
  scanf("%d", & s);
  printf("enter the transision state:");
  char t[s + 2][a + 2];

for (int i=0; i<s+1; i++) {
  for (int j=0; j<a+2; j++) {
    scanf("%c", & t[i][j]);
    }
  }
  for (int i=0; i<s+1; i++) {
    for (int j=0; j<a+2; j++) {
      printf("%c", t[i][j]);
    }
    printf("\n");
  }
  printf("enter the string: ");
  char string[10];

  for (int j=0; j<10; j++) {
    scanf("%c", & string[j]);
  printf("\n");
      }
  for (int k=0; k<10; k++) {
    for (int i=0; i<s+1; i++) {
      for (int j=0; j<a+2; j++) {
            if (string[k] == t[0][j]) {
              temp1 = temp;
              temp = t[temp][j];
              printf("\non state %c applying symbol %c goes to %d: ", temp1, string[k], temp);
        }
        }
      }
    }
    

        if (t[temp][a + 1] == 'F') 
             printf("accepted");
        else
             printf("rejected");
        return 0;
      }
