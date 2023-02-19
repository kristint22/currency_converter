// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// structure for currency

struct {
    string currency;
    double conversion;
}euro, egyptianPound, indianRupee, japaneseYen, southKoreaWon, canadianDollar;

int main()
{
    //cout << "Hello World!\n";
    // calls the order from the user
    string money;
    string exchange;
    bool done = false;

    while (done != true) {
        // get the money amount to convert
        cout << "How much would you like to convert? (in USD)\n";
        getline(cin >> ws, money);

        // get the currency to change into
        cout << "Would you like to convert to:\n ";
        cout << "- Euro\n ";
        cout << "- Egyptian Pound\n ";
        cout << "- Indian Rupee\n ";
        cout << "- Japanese Yen\n ";
        cout << "- South Korea won\n ";
        cout << "- Canadian Dollar\n ";

        getline(cin >> ws, exchange);


        // money converted to a double
        double moneyAmount = stod(money);

        // euro assigning
        euro.currency = "Euro";
        euro.conversion = .93499674;

        // egyptian pound assigning
        egyptianPound.currency = "Egyptian Pound";
        egyptianPound.conversion = 30.570007;

        // indian rupee assigning
        indianRupee.currency = "Indian Rupee";
        indianRupee.conversion = 82.754779;

        // japanese yen assigning
        japaneseYen.currency = "Japanese Yen";
        japaneseYen.conversion = 134.1488;

        // south korean won assigning
        southKoreaWon.currency = "South Korean Won";
        southKoreaWon.conversion = 1296.5589;

        // canadian dollar
        canadianDollar.currency = "Canadian Dollar";
        canadianDollar.conversion = 1.347041;

        // exchanged amount
        int finalAmount;
        string check;
        string ready;
        cout << "Are you ready? (y/n?) \n";
        cin >> ready;
        if (ready == "y") {
            //conversion conditional
            if (exchange == euro.currency) {
                finalAmount = round(moneyAmount * euro.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << euro.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                 else {
                    cout << "You will get " << finalAmount << " " << euro.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
            }
            else if (exchange == egyptianPound.currency) {
                finalAmount = round(moneyAmount * egyptianPound.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << egyptianPound.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                else {
                    cout << "You will get " << finalAmount << " " << egyptianPound.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }

            }
            else if (exchange == indianRupee.currency) {
                finalAmount = round(moneyAmount * indianRupee.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << indianRupee.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                else {
                    cout << "You will get " << finalAmount << " " << indianRupee.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }

            }
            else if (exchange == japaneseYen.currency) {
                finalAmount = round(moneyAmount * japaneseYen.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << japaneseYen.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                else {
                    cout << "You will get " << finalAmount << " " << japaneseYen.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }

            }
            else if (exchange == southKoreaWon.currency) {
                finalAmount = round(moneyAmount * southKoreaWon.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << southKoreaWon.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                else {
                    cout << "You will get " << finalAmount << " " << southKoreaWon.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }

            }
            else if (exchange == canadianDollar.currency) {
                finalAmount = round(moneyAmount * canadianDollar.conversion);
                if (finalAmount > 1) {
                    cout << "You will get " << finalAmount << " " << canadianDollar.currency << "s" << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }
                else {
                    cout << "You will get " << finalAmount << " " << canadianDollar.currency << "!!!\n";
                    cout << "Are you done? (y/n?)";
                    cin >> check;
                    if (check == "y") {
                        done = true;
                    }
                    else {
                        done = false;
                    }
                }

            }
            // if they don't choose one of the choices 
            else {
                cout << "Sorry I don't know how to convert that\n";
                cout << "Are you done? (y/n?)";
                cin >> check;
                if (check == "y") {
                    done = true;
                }
                else {
                    done = false;
                }
            }
        }
    }
    cout << "Bye,Bye! \n";
    cout << "Come again!!!";
    return 0;


    
    
}












