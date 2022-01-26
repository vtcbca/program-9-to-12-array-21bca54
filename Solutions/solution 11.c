#include<stdio.h>
#include<conio.h>
int main() {

  char line[150],a[150];
  int v,c;
  v =c=0;
  clrscr();
  printf("Enter a line of string: ");
  gets(line);
  printf("Vovel:");
    for (int i = 0; line[i] != '\0'; ++i) 
    {
       
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' ||
            line[i] == 'O' || line[i] == 'U') {
              a[i]=line[i];
        ++v;
    }
  
    printf("%c",a[i]);
    
  }
  printf("\nTHE INPUTED STRING IS:%s",line);
  printf("\nTotal Vowels in string: %d", v);
  //printf("\nConsonants: %d", c);
  getch();
}