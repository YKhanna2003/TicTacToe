#include<header.h>
int main()
{
    initialize();
    while(1)
    {
        system("clear || cls");
        checkvictory();
        print();
        int row,column;
        int flag=0;
        do
        {
            system("clear || cls");
            print();
            if(flag)
            {
                cout<<"Enter correct rows and columns:- \n";
            }
            cout<<"\nRow:- ";
            cin>>row;
            cout<<"\nColumn:- ";
            cin>>column;
            flag=1;
        }while(!(row>=1&&row<=3&&column<=3&&column>=1));
        change(row,column);
    }
}