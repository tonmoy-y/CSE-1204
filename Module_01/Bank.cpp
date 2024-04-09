#include <bits/stdc++.h>
using namespace std;

int getPin();
int main_menu();
int menu1(void);
int OTP();
int search(string m);
int select();
int Admin();
void Boss();
int genAcc_no();
int fin;
string aduser = "admin";
string adpass = "admin";

class Account
{
private:
    int age;
    string name;
    float balance = 0;
    string mobile;
    int pin;
    int account_no;

public:
    void setData(string m, float b, string n, int ag, int acc, int p)
    {
        age = ag;
        balance = b;
        mobile = m;
        name = n;
        account_no = acc;
        pin = p;
    }

    float getBal()
    {
        return balance;
    }

    int mpass(int m, int p)
    {
        if (m == account_no && p == pin)
        {
            return 1;
        }
        else
            return 0;
    }

    int getAcc_no()
    {
        return (account_no);
    }

    void newAcc();
    void closeAcc();
    void deposit();
    void withdraw();
    void check();
    void display();
    void Exit();

};
Account mem[1000];
int total = -1;

int search(int ac)
{
    int i = 0, pos = -1;
    for (; i <= total; i++)
    {
        if (mem[i].getAcc_no() == ac)
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int OTP()
{
    srand(time(0));
    int x = 1000 + rand() % 9000;
    return x;
}

int getPin()
{
    string s;
    char c;
    int i = 0;
    c = getch();

    if (c == 13)
        return 1;
    while (c != 13)
    {
        s[i] = c;
        cout << "*";
        i++;
        c = getch();
    }
    return (stoi(s));
}

int genAcc_no()
{
    srand(time(0));
    int x = 1000 + rand() * 99;
    return x;
}

void Account ::newAcc()
{
    string n;
    char na[100];
    int p;
    string m;
    int ag;
    int pi;
    cin.ignore();
    cout << "Enter your name: ";
    cin.getline(na, 100);
    n = na;

    do
    {
        cout << "Enter your mobile number: ";
        cin >> m;
        if (m.length() != 11)
            cout << "Incorrect mobile number." << endl;
    } while (m.length() != 11);

    do
    {
        cout << "Enter your PIN: ";
        p = getPin();
        cout << endl;
        cout << "Confirm your pin: ";
        pi = getPin();
        cout << endl;
        if (p != pi)
            cout << "PINs must be same." << endl;
    } while (p != pi);

    do
    {
        cout << "Enter your age: ";
        cin >> ag;
        if (ag < 18 or ag > 130)
        {
            cout << "Age must be below 130 and above 18." << endl;
        }
    } while (ag < 18 or ag > 130);
    int temp = Admin();
    int accn;
    if (temp == 1)
    {
        total++;
        accn = genAcc_no();
        cout << "\nYour account no is " << accn << endl;
        mem[total].setData(m, 0, n, ag, accn, p);
    }

    cout << "You have successfully created an account....." << endl;

    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account ::closeAcc()
{

    int acc;
    do
    {
        cout << "Enter your account no: ";
        cin >> acc;
        fin = search(acc);
    } while (fin < 0);
    int p;
    cout << "Enter your PIN: ";
    p = getPin();
    cout << endl;
    int num = mem[fin].mpass(acc, p);
    if (num == 1 and mem[fin].getBal() == 0)
    {
        Admin();
        cout << "Successfully closed your account" << endl;
        mem[fin].setData("000", 0, "00", 0, 0, 0);
    }
    else
        cout << "Your can't close your account " << endl;

    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account ::deposit()
{
    int acc;
    float b;

    cout << "Enter Account Number: ";
    cin >> acc;
    fin = search(acc);
    if (fin == -1)
    {
        cout << "Your account no incorrect..." << endl;
    }
    else
    {
        int money;
        cout << "Enter Amount: ";
        cin >> money;
        int a;
        int x = OTP();
        cout << "Your OTP: " << x << endl;
        cout << "Enter OTP: ";
        cin >> a;
        if (a == x)
        {
            balance += money;
            cout << "Successfully deposited" << endl;
        }
        else
        {
            cout << "Wrong OTP" << endl;
        }
    }
    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account::withdraw()
{
    int acc;
    float b;

    cout << "Enter Account Number: ";
    cin >> acc;
    fin = search(acc);
    if (fin == -1)
    {
        cout << "Your account no incorrect..." << endl;
    }
    cout << "Enter PIN: ";
    int p;
    p = getPin();
    cout << endl;
    int num = mem[fin].mpass(acc, p);
    if (num == 1)
    {
        int ba;
        cout << "Enter withdraw amount: ";
        cin >> ba;
        if (balance >= b)
        {
            int a;
            int x = OTP();
            cout << "Your OTP: " << x << endl;
            cout << "Enter OTP: ";
            cin >> a;
            if (a == x)
            {
                balance = balance - ba;
                cout << "Withdrawal successful" << endl;
            }
        }
        else
        {
            cout << "Insuffiecient balance." << endl;
        }
    }
    else
    {
        cout << "Incorrect account no/pin ..." << endl;
        cout << "Withdrawal not successful" << endl;
    }

    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account::check()
{
    int acc;
    float b;

    cout << "Enter Account Number: ";
    cin >> acc;
    fin = search(acc);
    if (fin == -1)
    {
        cout << "Your account no incorrect..." << endl;
    }
    cout << "Enter PIN: ";
    int p;
    p = getPin();
    cout << endl;
    int num = mem[fin].mpass(acc, p);
    if (num == 1)
        cout << "Balance = " << balance << endl;
    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account :: display() {
    
    int acc;
    float b;

    cout << "Enter Account Number: ";
    cin >> acc;
    fin = search(acc);
    if (fin == -1)
    {
        cout << "Your account no incorrect..." << endl;
    }
    cout << "Enter PIN: ";
    int p;
    p = getPin();
    cout << endl;
    int num = mem[fin].mpass(acc, p);
    if (num == 1)
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Mobile no: "<<mobile;
        cout << "Balance = " << balance << endl;
    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
    select();
}

void Account::Exit()
{
    cout << "Press any key go to main menu....." << endl;
    getch();
    system("cls");
}

int Admin()
{
    string user, pass;

    do
    {
        cout << "Enter Admin user name: ";
        cin >> user;
        cout << "Enter Admin password: ";
        cin >> pass;
        if (user != aduser and pass != adpass)
            cout << "Incorrect user id/password" << endl;
    } while (user != "admin" and pass != "admin");

    return 1;
}

int select()
{
    int op = main_menu();
    switch (op)
    {
    case 1:
        mem[fin].newAcc();
        break;
    case 2:
        mem[fin].closeAcc();
        break;
    case 3:
        mem[fin].deposit();
        break;
    case 4:
        mem[fin].withdraw();
        break;
    case 5:
        mem[fin].check();
        break;
    default:
        exit(0);
        break;
    }
    return 0;
}

int main_menu()
{
    cout << "\t********** Main Menu ********" << endl;
    cout << "\t\t1. Open New Account " << endl;
    cout << "\t\t2. Close Old Account" << endl;
    cout << "\t\t3. Deposit Money" << endl;
    cout << "\t\t4. Withdraw Money" << endl;
    cout << "\t\t5. Check Balance" << endl;
    cout << "\t\t6. Exit" << endl;

    cout << "\t\t\tEnter Your Option (1-6): ";
    int s;
    cin >> s;
    system("cls");
    return s;
}

int menu1()
{
    cout << "******MENU*******" << endl;
    cout << "1. Admin" << endl;
    cout << "2. User" << endl;
    cout << "3. Exit" << endl;
    int c;
    cin >> c;

    return c;
}

void Boss()
{
    cout << "1. Change admin user name " << endl;
    cout << "2. Change admin password " << endl;
    cout << "3. Exit" << endl;
    int op;
    cin >> op;
    string a, b;
    if (op == 1)
    {
        cout << "Old admin user name: " << aduser << endl;
        cout << "Enter new admin user name: ";
        cin >> a;
        aduser = a;
        Boss();
    }
    else if (op == 2)
    {
        cout << "Old admin password name: " << aduser << endl;
        cout << "Enter new admin password: ";
        cin >> b;
        adpass = b;
        Boss();
    }
};

int main()
{
    int num;
    for (;;)
    {
        num = menu1();

        switch (num)
        {
        case 1:
            Boss();
            break;
        case 2:
            select();
            break;
        case 3:
            exit(1);
        default:
            break;
        }
    }
    return 0;
}