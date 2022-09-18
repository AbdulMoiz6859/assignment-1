//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    int const ONE = 1,HUNDRED = 100,NUMBER_OF_MONTHS = 12;
//    int N;
//    double Rate,L,Payment,amount_paid_back,interest_paid;
//    cout << "Enter interest rate of loan:% ";
//    cin >> Rate;
//    cout << "Enter amount of loan: ";
//    cin >> L;
//    cout << "Enter amount of payment: ";
//    cin >> N;
//    Rate /= NUMBER_OF_MONTHS;
//    Rate /= HUNDRED;
//    Payment = ((Rate)*pow(ONE + (Rate), N) / (pow(ONE + (Rate), N) - ONE)) * L;
//    Rate *= HUNDRED;
//    amount_paid_back = N * Payment;
//    interest_paid = (N * Payment) - L;    
//    cout << setprecision(2) << fixed << right << endl;
//    cout << "Loan Amount:           $";
//    cout << setw(10) << L << endl;
//    cout << "Monthly Interest Rate: ";
//    cout << setw(10) << Rate << '%' << endl;
//    cout << "Number of Payments:     ";
//    cout << setw(10) << N << endl;
//    cout << "Monthly Payment:       $";
//    cout << setw(10) << Payment << endl;
//    cout << "Amount Paid Back:      $";
//    cout << setw(10) << amount_paid_back << endl;
//    cout << "Interest Paid:         $";
//    cout << setw(10) << interest_paid;
//    return 0;
//}