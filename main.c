#include "diamond.h"
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int sum (int numbers[], int length) {
  int i, total = 0;

  for (i = 0; i < length; i++) {
    total += numbers[i];
  }

  return total;
}

struct Student {
  int id;
  char firstName[21];
  char lastName[21];
  float gpa;
};

struct Student students[100];
int totalStudents = 0;

struct Student createStudent (int id, char firstName[], char lastName[], float gpa) {
  struct Student student;
  student.id = id;
  strcpy(student.firstName, firstName);
  student.firstName[20] = '\0';
  strcpy(student.lastName, lastName);
  student.lastName[20] = '\0';
  student.gpa = gpa;
  return student;
}

int main () {
  char name[21];
  int choice;
  // print welcome screen and get user name
  welcome_scrn(name);

  printf(MAIN_MENU_TEXT, name);
  scanf("%d", &choice);

  // get main menu choice
  while (choice < 1 || choice > 4) {
    printf("Invalid choice, please try again.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
  }

  switch (choice) {
    case 1:
      printf("Preparing new student form...\n");
      break;
    case 2:
      printf("Getting all students, please wait...\n");
      break;
    case 3:
      printf("Enter student name or Admission number:\n");
      break;
    case 4:
      printf("Thank you for using Diamond Schools, BYE %s!\n", name);
      break;
    default:
      printf("Invalid choice, please try again later!\n");
      break;
  }
  return 0;
}