#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#include<ctype.h>
HANDLE rHnd, wHnd;
int initializeconsolehandles();
void locate(int,int);
void print();
void initialize();
int runsinoneover[50],runsinprevover=0,flagg=0;
int position=1,undoupdatevariable=0,newbatsmancounter[11],newbatsmanincrement=0,current,extrarunsA,extrarunsB,bowlingcurrent,wicketnumber,teamAtotalruns=0,teamBtotalruns=0,teamAtotalovers=0,teamBtotalovers=0;


void final()//Function to give the input//
{
    int a,key;
    char b;
    char lastinput;
    input='0';
    while(input!=27)//to end the input loop//
    {
        printt();
        while(1)
        {
             locate(0,33);
                printf("Enter runs made |1|2|3|4|5|6|");
                locate(30,33);
           // locate(40,33);
            fflush(stdin);
            if ((input=getche()) == -32)//for arrow key switching//
                input = getche();

            fflush(stdin);
            if(input==75||input==77)
            {
                printf("\b  ");
                if(input==75);
                    //tab5();
                else
                    tab2();
            }
            else  if(input=='\b')
            {
                printf("  ");
                continue;
            }
            else if (input == '\r')//processes the input only when pressed enter//
            {
                input=toupper(lastinput);
                // undoupdate();//excluded in the output//
                tab1();
                break;
            }
            else    if (input=='0'||input=='1'||input=='2'||input=='3'||input=='4'||input=='6'||toupper(input)=='W'||toupper(input)=='N')
                lastinput = input;
            else if(input==27)
            {
                printf("\b ");
                break;
            }
            else
                printf("\a\b ");
            continue;
        }
    }

}
