#include<iostream>
#include<string>

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

string decimal_to_binay(int decimal){
    if (decimal == 0) {
        return "0";
    }

    string binary = "";

    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal /= 2;
    }

    return binary;
}



int binary_to_decimal(int a){
    int ans = 0;

    int multi = 1;

    while(a){
        int rem = a % 10;

        ans += rem * multi;

        a /= 10;
        multi *= 2;
    }

    return ans;
}



int main(){

    int choice, a, b;

    cout<<"1 -> Addition"<<endl;
    cout<<"2 -> subtaction"<<endl;
    cout<<"3 -> Multiplication"<<endl;
    cout<<"4 -> Division"<<endl;
    cout<<"5 -> Convert to Binary"<<endl;
    cout<<"6 -> Convert binary to decimal"<<endl;
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

            case 5:
                cout<<"Enter a Number : ";
                cin>>a;

                cout<<decimal_to_binay(a)<<endl;
                break;

            case 6:
                cout<<"Enter a Binary Number : ";
                cin>>a;

                cout<<binary_to_decimal(a)<<endl;
                break;

            case 0:
                break;
        }
        cout<<"What's you choice :";

        cin>>choice;
    }


    return 0;

}