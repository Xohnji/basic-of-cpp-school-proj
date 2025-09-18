#include <iostream>

int main()
{
    double balance, rate, interest;
    int Initial_Year, Final_Year, Year;

    std::cout << "Enter initial balance: ";
    std::cin >> balance;
    std::cout << "Enter interest: ";
    std::cin >> rate;
    std::cout << "Enter Initial year: ";
    std::cin >> Initial_Year;
    std::cout << "Enter Final year: ";
    std::cin >> Final_Year;

    std::cout << "\nYear                  Interest                Balance\n";

    rate = rate / 100.00;
    Year = Initial_Year;
    while (Year <= Final_Year)
    {
        interest = balance * rate;
        balance += interest;
        std::cout << Year << "                  ₱" << interest << "                  ₱" << balance << std::endl;
        Year++;
    }
    return 0;
}
