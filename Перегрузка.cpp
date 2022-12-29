#include <iostream>
using namespace std;
const double default_procent= 25.0;
class Account{
    public:
    Account();
    Account(string surname,int summ);
    Account(string surname,int summ,int schet,double procent);
    void new_surname(){
        string surnamein;
        cout<<"Write surname: ";
        cin>>surnamein;
        cout<<"New surname for schet: "<<schet<<" is "<<surnamein<<endl;
        this->surname=surnamein;
    }
    void new_surname(string surname){
        cout<<"New surname for schet: "<<schet<<" is "<<surname<<endl;
        this->surname=surname;
    }
    void out_money(){
        cout<<"How much money to out: ";
        int outMoney;
        cin>>outMoney;
        summ-=outMoney;
        cout<<"Now you balanse is: "<<summ<<endl;
    }
    void in_money(){
        cout<<"How much money to in: ";
        int inMoney;
        cin>>inMoney;
        summ+=inMoney;
        cout<<"Now you balanse is: "<<summ<<endl;
    }
    void convert_to_dollars(){
        cout<<"Your balanse in dollar is: "<<summ/70<<"$\n";
    }
    void convert_to_euro(){
        cout<<"Your balanse in euro is: "<<summ/72<<"€\n";
    }
    void convert_to_dollars(int course){
        cout<<"Your balanse in dollar is: "<<summ/course<<"$\n";
    }
    void convert_to_euro(int course){
        cout<<"Your balanse in euro is: "<<summ/course<<"€\n";
    }
    void procent_summ(){
        summ+=(procent/100.0*summ);
        cout<<"Now you balanse is: "<<summ<<endl;
    }
    
    
    private:
    string surname;
    float summ;
    int schet;
    double procent;
};
Account::Account(){
    surname = "No suname";
    summ=0;
    schet = rand()%10000;
    procent = default_procent;
}
Account:: Account(string surname,int summ){
    this->surname = surname;
    this->summ = summ;
    schet = rand()%10000;
    procent = default_procent;
}
Account:: Account(string surname,int summ,int schet,double procent){
    this->surname = surname;
    this->summ = summ;
    this->schet = schet;
    this->procent = procent;
}

int main(){
    Account a1;
    a1.new_surname();
    a1.in_money();
    a1.convert_to_dollars();
    a1.procent_summ();
    a1.convert_to_euro(78);
    a1.out_money();
    
}