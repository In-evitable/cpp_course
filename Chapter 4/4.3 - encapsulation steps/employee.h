// employee class declaration
// file employee.h

class Employee
{
private:
    struct DDate
    {
        int dday;
        int mmonth;
        int yyear;
    };
    char FirstName[35];
    char LastName[35];
    DDate BirthDate;
    int salary;

public:
    Employee(void);
    ~Employee(void);
    void DisplayEmployee(void);
    void SetEmployee(void);
};
