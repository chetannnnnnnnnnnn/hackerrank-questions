#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int marks_summation(int* marks, int number_of_students, char gender) {
int sumOfEven = 0;
int sumofodd = 0;
if( gender == 'b'){
  for (int i = 0; i < number_of_students; i++) {
    if (i%2 == 0){
     sumOfEven = marks[i] + sumOfEven;
    }
    
  }
 
}
if( gender == 'g'){
  for (int j = 0; j < number_of_students; j++) {
    if (j%2 == 1){
     sumofodd = marks[j] + sumofodd;
    }
  
  }}
   if (gender == 'g'){
    return sumofodd;
   }
   else{
    return sumOfEven;
   }
    
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
  
    return 0;
}