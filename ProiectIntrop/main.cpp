using namespace std;
#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
void jocnou(int y)
{
    if(y>=10)
        y=9;
    int ascii=65;
    int a[10][10];
    char b[10][10];
    int i,j,q,w,a1,a2;
    q=0;
    w=(y*y)/5;
    w++;
    for(i=1;i<=y;i++)
        {b[i][0]=ascii;ascii++;}
        ascii=48;
    for(j=0;j<=y;j++)
        {b[0][j]=ascii;ascii++;}
        for(i=1;i<=y;i++)
            for(j=1;j<=y;j++)
            {b[i][j]=35;a[i][j]=0;}
            while(q!=w)
            {
                a1=rand()%y+1;
                a2=rand()%y+1;
                if(a[a1][a2]==0)
                {a[a1][a2]=1;q++;}
            }

}
int main()
{
    int x,y;
    do
    {
        cout<<"1. Joc nou"<<endl;
        cout<<"2. Lista scoruri"<<endl;
        cout<<"3. Iesire joc"<<endl;
        cin>>x;
    switch(x)
    {
    case 1:
        {
        srand(time(NULL));
        y=rand()%9+3;
        system("CLS");
        jocnou(y);
        break;
        }
    case 2:
        {
            break;
        }
    case 3:
        {
            cout<<"Ai iesit din joc!";
            break;
        }
    }
    }
    while(x<3 && x>=1);
    return 0;
}
