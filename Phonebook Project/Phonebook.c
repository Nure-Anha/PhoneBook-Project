#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
typedef struct list add;
struct list
{
    char name[40];
    char num[20];
    char gmail[40];
    char fb[40];
    add* next;
};
int i=1,size=0;
void Insert(add** head)
{
    Beep(523, 500);
    system("COLOR 1F");
    add* newnode=(add*)malloc(sizeof(add));
    printf("\n\n\n\t\tContact name : ");
    gets(newnode->name);
    system("cls");
    printf("\n\n\n\t\tContact Name : ");
    gets(newnode->name);
    system("cls");
    Beep(523, 500);
    printf("\n\n\n\t\t\tMobile Number : ");
    gets(newnode->num);
    system("cls");
    Beep(523, 500);
    printf("\n\n\n\t\t\tGmail id : ");
    gets(newnode->gmail);
    system("cls");
    Beep(523, 500);
    printf("\n\n\n\t\t\tFacebook Account : ");
    gets(newnode->fb);
    system("cls");
    newnode->next = NULL;
    size++;
    if(size == 5)
    {
        system("cls");
        Beep(523, 1000);
        system("COLOR 4F");
        printf("\n\n\n\t\t\tPhone Memory is full!!!");
        printf("\n\t\tIf you want to add more contact,You have to delete some contact from your list...\n\n\n");
        return;
    }
    else
    {
        if(*head == NULL)
        {
            *head = newnode;
            system("cls");
            Beep(523, 500);
            system("COLOR 3F");
            printf("\n\n\t\t\t\t\tDone!!!\n\n");
            return;
        }
        else
        {
            add* temp = *head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
            system("cls");
            Beep(523, 500);
            system("COLOR 3F");
            printf("\n\t\t\t\t\tDone!!!\n\n");
        }
        return;
    }
}
void Search(add*head)
{
    char ch[40];
    system("COLOR 1F");
    Beep(523, 500);
    printf("\n\n\n\t\tContact name : ");
    gets(ch);
    system("cls");
    printf("\n\n\n\t\tContact name : ");
    gets(ch);
    system("cls");
    if(head == NULL)
    {
        system("cls");
        Beep(523, 1000);
        system("COLOR 4F");
        printf("\n\n\n\t\tNo Contact exists in this Phone Book List!!!\n\n");
        return;
    }
    else
    {
        add*temp = head;
        while(temp != NULL)
        {
            if(strcmp((temp->name),ch) == 0)
            {
                system("cls");
                Beep(523, 500);
                system("COLOR 3F");
                printf("\n\t\t\t%s",temp->name);
                printf("\n\t\t-------------------------");
                printf("\n\t\tNumber : %s",temp->num);
                printf("\n\t\tGmail ID : %s",temp->gmail);
                printf("\n\t\tFacebook Account : %s\n\n",temp->fb);
                return;
            }
            temp = temp->next;
        }
        system("cls");
        Beep(523, 1000);
        system("COLOR 4F");
        printf("\n\n\n\t\tThis Contact is not exists in the list! ");
    }
}
void Delete(add** head)
{
    char ch[40];
    Beep(523, 500);
    system("COLOR 1F");
    printf("\n\t\tContact name : ");
    gets(ch);
    system("cls");
    printf("\n\t\tContact name : ");
    gets(ch);
    system("cls");
    if(*head == NULL)
    {
        system("cls");
        Beep(523, 1000);
        system("COLOR 4F");
        printf("\n\t\t\t\t\tNo Contact exists in this Phone Book List!\n\n");
        return;
    }
    else
    {
        if(strcmp(((*head)->name),ch) == 0)
        {
            add*temp=*head;
            *head = (*head)->next;
            free(temp);
            Beep(523, 500);
            system("COLOR 3F");
            printf("\n\t\t\t\t\tDone!!!\n\n\n\n");
            return;
        }
        else
        {
            add*temp = *head;
            while(temp->next != NULL)
            {
                if(strcmp((temp->next->name),ch) == 0)
                {
                    temp->next = temp->next->next;
                    size--;
                    return;
                }
                temp = temp->next;
            }
            system("cls");
            Beep(523, 1000);
            system("COLOR 4F");
            printf("\n\t\t\t\t\tInvalid Contact!!!\n\n");
        }
    }
}
void Display(add* head)
{
    system("COLOR 1F");
    if(head == NULL)
    {
        system("cls");
        Beep(523, 1000);
        system("COLOR 4F");
        printf("\n\n\n\t\tNo Contact exists in this Phone Book List!");
        return;
    }
    else
    {
        add*temp = head;
        while(temp != NULL)
        {
            Beep(523, 500);
            system("COLOR 1F");
            printf("\n\t\t\t\t%d.%c%s",i,32,temp->name);
            printf("\n\t\t\t-------------------------");
            printf("\n\t\t\tNumber : %s",temp->num);
            printf("\n\t\t\tGmail ID : %s",temp->gmail);
            printf("\n\t\t\tFacebook Account : %s\n\n",temp->fb);
            temp = temp->next;
            i++;
        }
        i=1;
        return;
    }
}
void main()
{
    add* head=NULL;
    char c[40];
    int ch;
    system("COLOR 1F");
     mainhome:
     system("cls");
     printf("\t\t\t###########################################################################");
     printf("\n\t\t\t############                   Welcome to                      ############");
     printf("\n\t\t\t############                    Phonebook                       ###########");
     printf("\n\t\t\t###########################################################################");
     printf("\n\t\t\t---------------------------------------------------------------------------\n");
     printf("\n\t\t\t----------------------------------------------------------------------------");
         while(1)
    {
     printf("\n\t\t\t\t  **-**-**-**-**-**-**-**  Main Menu  **-**-**-**-**-**-**-**\n");
     printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 1)Create A Contact             <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 2)Remove A Contact             <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 3)Show The Contact List        <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2 4)Find A Contact               <\n");
     printf("\n\t\t\t\t        >      \xDB\xDB\xDB\xDB\xB2-1)Quit                         <\n");
     printf("\n\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
     printf("\n\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
     printf("\n\t\t\t\t\t\t\t\t\t\t Developed by 'Team Dual Dolphins'");
     printf("\n\t\t\t\t\xDB\xB2\xDB Enter Your Choice:");
        scanf("%d",&ch);

        if(ch == -1)
        {
            break;
        }
        else
        {
            switch(ch)
            {
            case 1 :
                system("cls");
                Insert(&head);
                break;
            case 2 :
                system("cls");
                Delete(&head);
                break;
            case 3 :
                system("cls");
                Display(head);
                break;
            case 4 :
                system("cls");
                Search(head);
                break;
            default :
                system("COLOR 4F");
                printf("\n\t\tInvalid Choice!Try again!!!");
                break;
            }
        }
    }
}
