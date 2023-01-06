#include<bits/stdc++.h>
using namespace std;
char tictactoe[3][3];
int done=0;
int row, column;
int turn=0;
void initialize()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            tictactoe[i][j]=' ';
        }
    }
}
void print()
{
    cout<<" ======================= \n";
    cout<<"|       |       |       |\n";
    cout<<"|   "<<tictactoe[0][0]<<"   "<<"|"<<"   "<<tictactoe[0][1]<<"   "<<"|"<<"   "<<tictactoe[0][2]<<"   |\n";
    cout<<"|       |       |       |\n";
    cout<<" ======================= \n";
    cout<<"|       |       |       |\n";
    cout<<"|   "<<tictactoe[1][0]<<"   "<<"|"<<"   "<<tictactoe[1][1]<<"   "<<"|"<<"   "<<tictactoe[1][2]<<"   |\n";
    cout<<"|       |       |       |\n";
    cout<<" ======================= \n";
    cout<<"|       |       |       |\n";
    cout<<"|   "<<tictactoe[2][0]<<"   "<<"|"<<"   "<<tictactoe[2][1]<<"   "<<"|"<<"   "<<tictactoe[2][2]<<"   |\n";
    cout<<"|       |       |       |\n";
    cout<<" ======================= \n";
}
void change(int row,int column)
{
    int flag=1;
    if(tictactoe[row-1][column-1]==(char)(48)||tictactoe[row-1][column-1]==(char)(49))
    {       
        system("clear || cls");
        print();
        cout<<"Re-enter the Value of Row and Column\n";
        cout<<"\nRow:- ";
        cin>>row;
        cout<<"\nColumn:- ";
        cin>>column;
        change(row,column);
        flag=0;
    }
    else
    {
        tictactoe[row-1][column-1]=(char)(turn+48);
        if(flag)
        {
            if(turn==0)
            {
                turn=1;
            }
            else
            {
                turn=0;
            }
        }
        cout<<endl;
    }
}
void checkvictory()
{
    
        if(tictactoe[0][0]==tictactoe[0][1]&&tictactoe[0][1]==tictactoe[0][2])
        {
            if(tictactoe[0][0]==(char)(48)||tictactoe[0][0]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[0][0]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[1][0]==tictactoe[2][0]&&tictactoe[1][0]==tictactoe[0][0])
        {
            if(tictactoe[0][0]==(char)(48)||tictactoe[0][0]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[0][0]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[0][0]==tictactoe[1][1]&&tictactoe[1][1]==tictactoe[2][2])
        {
            if(tictactoe[0][0]==(char)(48)||tictactoe[0][0]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[0][0]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[1][1]==tictactoe[2][1]&&tictactoe[1][1]==tictactoe[0][1])
        {
            if(tictactoe[1][1]==(char)(48)||tictactoe[1][1]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[1][1]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[0][2]==tictactoe[1][2]&&tictactoe[1][2]==tictactoe[2][2])
        {
            if(tictactoe[2][2]==(char)(48)||tictactoe[2][2]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[2][2]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[0][2]==tictactoe[1][1]&&tictactoe[1][1]==tictactoe[2][0])
        {
            if(tictactoe[1][1]==(char)(48)||tictactoe[1][1]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[1][1]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[1][0]==tictactoe[1][1]&&tictactoe[1][1]==tictactoe[1][2])
        {
            if(tictactoe[1][1]==(char)(48)||tictactoe[1][1]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[1][1]<<" wins.\n";
            exit(0);
            }
        }
        if(tictactoe[2][0]==tictactoe[2][1]&&tictactoe[2][1]==tictactoe[2][2])
        {
            if(tictactoe[2][2]==(char)(48)||tictactoe[2][2]==(char)(49))
            {
            cout<<"\nVictory!!\n";
            cout<<tictactoe[2][2]<<" wins.\n";
            exit(0);
            }
        }
}