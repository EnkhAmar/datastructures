#include <iostream>
#include <iomanip>
#include <cstring>

#define DIRECTOR_BASE_SALARY 2000

using namespace std;

class employee
{
    private:
        int id;
        char name[20];
        char position[10];
        float worked_hours;
        float hourly_wage;
    public:
        void initialize();
        void getdata();
        void showdata();
        float calculate();
        float calculate_dir(float);
        bool add_hours(float);
};

void employee::initialize()
{
    id = 0;
    strcpy(name, "");
    strcpy(position, "");
    worked_hours = 0;
    hourly_wage = 0;
}

void employee::getdata()
{
    cout << "\nEnter the Employee ID: ";
    cin >> id;

    cout << "Enter the Employee Name: ";
    cin >> name;

    cout << "Enter the Position: ";
    cin >> position;

    cout << "Enter the Worked Hours: ";
    cin >> worked_hours;

    cout << "Enter the Hourly Wage: ";
    cin >> hourly_wage;
}

float employee::calculate_dir(float dir_per_hour)
{
    float total = dir_per_hour*worked_hours + DIRECTOR_BASE_SALARY;
    return total;
}

float employee::calculate()
{
    if (strcmp(position, "Director") == 0 || strcmp(position, "director") == 0)
    {
        return calculate_dir(hourly_wage);
    }
    return worked_hours*hourly_wage;
}

bool employee::add_hours(float adding_hours)
{
    if (adding_hours >= 0 && adding_hours <= 24)
    {
        worked_hours += adding_hours;
        return 1;
    }
    return 0;
}

void employee::showdata()
{
    int grosspay = calculate();
    cout << setw(15) << id;
    cout << setw(20) << name;
    cout << setw(20) << position;
    cout << setw(15) << worked_hours;
    cout << setw(18) << hourly_wage;
    cout << setw(10) << grosspay;
    cout << endl;
}

void heading()
{
    cout << endl;
    for (int k = 0; k < 99; k++)
        cout << "-";
    cout << endl;
    cout << setw(15) << "Employee ID";
    cout << setw(20)  << "Employee Name";
    cout << setw(20) << "Position";
    cout << setw(15) << "Hours";
    cout << setw(18) << "Hourly Wage";
    cout << setw(10) << "Gross";
    cout << endl;

    for (int k = 0; k < 99; k++)
        cout << "-";
    cout << endl;
}

int main()
{
    int num_of_employees;
    cout << "Enter number of employees: ";
    cin >> num_of_employees;
    employee emp[num_of_employees];

    for (int k = 0; k<num_of_employees; k++)
        emp[k].initialize();


    int choose, row_num;
    float hours_to_add;
    while (1)
    {
        cout << "\n1: Show all, 2: Initialize, 3: Insert Data, 4: Add worked hours, 5: Exit\n";
        cin >> choose;

        switch (choose)
        {
        case 1:
            heading();
            for (int k = 0; k<num_of_employees; k++)
                emp[k].showdata();
            break;
        case 2:
            cout << "Enter the row number: ";
            cin >> row_num;
            emp[row_num-1].initialize();
            cout << "Succeed!\n";
            break;
        case 3:
            cout << "Enter the row number: ";
            cin >> row_num;
            emp[row_num-1].getdata();
            break;
        case 4:
            cout << "Enter the row number: ";
            cin >> row_num;
            cout << "Enter the amount of hours: ";
            cin >> hours_to_add;
            if (emp[row_num-1].add_hours(hours_to_add))
                cout << "Succeed!\n";
            else cout << "INSERT VALUE BETWEEN 0 AND 24";
            break;
        default:
            exit(0);
        }
    }

    return 0;
}
