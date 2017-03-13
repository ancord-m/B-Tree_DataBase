#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>

void printMenu();
void screenHolder();

void CreateDataBase();
void ReadDataBaseFromFile();
bool Search();

int main(int argc, char *argv[])
{
    int sel = 0;

    do{
        printMenu();
        scanf("%d", &sel);
        system("cls");

        switch (sel) {
        case 1:
            CreateDataBase();
            break;
        case 2:
            ReadDataBaseFromFile();
            break;
        case 3:
            Search();
            break;

        }
    } while(sel != 0);

    return 0;
}

void CreateDataBase(){

}

void ReadDataBaseFromFile(){

}

bool Search(){

}

//Auxillary functions
void screenHolder(){
    puts("\n\n Press any key...");
    getch();
    system("cls");
}
void printMenu(){
    puts("Pick up one of the variants:\n");
    puts("\t 1. Create data base...");
    puts("\t 2. Read data base from file...");
    puts("\t 3. Search...");
    puts("\t 0. Exit");
}
