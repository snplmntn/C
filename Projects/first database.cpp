#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void store();
void display();

typedef struct SEAN
{
    char NA[50];
    char studentId[15];
    char studentDept[10];
    char studentAddress[100];
    char studentContactNum[15];
    float studentCGPA;
} Student;

int main() {
    char option;

    while (option != '0')
    {
        system("cls");
        printf("\t\t====== Student Database System ======\n");
        printf("\n\t\t\t1. Create Student Account");
        printf("\n\t\t\t2. Display All Students Information");
        printf("\n\t\t\t3. Update Student Information");
        printf("\n\t\t\t4. Delete Student Information");
        printf("\n\t\t\t5. Search Student Information");
        printf("\n\t\t\t0. Exit");

        printf("\n\n\n\t\t\tEnter Your Option: ");
        scanf(" %c", &option);

        switch (option)
        {
        case '1':
            store();
            break;
        case '2':
            display();
            break;
}
}
}

void store(){
   FILE *fileOne = fopen("KKK.bin", "ab+");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    SEAN sean;

    system("cls");

    printf("\t\t\t====== Create Student Account ======\n");

    printf("\n\t\t\tEnter Student's Name : ");
    getchar();
    gets(sean.NA);

    fwrite(&sean, sizeof(sean), 1, fileOne);

    printf("\n\n\t\t\tInformations have been stored sucessfully\n");
    printf("\n\n\t\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}

void display(){
   FILE *fileOne = fopen("KKK.bin", "rb");

    if (fileOne == NULL)
    {
        printf("\n\t\t\tError !\n");
    }

    SEAN sean;

    system("cls");

    printf("\t\t\t\t====== All Students Information ======\n");

    printf("\n\n\t\t%-20s%-13s%-10s%-25s%-15s%-s\n", "Name", "ID", "Dept.", "Address", "Contact", "CGPA");
    printf("\t\t----------------------------------------------------------------------------------------");

    while (fread(&sean, sizeof(sean), 1, fileOne) == 1)
    {
        printf("\n\n\t\t%-20s", sean.NA);
    }

    printf("\n\n\t\tEnter any keys to continue.......");
    getch();

    fclose(fileOne);
}