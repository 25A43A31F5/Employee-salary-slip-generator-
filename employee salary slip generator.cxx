#include <stdio.h>

// ANSI Color Codes
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

int main() {
    int empId;
    char empName[50];
    char department[50];
    char designation[50];
    char month[20];

    float basicSalary;
    float hra, da, pf;
    float professionalTax = 200;
    float totalEarnings, totalDeductions, netSalary;

    // App Header
    printf(CYAN);
    printf("\n==============================================");
    printf("\n     EMPLOYEE SALARY SLIP GENERATOR APP");
    printf("\n==============================================\n");
    printf(RESET);

    // Input Section
    printf(YELLOW "Enter Employee ID        : " RESET);
    scanf("%d", &empId);

    printf(YELLOW "Enter Employee Name      : " RESET);
    scanf(" %[^\n]", empName);

    printf(YELLOW "Enter Department         : " RESET);
    scanf(" %[^\n]", department);

    printf(YELLOW "Enter Designation        : " RESET);
    scanf(" %[^\n]", designation);

    printf(YELLOW "Enter Salary Month       : " RESET);
    scanf(" %[^\n]", month);

    printf(YELLOW "Enter Basic Salary (₹)   : " RESET);
    scanf("%f", &basicSalary);

    // Salary Calculations
    hra = basicSalary * 0.20;
    da  = basicSalary * 0.10;
    pf  = basicSalary * 0.12;

    totalEarnings = basicSalary + hra + da;
    totalDeductions = pf + professionalTax;
    netSalary = totalEarnings - totalDeductions;

    // Salary Slip Output
    printf(GREEN);
    printf("\n==============================================");
    printf("\n             SALARY SLIP");
    printf("\n==============================================\n");
    printf(RESET);

    printf(BLUE "Employee ID     : " WHITE "%d\n", empId);
    printf(BLUE "Employee Name   : " WHITE "%s\n", empName);
    printf(BLUE "Department      : " WHITE "%s\n", department);
    printf(BLUE "Designation     : " WHITE "%s\n", designation);
    printf(BLUE "Salary Month    : " WHITE "%s\n", month);

    printf(CYAN "\n-------------- EARNINGS ----------------\n" RESET);
    printf(GREEN "Basic Salary    : ₹ %.2f\n", basicSalary);
    printf(GREEN "HRA (20%%)       : ₹ %.2f\n", hra);
    printf(GREEN "DA (10%%)        : ₹ %.2f\n", da);
    printf(GREEN "Total Earnings  : ₹ %.2f\n", totalEarnings);

    printf(RED "\n------------- DEDUCTIONS ---------------\n" RESET);
    printf(RED "PF (12%%)        : ₹ %.2f\n", pf);
    printf(RED "Professional Tax: ₹ %.2f\n", professionalTax);
    printf(RED "Total Deductions: ₹ %.2f\n", totalDeductions);

    printf(GREEN);
    printf("\n==============================================");
    printf("\n NET SALARY : ₹ %.2f", netSalary);
    printf("\n==============================================\n");
    printf(RESET);

    printf(CYAN "\nThank you for using Salary Slip Generator!\n" RESET);

    return 0;
}