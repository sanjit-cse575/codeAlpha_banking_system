#include<iostream>
using namespace std;

class BankAccount{
    private:
    string name;
    int accountnumber;
    float balance;

    public:
    void createaccount(){
        cout<<"enter account holder name:";
        cin>>name;

        cout<<"enter account number:";

        cin>>accountnumber;

        cout<<"enter initial balance:";
        cin>>balance;

        cout <<"\naccount created successfully!\n";
    }
    
    
        void deposit() {
            float amount;
            cout<<"enter amount to deposit:";
            cin>>amount;

            balance += amount;
            cout<< "amount deposited successfully!\n";
        }
            void withdraw() {
            float amount;
            cout<<"enter amount to withdraw:";
            cin>>amount;

            if(amount <= balance) {
                balance-=amount;
                cout<<"withdrawal successful!\n";
            } else {
                cout<<"insufficient balance!\n";
            }
        }
        void display(){
            cout<<"\n===== ACCOUNT DETAILS=====\n";
            cout<<"name: "<< name << endl;
            cout<<"Account Number: "<<accountnumber << endl;
            cout <<"balance:rs."<<balance<<endl;
        }
    };
    int main(){
        BankAccount acc;
        int choice;

        do {
            cout<<"\n====== BANKING SYSTEM =====";
            cout <<"\n1. create account";
            cout <<"\n2. deposit money";
            cout <<"\n3. withdraw money";
            cout <<"\n4. display account";
            cout <<"\n5. exit";
            cout<<"\nenter choice:";
            cin>>choice;

            switch(choice){
                case 1:
                acc.createaccount();
                break;

                case 2:
                acc.deposit();
                break;
                case 3:
                acc.withdraw();
                break;
                case 4:
                acc.display();
                break;
                case 5:
                cout<<"thank you!\n";
            }
        } while(choice!=5);
        return 0;
    }
