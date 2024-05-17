//Develop a calculator program
#include<iostream>
using namespace std;
int main(){
    double num_a, num_b;
    char operation;
    cout<<"Enter the operator (+ - * /) :";
    cin>> operation;
    cout<<"Enter the numbers one by one: ";
    cin>>num_a>> num_b;
    switch(operation){
        case '+':
        
        cout<<num_a<<operation<<num_b<<"="<< num_a+num_b<<endl;
        break;
        case '-':
        
        cout<<num_a<<operation<<num_b<<"="<< num_a-num_b<<endl;
        break;
        case '*':
        
        cout<<num_a<<operation<<num_b<<"=" << num_a*num_b<<endl;
        break;
        case '/':
        if(num_a == 0.0){
            cout<<"Divide by the zero situation"<<endl;
        }
        else{
            cout<<num_a<<operation<<num_b<<"="<< num_a/num_b<<endl;
        }
        break;
        default:
        cout<<"Enter wrong choice"<<endl;
        
           }
}