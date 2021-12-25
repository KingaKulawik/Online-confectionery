#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

struct Dessert
{
    string Name;
    float Price;
};

int main (void)
{
    Dessert Cupcakes[3];
    
    Cupcakes[0]={"Chocolate cupcake",7.5};
    Cupcakes[1]={"Vanilla cupcake",5.5};
    Cupcakes[2]={"Lemon cupcake",6.5};
    
    Dessert Cakes[3];
    
    Cakes[0]={"Cherry cake",20.5};
    Cakes[1]={"Chocolate cake",22.5};
    Cakes[2]={"Strawberry cake",15.5};
    
    Dessert Doughnuts[3];
    
    Doughnuts[0]={"Doughnut with a rose",5.5};
    Doughnuts[1]={"Raspberry doughnut",6.5};
    Doughnuts[2]={"Doughnut with chocolate",7.5};
    
   
    int menu=0;
    do
    {
        system("cls");
                                             
                                           
        cout<<"Welcome to my cake shop!"<<endl;
        cout<<"What kind of dessert do you want buy?"<<endl;
        cout<<"1. Cupcakes\n2. Cakes\n3. Doughnuts\n\n0. Exit"<<endl;
        cin>>menu;
        switch (menu)
        {
            case 0:
                cout<<"Please come back";
                break;
            case 1:
                cout<<"\nChoose the taste of the cupcake:"<<endl<<endl;
                cout<<"1. "<<Cupcakes[0].Nazwa<<endl;
                cout<<"2. "<<Cupcakes[1].Nazwa<<endl;
                cout<<"3. "<<Cupcakes[2].Nazwa<<endl<<endl;
                cout<<"0. Return"<<endl;
                cin>>menu;
                --menu;
                
                if (menu<3 && menu>=0)
                {
                    cout<<"\n\n\tYour choice: "<<Cupcakes[menu].Name<<"\n\tPrice (per item.): "<<Cupcakes[menu].Price<<endl;
                                        
                }
                ++menu;
                break;
                
                
           
            case 2:
                cout<<"\nChoose the taste of the cake:"<<endl<<endl;
                cout<<"1. "<<Cakes[0].Name<<endl;
                cout<<"2. "<<Cakes[1].Name<<endl;
                cout<<"3. "<<Cakes[2].Name<<endl<<endl;
                cout<<"0. Return"<<endl;
                cin>>menu;
                --menu;
                if (menu<3 && menu>=0)
                {
                    cout<<"\n\n\tYour choice: "<<Cakes[menu].Name<<"\n\tPrice (per item.): "<<Cakes[menu].Price<<endl;
                }
                ++menu;
                break;
            case 3:
                cout<<"\nChoose the taste of the doughnut:"<<endl<<endl;
                cout<<"1. "<<Doughnuts[0].Name<<endl;
                cout<<"2. "<<Doughnuts[1].Name<<endl;
                cout<<"3. "<<Doughnuts[2].Name<<endl<<endl;
                cout<<"0. Return"<<endl;
                cin>>menu;
                --menu;
                if (menu<3 && menu>=0)
                {
                    cout<<"\n\n\tYour choice: "<<Doughnuts[menu].Name<<"\n\tPrice (per item.): "<<Doughnuts[menu].Price<<endl;
                }
                ++menu;
                break;
            default:
                cout<<"Wrong choice!"<<endl;
                break;
        }
        cout<<"Press any key...";
        getch();
    }
    while (menu!=0);        
}
