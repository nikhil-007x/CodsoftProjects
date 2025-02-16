#include <iostream>
#include <cstdlib>
using namespace std;

char user_input;
float num1,num2;

char input_operator(){
    char user_input;
    cout<<"     Enter the Operator ( + - * / ) : ";
    cin>>user_input;
    return user_input;

}

void input_numbers(){
    cout<<"        Enter Number 1 : ";
    cin>>num1;
    cout<<"        Enter Number 2 : ";
    cin>>num2;
}

float add(float a, float b){
    return a+b;
}
float sub(float a, float b){
    return a-b;
}
float mult(float a, float b){
    return a*b;
}
float divd(float a, float b){
    return a/b;
}


void calc(float num1,float num2){

    switch(user_input){
        case '+':{
            float solution=add(num1,num2);
            cout<<"#########################    "<<num1<<user_input<<num2<<" = "<<solution<<"     ############################"<<endl;
            break;
        }
        case '-':{
            float solution=sub(num1,num2);
            cout<<"#########################   "<<num1<<user_input<<num2<<" = "<<solution<<"     ############################"<<endl;
            break;
        }
        case '*':{
            float solution=mult(num1,num2);
            cout<<"#########################    "<<num1<<user_input<<num2<<" = "<<solution<<"    ############################"<<endl;
            break;
        }
        case '/':{
            float solution=divd(num1,num2);
            cout<<"#########################    "<<num1<<user_input<<num2<<" = "<<solution<<"    ############################"<<endl;
            break;
        }

        default:
            cout<<"              INVALID INPUT           "<<endl;

    }
}

int main(){

    user_input = input_operator();
    input_numbers();
    calc(num1,num2);
    return 0;

}


