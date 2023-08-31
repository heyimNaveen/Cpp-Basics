//multiple language robot
#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character:";
    cin>>button;

    // if (button=='a')
    // {
    //     cout<<"Hello"<<endl;
    // }
    // else if (button=='b')
    // {
    //     cout<<"Namaste"<<endl;
    // }
    // else if (button=='c')
    // {
    //     cout<<"Salut"<<endl;
    // }
    // else if (button=='d')
    // {
    //     cout<<"Halo"<<endl;
    // }
    // else if (button=='e')
    // {
    //     cout<<"Caio"<<endl;
    // }
    // else{
    //     cout<<"I am still Learning more"<<endl;
    // }
    switch(button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"Salut"<<endl;
        break;
    case 'd':
        cout<<"Halo"<<endl;
        break;
    case 'e':
        cout<<"Caio"<<endl;
        break;
        
    
    default:
    cout<<"I am still learning more"<<endl;
        break;
    }




    return 0;
}