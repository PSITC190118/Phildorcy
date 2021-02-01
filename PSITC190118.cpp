  #include <iostream>

using namespace std;
#include<iostream>
#include<string>
#include<iomanip>

int main()
{
    cout << "we do two things in the company." << endl;
    cout<<"1.Purchasing an item."<<endl;
    cout<<"2.Making enquiries."<<endl;
    cout<<endl;

    string customer_name;
    cout<<"Please what is your name?"<<endl;
    getline(cin,customer_name);
    cout<<endl;

    string name;
    double buy_item;
    double printer_price=100;
    double phone_price=430;
    double table_price=250;
    double quantity;
    double customer_money;
    double printer,phone,table,item1,item2,item3,change,balance,total_cost,total_amount;

    cout<<"Items we sell in the market"<<endl;
    cout<<"1.Printer=100"<<endl;
    cout<<"2.Phone=430"<<endl;
    cout<<"3.Table=250"<<endl;
    cout<<endl;


    const double vat=0.12;
    cout<<"vat=0.12"<<endl;
    cout<<endl;

    int customer_id;
    cout<<"Please enter your ID in numbers."<<endl;
    cin>>customer_id;
    cout<<endl;


    cout<<"What do you want to buy?"<<endl;
    cout<<"Please enter the number of printers you wish to buy"<<endl;
    cin>>item1;
    cout<<"Please enter the number of phones you wish to buy"<<endl;
    cin>>item2;
    cout<<"Please enter the number of tables you wish to buy"<<endl;
    cin>>item3;
    cout<<endl;


    if(customer_money< printer||phone||table)
    {
        cout<<"Please your money is not enough!"<<endl;

       } else if(customer_money ==printer||phone||table)
                cout<<"Thank you for the transaction"<<endl;


    total_cost:(printer_price*quantity);
    cout<<"total_cost:$"<<total_cost<<endl;
    cout<<endl;


    double total_payment;
    cout<<"How much can you afford?"<<endl;
    total_amount=(total_cost+vat);
    cout<<"total_payment:$"<<total_payment<<endl;
    cout<<endl;

    balance=customer_money-total_payment;
    cout<<"balance:$"<<balance<<endl;
    cout<<endl;

    cout<<"CUSTOMER RECEIPT"<<endl;
    cout<<"Name of customer"<<endl;
    cout<<"Customer unique_id"<<endl;
    cout<<"Items bought"<<endl;
    cout<<"Quantity of items bought"<<endl;
    cout<<"Vat amount"<<endl;
    cout<<"Total_cost"<<endl;
    cout<<"Total_amount paid"<<endl;
    cout<<"Balance"<<endl;
    cout<<endl;

    cout<<"THANK YOU FOR TRANSACTING WITH US"<<endl;







    return 0;
}
