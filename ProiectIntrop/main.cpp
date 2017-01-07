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
    char b[11][11];
    int i,j,q,w,a1,a2;
    q=0;
    w=(y*y)/7;
    w++;
    for(i=1;i<=y;i++)
        {b[i][-1]=ascii;ascii++;b[i][0]=' ';}
        ascii=49;
    for(j=1;j<=y;j++)
        {b[-1][j]=ascii;ascii++;b[0][j]=' ';}
        b[-1][0]=' ';
        b[0][-1]=' ';
        for(i=1;i<=y;i++)
            for(j=1;j<=y;j++)
            {b[i][j]=35;a[i][j]=0;}
            while(q!=w)
            {
                a1=rand()%y+1;
                a2=rand()%y+1;
                if(a[a1][a2]==0)
                {a[a1][a2]=-1;q++;}
            }
            int a3=0,d1=0,d2=0;
            for(i=1;i<=y;i++)
                for(j=1;j<=y;j++)
            {
                    if(a[i-1][j-1]==-1)
                    a3++;
                    if(a[i-1][j]==-1)
                    a3++;
                    if(a[i][j-1]==-1)
                    a3++;
                    if(a[i+1][j]==-1)
                    a3++;
                    if(a[i][j+1]==-1)
                    a3++;
                    if(a[i+1][j-1]==-1)
                    a3++;
                    if(a[i-1][j+1]==-1)
                    a3++;
                    if(a[i+1][j+1]==-1)
                    a3++;
                if(a[i][j]==0)
                    a[i][j]=a3;
                a3=0;
            }
            int bomba=0;
            char c1,c2;
            int c3,verifbombe=0;
            while(bomba==0)
    {
        system("CLS");
        cout<<verifbombe<<endl;
    for(i=-1;i<=y;i++)
    {for(j=-1;j<=y;j++)
    cout<<b[i][j]<<" ";
    cout<<endl;}
    cout<<endl<<"Numar bombe ramase:"<<w-d1;
    cout<<endl<<"Exemplu deschidere casuta: O A 2"<<endl;
    cout<<"Exemplu de marcare casute(flag): F A 2"<<endl;
    cin>>c1>>c2>>c3;
    if(c1=='F')
        {
            if(d1<=w)
            {b[c2-64][c3]='F';d1++;}

        }
    else
    if(c1=='O')
    if(a[c2-64][c3]==-1)
    {
        system("CLS");
        for(i=1;i<=y;i++)
            for(j=1;j<=y;j++)
        {
            b[i][j]=a[i][j]+48;
            if(b[i][j]==47)
                b[i][j]='X';
        }
        for(i=-1;i<=y;i++)
        {for(j=-1;j<=y;j++)
        cout<<b[i][j]<<" ";
        cout<<endl;}
        bomba=1;cout<<endl<<"Boom! Ai pierdut!"<<endl;

        }
    else
    {
                    if(b[c2-64][c3]=='#')
                    {b[c2-64][c3]=a[c2-64][c3]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64-1>=1 && c3-1>=1 && c2-64<=y && c3-1<=y && b[c2-64-1][c3-1]=='#')
                    {b[c2-64-1][c3-1]=a[c2-64-1][c3-1]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64-1>=1 && c3>=1 && c2-64-1<=y && c3<=y && b[c2-64-1][c3]=='#')
                    {b[c2-64-1][c3]=a[c2-64-1][c3]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64>=1 && c3-1>=1 && c2-64<=y && c3-1<=y && b[c2-64][c3-1]=='#')
                    {b[c2-64][c3-1]=a[c2-64][c3-1]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64+1>=1 && c3>=1 && c2-64+1<=y && c3<=y && b[c2-64+1][c3]=='#')
                    {b[c2-64+1][c3]=a[c2-64+1][c3]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64>=1 && c3+1>=1 && c2-64<=y && c3+1<=y && b[c2-64][c3+1]=='#')
                    {b[c2-64][c3+1]=a[c2-64][c3+1]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64+1>=1 && c3-1>=1 && c2-64+1<=y && c3-1<=y && b[c2-64+1][c3-1]=='#')
                    {b[c2-64+1][c3-1]=a[c2-64+1][c3-1]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64-1>=1 && c3+1>=1 && c2-64-1<=y && c3+1<=y && b[c2-64-1][c3+1]=='#')
                    {b[c2-64-1][c3+1]=a[c2-64-1][c3+1]+48;verifbombe++;}
                    if((a[c2-64][c3]+48)=='0' && c2-64+1>=1 && c3+1>=1 && c2-64+1<=y && c3+1<=y && b[c2-64+1][c3+1]=='#')
                    {b[c2-64+1][c3+1]=a[c2-64+1][c3+1]+48;verifbombe++;}
    }
    if(verifbombe==((y*y)-w))
    {
        system("CLS");
        for(i=1;i<=y;i++)
            for(j=1;j<=y;j++)
        {
            b[i][j]=a[i][j]+48;
            if(b[i][j]==47)
                b[i][j]='X';
        }
        for(i=-1;i<=y;i++)
        {for(j=-1;j<=y;j++)
        cout<<b[i][j]<<" ";
        cout<<endl;}
        bomba=1;cout<<"Felicitari! Ai castigat!"<<endl<<endl;
    }
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
        cout<<endl<<"Tasteaza optiunea:";
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
