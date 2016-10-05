/* CS261- Assignment 1 - Q.1*/
/* Name: Jesus Narvaez
 * Date: 9/28/2016
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct student{
	int id;
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
     struct student* neat = (struct student*)malloc(sizeof(struct student)* 10);
     /*return the pointer*/
     return neat;
}


void generate(struct student* students){
  int i, j;
  for(i = 0; i < 10; i++){
	  students[i].id = i;
  }
  for(j = 0; j < 10; j++){
	  students[j].score = (10 * students[j].id)%50;
}
}
void output(struct student* students){
	int i;
	for(i = 0; i < 10; i++){
		printf(" %d %d \n", students[i].id, students[i].score);
	//	printf("The score of the student is: %d \n \n", students[i].score);
	}
	
	/*Output information about the ten students in the format:
              ID1 Score1
              ID2 score2
              ID3 score3
              ...
              ID10 score10*/
}


int min(struct student* students){
	int i, low;
	for(i = 0; i < 10; i++){
		if(students[i].score < students[i-1].score){
			low = students[i].score;
		}
	}
  /* return the minimum score */
     return low;
}

float avg(struct student* students){
  /* return the average score */
	int i, total, average;
	total = 0;
	for(i = 0; i < 10; i++)
		total = students[i].score + total;
		average = total / 10;
		return average;
}
void sort(struct student* students){
  /* return the average score */
    int i, temp, j;
    for(i = 0; i < 10; i++){
	    for(j = 0; j < 10; j++){
		   if(students[j].score < students[j+1].score){
			   temp = students[j].score;
			   students[j].score = students[j+1].score;
			   students[j+1].score = temp;
	    }
    }
}
}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
	if(stud == NULL)
		return;
	free(stud);
}

int main(){
  struct student* stud = allocate();
  generate(stud);
  output(stud);
  sort(stud);
  for(int i=0;i<10;i++){
    printf("%d %d\n", stud[i].id,stud[i].score);
  }
  printf("Avg: %f \n", avg(stud));
  printf("Min: %d \n", min(stud));
  deallocate(stud);
  return 0;
}
