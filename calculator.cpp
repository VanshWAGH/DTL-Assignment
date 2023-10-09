#include<iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int subt(int a, int b){
    return a-b;
}

int multi(int a, int b){
    return a*b;
}



int main(){

    int choice, a, b;

    cout<<"1 -> Addition"<<endl;
    cout<<"2 -> subtaction"<<endl;
    cout<<"3 -> Multiplication"<<endl;
    cout<<"4 -> Division"<<endl;
    cout<<"0 -> Exit"<<endl;

    cout<<"What's you choice :";

    cin>>choice;

    
    while(choice){

    
        switch(choice){

            case 1:
                cout<<"Enter 2 Numbers : ";
                int a, b;
                cin>>a>>b;

                cout<<add(a, b)<<endl;
                break;

            case 2:
                cout<<"Enter 2 Numbers : ";
               
                cin>>a>>b;

                cout<<subt(a, b)<<endl;
                break;

            case 3:
                cout<<"Enter 2 Numbers : ";
               
                cin>>a>>b;

                cout<<multi(a, b)<<endl;
                break;

            case 4:
                cout<<"Enter 2 Numbers : ";
               
                cin>>a>>b;

                if(b == 0){
                    cout<<"Denominator can't be negative..."<<endl;
                    continue;
                    break;
                }

                cout<<(float) a / b<<endl;

            case 0:
                break;
        }
        cout<<"What's you choice :";

        cin>>choice;
    }


    return 0;

}