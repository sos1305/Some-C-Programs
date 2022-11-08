#include<cstdio>

struct company
{
    char pname[20];
    float cost;

} c1;

int main()
{
    //Reading data from a file named INPUT.TXT
    FILE *ptr;
    ptr = fopen("INPUT.TXT", "r");
    char c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);

    //Writing data to a binary file named myfile.dat
    FILE *fptr;
    fptr = fopen("myfile.dat", "w");
    if (fptr == NULL)
    {
        printf("ERROR IN OPENING THE FILE");
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            printf("\n\n");
            printf("<-----ENTER YOUR DATA----->");
            printf("\n\n");
            printf("enter the name of the product: ");
            scanf("%s", c1.pname);
            printf("enter the cost:");
            scanf("%f", &c1.cost);
            fwrite(&c1, sizeof(struct company), 1, fptr);
        }
    }
    printf("DATA WRITTEN SUCCESFULLY IN FILE");
    return 0;
}