#include <stdio.h>
#include <stdlib.h>
typedef struct
{

    int dd;
    int mm;
    int yy;
} dob;
typedef struct student
{

    int roll_no;
    char name[20];
    int sub[5];
    dob D_of_birth;
    int total;
    float percentage;
    char phone_no[11];
} student;

int main(void)
{
    student s1, SE_10[20];
    int limit_of_database, i, key, j;
    int choice;
    do
    {
        printf("\n\t Database Program \n\t1. Input\n\t2. Display\n\t3. Search\n\t4. Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: //Input case
            printf("\n\t Enter the no of records u want to enter :: ");
            scanf("%d", &limit_of_database);
            for (i = 0; i < limit_of_database; i++)
            {
                printf("\n\t Enter the roll_no\t");
                scanf("%d", &SE_10[i].roll_no);
                printf("\n\t Enter the name\t");
                scanf("%s", SE_10[i].name);
                printf("\n\t Enter the subject marks");
                SE_10[i].total = 0;
                for (j = 0; j < 3; j++)
                {
                    printf("\n\t Enter the Marks of subject [%d]\t", j);
                    scanf("%d", &SE_10[i].sub[j]);
                    SE_10[i].total += SE_10[i].sub[j];
                }
                SE_10[i].percentage = SE_10[i].total / 3; //percentage calculation

                //percentage derived

                printf("\n\t Enter the date(dd/mm/yy)::\n\t Enter day ");
                scanf("%d", &SE_10[i].D_of_birth.dd);
                printf("\n\t Enter the month ");
                scanf("%d", &SE_10[i].D_of_birth.mm);
                printf("\n\t Enter the year\t");
                scanf("%d", &SE_10[i].D_of_birth.yy);
                printf("\n\t enter the phone_no (10 digit +ve no)\t");
                scanf("%s", SE_10[i].phone_no);
            }
            break;
        case 2: //output tabular
            printf("\n\t.................");
            printf("Students Database");
            printf(".................\n");
            printf("\n\t| Rec no | Roll_no|\t  name|\t Phone_no |\t DOB | Total Marks | percentage |");
            for (i = 0; i < limit_of_database; i++) //to display the data rowwise
            {
                printf("\n\t|      %d |\t%d |\t%s|\t%s| %d-%d-%d|", i, SE_10[i].roll_no, SE_10[i].name, SE_10[i].phone_no, SE_10[i].D_of_birth.dd, SE_10[i].D_of_birth.mm, SE_10[i].D_of_birth.yy);
                printf("\t       %d |\t  %.2f |",SE_10[i].total,SE_10[i].percentage);
            }
        }
    }while (choice != 4);
}
