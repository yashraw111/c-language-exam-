// Write a C program that writes any 3 employees' name along with their role(designation) in a file called data.txt by taking input from user dynamically.

#include <stdio.h>


int main() {
    FILE *fp;
     int MAX =100;
 int employee =3;
    char name[MAX], role[MAX];

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter details for %d employees:\n", employee);

    for (int i = 0; i < employee; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Enter name: ");
        fgets(name, MAX, stdin);

        printf("Enter role: ");
        fgets(role, MAX, stdin);

        fprintf(fp, "Employee %d: Name: %srole: %s\n", i + 1, name, role);
    }

    fclose(fp);
    printf("\nEmployee data has been written to data.txt\n");

    return 0;
}