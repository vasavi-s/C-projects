#include<iostream>
#include<vector>

using namespace std;

class BankAccount{
    private:
        string name;
        int accountNum;
        double balance;
    public:
        static long accountNumber;
        // BankAccount(string n, int ac, double bal){
        //     name=n;
        //     accountNum=ac;
        //     balance=bal;
        // }
          BankAccount(string n, double bal){
            accountNumber++;
            name=n;
            accountNum=accountNumber;
            balance=bal;
        }
        
        string getName(){
            return name;
        }
        int getAccount(){
            return accountNumber=accountNum;
        }
        double Getbalance(){
            return balance;
        }
        void deposit(double amount){
            balance += amount;
        }
        void withdraw(double amount){
            if(balance >=amount){
            balance -= amount;
            cout<<"Withdraw successfully!..."<<endl;
            cout<<"Your balance amount is: "<<balance<<endl;
            }
            else {cout<<"Insufficient Balance....."<<endl;}
        }
};
long BankAccount::accountNumber=0;
class BankManagement{
    private:
        vector<BankAccount> accounts;
    public:
        void AddAccount(string name, double balance){
    BankAccount newAccount(name, balance);  // Create an instance of BankAccount
    accounts.push_back(newAccount);
    }

        void showAllAccounts(){
            cout<<"All Account Holders "<<endl;
            for(int i=0;i<accounts.size();i++){
                cout<<"Account holder name: "<<accounts[i].getName()<<endl;
                cout<<"Account Number: "<<accounts[i].getAccount()<<endl;
                cout<<"Account Balance: "<<accounts[i].Getbalance()<<endl;
                cout<<"------------------------"<<endl;
            }   
        }
        void SearchAccount(int account){
            cout<<"Account Holder "<<endl;
            for(int i=0;i<accounts.size();i++){
                if(accounts[i].getAccount() ==  account){
                cout<<"Account holder name: "<<accounts[i].getName()<<endl;
                cout<<"Account Number: "<<accounts[i].getAccount()<<endl;
                cout<<"Account Balance: "<<accounts[i].Getbalance()<<endl;
                cout<<"------------------------"<<endl;
            }
            }
        }
        
        BankAccount* findAccount(int accountNum){
            for(int i=0;i<accounts.size();i++){
                if(accounts[i].getAccount() ==accountNum){
                    return &accounts[i];
                }
            }
        } 
        
         void closeAccount(int account){
            cout<<"Account Holder "<<endl;
            for(int i=0;i<accounts.size();i++){
                if(accounts[i].getAccount() ==  account){
                cout<<"Account holder name: "<<accounts[i].getName()<<endl;
                cout<<"Account Number: "<<accounts[i].getAccount()<<endl;
                cout<<"Account Balance: "<<accounts[i].Getbalance()<<endl;
                cout<<"Account closed successfully!..."<<endl;
                cout<<"------------------------"<<endl;
                accounts.erase(accounts.begin() + i);
            }
            }
        }
        
};

int main(){
    BankManagement bank;
    int choice;
    bool flag=true;
    cout<<"\t-------------------------------------------"<<endl;
    cout<<"\t|         Bank Management System          |"<<endl;
    cout<<"\t-------------------------------------------"<<endl;
    while(flag){
        // system("cls");
        cout<<"Main Menu"<<endl;
        cout<<"1. Create New Account"<<endl;
        cout<<"2. Show All Account"<<endl;
        cout<<"3. Search Account"<<endl;
        cout<<"4. Deposit Money"<<endl;
        cout<<"5. Withdraw Money"<<endl;
        cout<<"6. Close Account"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"Enter Your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                string name;
                // int accountNum;
                double balance;
                cout<<"Enter name: ";
                cin>>name;
                // cout<<"Enter account number: ";
                // cin>>accountNum;
                cout<<"Enter initial balance: ";
                cin>>balance;
                // bank.AddAccount(name,accountNum,balance);
                bank.AddAccount(name,balance);

                cout<<"Account created successfully!...."<<endl;
                cout<<"---------------------------"<<endl;
                break;
                }
            case 2:{
                bank.showAllAccounts();
                break;
            }
            case 3:{
                int account;
                cout<<"Enter account number";
                cin>>account;
                bank.SearchAccount(account);
                break;
            }
            case 4:{
                int accountNum;
                double amount;
                cout<<"Enter Account number to Deposit money: ";
                cin>>accountNum;
                BankAccount *account = bank.findAccount(accountNum);
                if(account != NULL){
                    cout<<"Enter amount to deposit: ";
                    cin>>amount;
                    account->deposit(amount);
                    cout<<amount<<"deposited successfully...."<<endl;
                }
                else{
                    cout<<"Account Not Found!"<<endl;
                }
                break;
            }
            case 5:{
                int accountNum;
                double amount;
                cout<<"Enter Account number to Withdraw money: ";
                cin>>accountNum;
                BankAccount *account = bank.findAccount(accountNum);
                if(account != NULL){
                    cout<<"Enter amount to Withdraw: ";
                    cin>>amount;
                    account->withdraw(amount);
                }
                else{
                    cout<<"Account Not Found!"<<endl;
                }
                break;
            }
            case 6:{
                int account;
                cout<<"Enter account number";
                cin>>account;
                bank.closeAccount(account);
                break;
            }
                case 7: flag=false;
        }
    }
}
