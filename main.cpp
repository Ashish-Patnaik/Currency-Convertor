#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Conversion rates
    const double usdToEur = 0.85;
    const double usdToInr = 83.57;
    const double usdToJpy = 110.0;

    double usd;
    int choice;
    double convertedAmount;

    cout<<"Enter the amount in USD: ";
    cin>>usd;

    cout << "Select the currency to convert to:" << endl;
    cout << "1. Euro (EUR)" << endl;
    cout << "2. Indian Rupee(INR)" << endl;
    cout << "3. Japanese Yen (JPY)" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            convertedAmount = usd * usdToEur;
            cout << usd << " USD is equal to " << convertedAmount << " EUR" << endl;
            break;
        case 2:
            convertedAmount = usd * usdToInr;
            std::cout << std::fixed << std::setprecision(2);
            cout << usd << " USD is equal to " << convertedAmount << " INR" << endl;
            break;
        case 3:
            convertedAmount = usd * usdToJpy;
            cout << usd << " USD is equal to " << convertedAmount << " JPY" << endl;
            break;
        default:
            cout << "Invalid choice. Please run the program again and select a valid option." << endl;
    }

     return 0;
    
}

  
