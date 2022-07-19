#include<iostream>
using namespace std;
double calculateGpa(double grade, int creditHours)
{
    if(grade >= 90)
    {
        return 4 * creditHours;
    }
    else if (grade >= 85 && grade < 90)
    {
        return 3.6 * creditHours;
    }
    else if (grade >= 80 && grade < 85)
    {
        return 3.3 * creditHours;
    }
    else if (grade >= 75 && grade < 80)
    {
        return 3.0 * creditHours;
    }
    else if (grade >= 70 && grade < 75)
    {
        return 2.6 * creditHours;
    }
    else if (grade >= 65 && grade < 70)
    {
        return 2.4 * creditHours;
    }
    else if (grade >= 60 && grade < 65)
    {
        return 2.2 * creditHours;
    }
    else if (grade >= 50 && grade < 60)
    {
        return 2.0 * creditHours;
    }
    else
    {
        return 0.0;
    }
}
int main()
{
    double grade = 0;
    double temp;
    cout<<"Discrete Structures : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"OOP : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"IS : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"Math 3 : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"Ethics : ";
    cin >> temp;
    grade += calculateGpa(temp,2);
    cout<<"DSP : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"Modern Management : ";
    cin >> temp;
    grade += calculateGpa(temp,1);
    cout<<"Data Structure : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"Project Management : ";
    cin >> temp;
    grade += calculateGpa(temp,2);
    cout<<"SAD : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout<<"FILE : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout << "Statistics : ";
    cin >> temp;
    grade += calculateGpa(temp,3);
    cout << "OR : ";
    cin >> temp;
    grade += calculateGpa(temp,2);
    cout << "Future Science : ";
    cin >> temp;
    grade += calculateGpa(temp,1);
    cout << "Entrepreneurship : ";
    cin >> temp;
    grade += calculateGpa(temp,1);

    cout << "Your Grade is : "<<grade/36.0 << "\nCongratulationas\n";
}
