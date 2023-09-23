#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int divi(int a,int b)
{
    while(b==0)
    {
        cout<<"Cannot divide by zero"<<endl;
        cout<<"Enter new divisor";
        cin>>b;
    }
    return a/b;
}
int main()
{
    cout<<"---CALCULATOR---\n";
    int ch;
    do
    {
        cout<<"1. For addition"<<endl;
        cout<<"2. For subtration"<<endl;
        cout<<"3. For multiplication"<<endl;
        cout<<"4. For division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        int num1,num2,res;

        switch(ch)
        {
            case 1:
                    cout<<"Enter your first number : ";
                    cin>>num1;
                    cout<<"Enter your second number : ";
                    cin>>num2;
                    res = add(num1,num2);
                    cout<<num1<<" + "<<num2<<" = "<<res<<endl<<endl;
                    break;
            case 2:
                    cout<<"Enter your first number : ";
                    cin>>num1;
                    cout<<"Enter your second number : ";
                    cin>>num2;
                    res = sub(num1,num2);
                    cout<<num1<<" - "<<num2<<" = "<<res<<endl<<endl;
                    break;
            case 3:
                    cout<<"Enter your first number : ";
                    cin>>num1;
                    cout<<"Enter your second number : ";
                    cin>>num2;
                    res = mul(num1,num2);
                    cout<<num1<<" * "<<num2<<" = "<<res<<endl<<endl;
                    break;
            case 4:
                    cout<<"Enter your first number : ";
                    cin>>num1;
                    cout<<"Enter your second number : ";
                    cin>>num2;
                    res = divi(num1,num2);
                    cout<<res<<endl<<endl;
                    break;
            case 5:
                    cout<<"Thankyou for using calculator";
                    break;
            default :
                    cout<<"Wrong choice please try again"<<endl;
        }
    } while (ch!=5);
}
