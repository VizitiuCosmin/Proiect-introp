using namespace std;
#include<iostream>
#include<fstream>
int main()
{
    int x;
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
