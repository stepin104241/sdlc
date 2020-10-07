#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char bookname[30];
char publisher[30];

};

int main()
{
struct library l[100];
char lib[100];
char book[100];
char pb_nm[30],bk_nm[30];
int i,j,option,k, count;
i=option=count = 0;

printf("\n\n## LIBRARY MANAGEMENT ##\n");
while(option!=5)
{
printf("\n1. Add book information\n");
printf("2. Display All Books Available \n");
printf("3. Delete Book\n");
printf("4. Update Book\n");
printf("5. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&option);

switch (option)
{

case 1:  

	printf ("Enter book name = ");
	scanf ("%s",l[i].bookname);
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);

	
	count++;

	break;
case 2:
	printf("Display All Books Available\n");
	for(i=0;i<count;i++)
	{
	printf ("\n book name = %s",l[i].bookname);
	
	printf ("\t author name = %s",l[i].publisher);

	}
	break;

case 3:
	printf ("Enter the book to delete : ");
        scanf("%s" , book[k]);
	for (i=0;i<count;i++)
	{
	    if(book[k] == l[i].bookname)
	        
	
	printf("book is deleted successfully");
 	}
	
	break;

case 4:
	printf ("Enter the book to update : ");
	scanf("%s" , lib[j]);
        for(i=0;i<count;i++)
	{
	if(lib[j] == l[i].bookname)
	{   
	   printf ("Enter book name = ");
	scanf ("%s",l[i].bookname);
	
	printf ("Enter publisher name = ");
	scanf ("%s",l[i].publisher);
	}
        }
	break;

case 5:
	exit (0); 
}
}
return 0;
}