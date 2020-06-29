#include<stdio.h>
#include<stdlib.h>
//#include <stringio.h>
#include <time.h>
#define uchar unsigned char
// PLEASE NOTE I USED SYSTEM()
// WITH ASSUMPTION CODE WILL BE RUN ON WINDOWS

// DECLAIRE THE FOLLOWING HERE
char student_name[10] = '$Student_Name';
char student_number[20] = '$Student_id';
char course_name[20] = '$Course_Name';
char project_name[20] = '$Project_Name';

// QUICK SORT CHARACTER COULD BE BOTH NUMBERS OR LETTERS
// NUMBERS ARE BEST HANDLED IN MANULA INPUT MODE
//HERE IF YOU HAVE A PRE DEFINED SET OF CHARACTERS TO SORT
char characters[16] = "KRATELEPUIMQCXOS";


char arr[20];
int n, i, c;
int b = 0;
int manual = 2; // states , 0 if not using manual entry,1 if using , 2 for neutral
int letters = 2;// states , 0 if not using use of letters,1 if using , 2 for neutral
char letter; //variable for decyphered letter
void delay(int milliseconds);
void inputtype();
void automatedinput();
void manualinput();
void printoutput();
int translate(char x);// converts the letter input into intergers for easy calculation
int translatedx;
char decypher(int x);// converts the intergers processed back into a letters for display
char decypheredx;
void reset();
void quicksort(int *arr, int low, int high);
void logo(){
  printf("%s\n", course_name);
  printf("%s\n", project_name);
  printf("by %s\n", student_number); 
  printf("%s\n",student_name);
}

int main(){
c = ~b;
system("title %s'S QUICK_SORT ALG", student_name);
while(1){
printf("WELCOME TO %s\n", course_name);
printf("%s\n", project_name);
printf("by %s\n", student_id); 
printf("%s\n", student_name);
inputtype();
if(manual==0){automatedinput();}
else{manualinput();}
quicksort(arr, 0, n-1);
//quicksort();
printoutput();
printf("QuickSort Program Done\n");
system("pause");
reset();
system("cls");
//return 0;
}
}

void inputtype(){
while (manual==2){
        int xi;
        //system("cls");
        printf("-------------------------------------\n");
        printf("|WOULD YOU LIKE TO :                 |\n");
        printf("|1.Use Experiment_2 input >          |\n"); 
        printf("|K R A T E L E P U I M Q C X O S     |\n");
        printf("|            OR                      |\n");
        printf("|2.Enter your own random input       |\n");
        printf("|                                    |\n");
        printf("|PLEASE INPUT:                       |\n"); 
        printf("|1 for Experiment_2                  |\n");
        printf("|OR                                  |\n");
        printf("|2 for Manual input                  |\n");
        printf("-------------------------------------\n");
        printf("ANSWER[1 or 2]:");
        scanf("%d",&xi);
        if(xi==1){
            manual=0;
            letters=1;
        }
        if(xi==2){manual=1;}
        system("cls");
    }
if(manual==1){
    int t;
    while(letters==2){
        system("cls");
        printf("%s'S QUICK SORT ALG\n", student_name);
        printf("%s\n", project_name);
        printf("by %s\n", student_id); 
        printf("%s\n", student_name);
        printf("ARE YOU SORTING NUMBERS OR LETTERS\n");
        printf("INPUT 1 for numbers OR\n");
        printf("INPUT 2 for letters\n");
        printf("ANSWER[1 or 2]:");
        scanf("%d",&t);
        if(t==1){letters=0;}
        if(t==2){letters=1;}
    }
system("cls");
printf("please input valid entry\n");
}
system("cls");
printf("Thank you Input is Defined\n");
delay(800);
//system("timeout /t 1");
}
void quicksort(int *arr, int low, int high){
  int pivot, i, j, temp;
  system("cls");
  printf("%s'S QUICK SORT ALG\n", student_name);
  printf("%s\n", project_name);
  printf("by %s\n", student_id); 
  printf("%s\n", student_name);
  //delay(rand() % 100 + 1);
  printf("ARRAY[");
  int ii;
  for(ii = 0; ii < n; ii++){
        printf("%d ,",arr[ii]);
        }
  printf("]\n");
  //delay(rand() % 200 + 50);
  printf("Refr == %d\n",b);
  if(b==b){printf("Q----U----I----C----K--|--S----O----R---T----I----N----G\n");}
  else {printf("\n");}
  b = ~b;
  if(low < high) {
    pivot = low; // select a pivot element
    printf("Setting Pivot as [%d]\n",pivot);
    delay(rand() % 20 + 1);
    int iix;
    for(iix=0;iix<10;iix++){
        int ii;
        printf("ARRAY[");
        for(ii = 0; ii < n; ii++){
            printf("%d ,",arr[ii]);
        }
        printf("]\n");
    }
    delay(rand() % 400 + 250);
    i = low;
    j = high;
    while(i < j) {
      while(arr[i] <= arr[pivot] && i <= high)
        i++;
      while(arr[j] > arr[pivot] && j >= low)
        j--;
      if(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }

    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    quicksort(arr, low, j-1);
    quicksort(arr, j+1, high);
  }
}

void automatedinput(){
system("cls");
printf("EXPERIMENT_2 INPUT MODE\n");
delay(500);
printf("input is as follows\n");
delay(500);
printf("K R A T E L E P U I M Q C X O S\n");
delay(300);
printf("Setting Input Type to Letters\n");
letters=1;
delay(200);
printf("Setting Input Length as 16\n");
n=16;
delay(500);
printf("Entering Values\n");
printf("KRATELEPUIMQCXOS\n");
delay(200);
//char characters[16] = "KRATELEPUIMQCXOS";
for(i = 0; i < n; i++){
    printf("Inputing Character %c",characters[i]);
    translate(characters[i]);
    arr[i] = translatedx;
    printf("---Translated Number %d\n",translatedx);
    //delay(200);
    delay(rand() % 150 + 50);
  }
printf("Printing Inputed Number Array\n");
printf("ARRAY[");
for(i = 0; i < n; i++){
    printf("%d ,",arr[i]);
}
printf("]\n");
delay(2000);
//system("pause");
}

void manualinput(){
printf("_________________________\n");
printf(" %s'S QUICK SORT ALG\n", student_name);
printf(" %s\n", project_name);
printf(" by %s\n", student_id); 
printf(" %s\n", student_name);
printf("_________________________\n");
printf("ENTER THE SIZE OF THE ARRAY\n");
printf("NUMBER OF ELEMENTS:");
scanf("%d", &n);

if(letters==0){
    printf("ENTER THE ELEMENT TO BE SORTED\n");
    printf("ENTER Element :");
    gets(arr);
    /*
    for(i = 0; i < n; i++){
        //system("cls");
        printf("ENTER Element Number %d of %d\n",i,n);
        printf("Element:");
        scanf("%d", &arr[i]);
    }*/
}
if(letters==1){
char characters[100];
printf("INPUT THE LETTERS TO BE SORTED\n");
printf("ONE AFTER THE OTHER NO SPACES\n");
printf("PRESS ENTER WHEN DONE\n");
//printf("MAKE SURE TO ENTER ATLEAST %d LETTERS\n",n);
printf("LETTERS: ");
gets(characters);
//scanf("%s", characters);
/*
for(i = 0; i < n; i++){
    printf("INPUT LETTER  %d:\n",i);
    scanf("%c", &characters[i]);
    translate(characters[i]);
  }
*/
for(i = 0; i < n; i++){
    printf("Inputing Character %c",characters[i]);
    translate(characters[i]);
    arr[i] = translatedx;
    printf("---Translated Number %d\n",translatedx);
    //delay(200);
    delay(rand() % 150 + 50);
  }
printf("Printing Inputed Number Array\n");
printf("ARRAY[");
for(i = 0; i < n; i++){
    printf("%d ,",arr[i]);
}
printf("]\n");
delay(2000);
}

}
void printoutput(){
system("cls");
printf("%s'S QUICK SORT ALG\n", student_name);
printf("%s\n", project_name);
printf("by %s\n", student_id); 
printf("%s\n", student_name);
if (letters==0)
{
printf("SORTED NUMBER ARRAY\n");
  for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
}
if (letters==1)
{

printf("Decyphering SORTED NUMBER\n");
for(i = 0; i < n; i++){
    printf("Decyphering SORTED NUMBERS %d",arr[i]);
    decypher(arr[i]);
    printf("---Translated Number %c\n",decypheredx);
    //delay(200);
    delay(rand() % 150 + 50);
  }
printf("SORTED LETTER ARRAY\n");
  for(i = 0; i < n; i++){
    decypher(arr[i]);
    printf("%c ", decypheredx);
  }
  printf("\n");
}

system("pause");
}
int translate(char x){
    switch(x){
        case 'a': case'A':
        translatedx = 1;
        break;
        case 'b': case'B':
        translatedx = 2;
        break;
        case 'c': case'C':
        translatedx = 3;
        break;
        case 'd': case'D':
        translatedx = 4;
        break;
        case 'e': case'E':
        translatedx = 5;
        break;
        case 'f': case'F':
        translatedx = 6;
        break;
        case 'g': case'G':
        translatedx = 7;
        break;
        case 'h': case'H':
        translatedx = 8;
        break;
        case 'i': case'I':
        translatedx = 9;
        break;
        case 'j': case'J':
        translatedx = 10;
        break;
        case 'k': case'K':
        translatedx = 11;
        break;
        case 'l': case'L':
        translatedx = 12;
        break;
        case 'm': case'M':
        translatedx = 13;
        break;
        case 'n': case'N':
        translatedx = 14;
        break;
        case 'o': case'O':
        translatedx = 15;
        break;
        case 'p': case'P':
        translatedx = 16;
        break;
        case 'q': case'Q':
        translatedx = 17;
        break;
        case 'r': case'R':
        translatedx = 18;
        break;
        case 's': case'S':
        translatedx = 19;
        break;
        case 't': case'T':
        translatedx = 20;
        break;
        case 'u': case'U':
        translatedx = 21;
        break;
        case 'v': case'V':
        translatedx = 22;
        break;
        case 'w': case'W':
        translatedx = 23;
        break;
        case 'x': case'X':
        translatedx = 24;
        break;
        case 'y': case'Y':
        translatedx = 25;
        break;
        case 'z': case'Z':
        translatedx = 26;
        break;
        default:
        translatedx = 0;
    }
}
char decypher(int x){
    switch(x){
        case 1:
        decypheredx = 'A';
        break;
        case 2:
        decypheredx = 'B';
        break;
        case 3:
        decypheredx = 'C';
        break;
        case 4:
        decypheredx = 'D';
        break;
        case 5:
        decypheredx = 'E';
        break;
        case 6:
        decypheredx = 'F';
        break;
        case 7:
        decypheredx = 'G';
        break;
        case 8:
        decypheredx = 'H';
        break;
        case 9:
        decypheredx = 'I';
        break;
        case 10:
        decypheredx = 'J';
        break;
        case 11:
        decypheredx = 'K';
        break;
        case 12:
        decypheredx = 'L';
        break;
        case 13:
        decypheredx = 'M';
        break;
        case 14:
        decypheredx = 'N';
        break;
        case 15:
        decypheredx = 'O';
        break;
        case 16:
        decypheredx = 'P';
        break;
        case 17:
        decypheredx = 'Q';
        break;
        case 18:
        decypheredx = 'R';
        break;
        case 19:
        decypheredx = 'S';
        break;
        case 20:
        decypheredx = 'T';
        break;
        case 21:
        decypheredx = 'U';
        break;
        case 22:
        decypheredx = 'V';
        break;
        case 23:
        decypheredx = 'W';
        break;
        case 24:
        decypheredx = 'X';
        break;
        case 25:
        decypheredx = 'Y';
        break;
        case 26:
        decypheredx = 'Z';
        default:
        decypheredx = '#';
    }
}
void reset(){
manual = 2;
letters = 2;
n = 0;
i = 0;
}

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
