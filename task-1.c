#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    char name[100];
    char domain[100];
    char c_name[100];
    char com_name[100];
    char job_type[100];
    FILE *f1;

    // Creating and writing to a file
    f1 = fopen("task1.txt", "w");
    if (f1 == NULL)
    {
        printf("File can't be created...");
        return 1;
    }
    else
    {
        printf("File created successfully...\n");
    }

    // Taking input
    printf("\nEnter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Domain: ");
    scanf("%s", domain);

    // Writing data to file
    fprintf(f1,"ID=%d \n Name=%s \n Domain=%s",id,name,domain);
    printf("\n Data written successfully... \n");
    fclose(f1);
    printf("File closed successfully... \n");

    // Opening the file for reading
    f1 = fopen("task1.txt", "r");
    if (f1 == NULL)
    {
        printf("\n File can't be opened... \n");
        return 1;
    }
    else
    {
        printf("\n File opened successfully...\n");
    }

    // Reading data from file
    fscanf(f1, "%d %s %s", &id, name, domain);
    printf("\n ID=%d \n Name=%s \n Domain=%s",id,name,domain);
    printf("\n File read successfully...");
    fclose(f1);
    printf("\n File closed successfully...\n");

    //Appending data in a file
    f1 = fopen("task1.txt", "a");
    if (f1 == NULL)
    {
        printf("\n File can't be opened for appending.\n");
        return 1;
    }
    else{
        printf("\n File opened in append mode successfully.\n");
    }
    printf("Enter CollageName: ");
    scanf("%s", c_name);
     printf("CompanyName: ");
    scanf("%s", com_name);
    printf("Enter JobType: ");
    scanf("%s", job_type);

    // Writing data to file
    fprintf(f1,"CollageName=%s \n CompanyName=%s \n JobType=%s",c_name,com_name,job_type);
    printf("\n Data written successfully... \n");
    fclose(f1);
    printf("File closed successfully... \n");


    return 0;
}
