#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student
struct Student {
int id;
char name[50];
float marks;
};

// Function to add records (write binary)
void addStudent() {
FILE *fp;
struct Student s;

fp = fopen("Student.dat", "ab"); // append binary

if (fp == NULL) {
printf("File cannot be opened!\n");
return;
}

printf("Enter ID: ");
scanf("%d", &s.id);
printf("Enter Name: ");
scanf(" %[^\n]", s.name);
printf("Enter Marks: ");

scanf("%f", &s.marks);

fwrite(&s, sizeof(s), 1, fp);
fclose(fp);

printf("Record added successfully!\n");
}

// Function to display records
void displayStudents() {
FILE *fp;
struct Student s;

fp = fopen("Student.dat", "rb");

if (fp == NULL) {
printf("File not found!\n");
return;
}

printf("\n--- Student Records ---\n");

while (fread(&s, sizeof(s), 1, fp)) {
printf("ID: %d | Name: %s | Marks: %.2f\n", s.id, s.name, s.marks);
}

fclose(fp);
}

// Function to edit a record
void editStudent() {
FILE *fp;
struct Student s;
int id, found = 0;

fp = fopen("Student.dat", "rb+");
if (fp == NULL) {
printf("File not found!\n");
return;
}

printf("Enter ID to edit: ");
scanf("%d", &id);

while (fread(&s, sizeof(s), 1, fp)) {
if (s.id == id) {
printf("Enter new Name: ");
scanf(" %[^\n]", s.name);
printf("Enter new Marks: ");
scanf("%f", &s.marks);

fseek(fp, -sizeof(s), SEEK_CUR);
fwrite(&s, sizeof(s), 1, fp);

found = 1;
printf("Record updated successfully!\n");
break;
}
}

if (!found)
printf("Record not found!\n");

fclose(fp);
}

// Main menu
int main() {
int choice;

while (1) {
printf("\n--- MENU ---\n");
printf("1. Add Student\n");
printf("2. Display Students\n");
printf("3. Edit Student\n");
printf("4. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);

switch (choice) {
case 1: addStudent(); break;
case 2: displayStudents(); break;
case 3: editStudent(); break;
case 4: exit(0);
default: printf("Invalid choice!\n");
}
}

return 0;
}
