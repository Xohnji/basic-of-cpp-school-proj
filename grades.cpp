#include <iostream>

using namespace std;

int main()
{
    float Equivalent_grade, Percentage_grade;
    string Descriptive_rating;

    cout << "Enter Grade = ";
    cin >> Percentage_grade;

    if (Percentage_grade >= 94 && Percentage_grade <= 100){
        Equivalent_grade = 1.00;
        Descriptive_rating = "Excellent";}
    else if (Percentage_grade >= 88.5 && Percentage_grade <= 93.99){
        Equivalent_grade = 1.25;
        Descriptive_rating = "Superior";}
    else if (Percentage_grade >= 83 && Percentage_grade <= 88.49){
        Equivalent_grade = 1.50;
        Descriptive_rating = "Meritorious";}
    else if (Percentage_grade >= 77.5 && Percentage_grade <= 82.99){
        Equivalent_grade = 1.75;
        Descriptive_rating = "Very Good";}
    else if (Percentage_grade >= 72 && Percentage_grade <= 77.49){
        Equivalent_grade = 2.00;
        Descriptive_rating = "Good";}
    else if (Percentage_grade >= 65.5 && Percentage_grade <= 71.99){
        Equivalent_grade = 2.25;
        Descriptive_rating = "Very Satisfactory";}
    else if (Percentage_grade >= 61 && Percentage_grade <= 65.49){
        Equivalent_grade = 2.50;
        Descriptive_rating = "Satisfactory";}
    else if (Percentage_grade >= 55.5 && Percentage_grade <= 60.99){
        Equivalent_grade = 2.75;
        Descriptive_rating = "Fair";}
    else if (Percentage_grade >= 50 && Percentage_grade <= 55.49){
        Equivalent_grade = 3.00;
        Descriptive_rating = "Passing";}
    else if (Percentage_grade >= 0 && Percentage_grade <= 50 &&
        Percentage_grade != 4.00 &&
        Percentage_grade != 6.00 &&
        Percentage_grade != 7.00 &&
        Percentage_grade != 8.00)
        {Equivalent_grade = 5.00;
        Descriptive_rating = "Failed";}
    else if (Percentage_grade == 4.00){
        Equivalent_grade = 4.00;
        Descriptive_rating = "Incomplete";}
    else if (Percentage_grade == 6.00){
        Equivalent_grade = 6.00;
        Descriptive_rating = "Officially dropped";}
    else if (Percentage_grade == 7.00){
        Equivalent_grade = 7.00;
        Descriptive_rating = "Unofficially dropped";}
    else if (Percentage_grade == 8.00){
        Equivalent_grade = 8.00;
        Descriptive_rating = "No credit";}
    else{
        cout << "Invalid Grade Input" << endl;
        return 0;}

    cout << '\n' << Percentage_grade << " equivalent Grade is " << Equivalent_grade;
    cout << "\nDescriptive Rating = " << Descriptive_rating << endl;

    return 0;
}
