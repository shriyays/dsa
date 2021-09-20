#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dir
{
    struct dir *prev;

    char name[20];
    char pno[10];
    char address[100];
    char area[20];

    struct dir *next;

}dir_t;

dir_t *head;

void create()
{
    dir_t *temp;
    temp=(dir_t*)malloc(sizeof(dir_t));

    printf("\n====ENTER THE DETAILS===\n");


    printf("\nNAME: ");
    //fgets(temp->name,20,stdin);
    scanf("%s",temp->name);
    fpurge(stdin);

    printf("\nPHONE NUMBER : ");
    scanf("%s",temp->pno);
    fpurge(stdin);

    printf("\nADDRESS (press ; to end input): ");
    scanf("%[^;]s",temp->address);
    fpurge(stdin);


    printf("\nAREA : ");
    scanf("%[^\n]s",temp->area);
    fpurge(stdin);

    //temp->next=(dir_t*)malloc(sizeof(dir_t));
    temp->next = NULL;

    //temp->prev=(dir_t*)malloc(sizeof(dir_t));
    temp->prev=NULL;
    
    if(head==NULL)
    {
        head=temp;
        head->prev=(dir_t*)malloc(sizeof(dir_t));
        head->prev=NULL;
        head->next=(dir_t*)malloc(sizeof(dir_t));;
        head->next=NULL;

    }
    else{
        dir_t *t1, *t2;
        t1=head;
        while(t1!=NULL)
        {
            for(int i=0;i<(sizeof(temp->name)/sizeof(temp->name[0]));i++)
            {
                if(strcmp(temp->name,t1->name)==0)
                {
                    t2=t1->next;
                    temp->next=temp;
                    temp->prev=t1;
                    temp->next=t2;

                }
                else if(temp->name[i]<t1->name[i])
                {
                    t2=t2;
                    if(t1->prev==NULL)
                    {
                        head=temp;
                        temp->prev=NULL;
                        temp->next=t1;
                        t1->prev=temp;

                    }
                    else{
                        temp->prev=t1->prev;
                        t1->prev->next=temp;
                        temp->next=t2;
                        t2->prev=temp;

                    }
                    //free(temp);
                    //temp=NULL;
                    return;
                    
                }
                
            }
        }
    }

}

void display()
{
    dir_t *temp;
    temp=head;

    int i=1;
    while(temp==NULL)
    {
        printf("\n%d\nNAME:%s\nPHONE NUMBER:%s\nADDRESS:%s\nAREA:%s\n",i,temp->name,temp->pno,temp->address,temp->area);
        i++;
    }
    free(temp);
    temp=NULL;

}

int main()
{
    head=NULL;

    printf("Enter the number of customers:");
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        create();

    }

    display();
    free(head);
    head=NULL;
    return 0;

}
