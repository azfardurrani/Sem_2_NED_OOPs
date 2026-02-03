#include <iostream>
#include <string>
#include <cctype>
#include <ctime>   // Necessary for time()

using namespace std;

string process(string text, int shift) {
    for (char &c : text) c += shift;
    return text;
}

int main() {
    // Q1) Character Type Classifier
    char ch;
    cout << "\n--- Q1: Character Type ---\n";
    cout << "Enter any character: ";
    cin >> ch;
    if (ch >= 65 && ch <= 90) cout << "Capital Letter\n";
    else if (ch >= 97 && ch <= 122) cout << "Small Case Letter\n";
    else if (ch >= 48 && ch <= 57) cout << "Digit\n";
    else cout << "Special Symbol\n";

    // Q2) Telephone Bill
    int calls;
    double bill = 200.0;
    cout << "\n--- Q2: Telephone Bill ---\n";
    cout << "Enter number of calls: ";
    cin >> calls;
    if (calls > 200) bill += (50 * 0.60) + (50 * 0.50) + ((calls - 200) * 0.40);
    else if (calls > 150) bill += (50 * 0.60) + ((calls - 150) * 0.50);
    else if (calls > 100) bill += (calls - 100) * 0.60;
    cout << "Total Bill: Rs. " << bill << endl;

    // Q3) Password Strength
    string pwd;
    cout << "\n--- Q3: Password Strength ---\n";
    cout << "Enter password: ";
    cin >> pwd;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    if (pwd.length() >= 8) {
        for (char c : pwd) {
            if (isupper(c)) hasUpper = true;
            else if (islower(c)) hasLower = true;
            else if (isdigit(c)) hasDigit = true;
            else hasSpecial = true;
        }
    }
    if (hasUpper && hasLower && hasDigit && hasSpecial) cout << "Strong Password\n";
    else cout << "Weak Password\n";

    // Q4) Caesar Cipher
    string text;
    int key;
    cout << "\n--- Q4: Encryption ---\n";
    cin.ignore(); // CLEAR BUFFER
    cout << "Enter text to encrypt: ";
    getline(cin, text);
    cout << "Enter shift key: ";
    cin >> key;
    string encrypted = process(text, key);
    cout << "Encrypted: " << encrypted << "\nDecrypted: " << process(encrypted, -key) << endl;

    // Q5) Multiplication Table
    int num;
    cout << "\n--- Q5: Multiplication Table ---\n";
    cout << "Enter number: "; cin >> num;
    for(int i = 0; i <= 10; i++) cout << num << " x " << i << " = " << i*num << endl;

    // Q6) Menu-driven Calculator
    char op;
    double x, y;
    cout << "\n--- Q6: Calculator ---\n";
    cout << "Enter expression (e.g., 10 + 5): ";
    cin >> x >> op >> y;
    cout << "Result: ";
    if (op == '+') cout << x + y;
    else if (op == '-') cout << x - y;
    else if (op == '*') cout << x * y;
    else if (op == '/') (y != 0) ? cout << x / y : cout << "Div by zero error";
    cout << endl;

    // Q7) Fibonacci
    int terms, t1 = 0, t2 = 1, next;
    cout << "\n--- Q7: Fibonacci ---\n";
    cout << "Enter number of terms: "; cin >> terms;
    for (int i = 1; i <= terms; ++i) {
        cout << t1 << " ";
        next = t1 + t2; t1 = t2; t2 = next;
    }
    cout << endl;

    // Q8) Guessing Game
    srand(time(0));
    int secret = rand() % 100 + 1, guess;
    cout << "\n--- Q8: Guessing Game ---\n";
    do {
        cout << "Guess (1-100): "; cin >> guess;
        if (guess > secret) cout << "Lower!\n";
        else if (guess < secret) cout << "Higher!\n";
    } while (guess != secret);
    cout << "Correct!\n";

    // Q9) Rock Paper Scissors
    cout << "\n--- Q9: Rock Paper Scissors ---\n";
    int userChoice;
    int compChoice = rand() % 3;
    cout << "0: Rock, 1: Paper, 2: Scissors. Choice: ";
    cin >> userChoice;
    if (userChoice == compChoice) cout << "Draw!";
    else if ((userChoice == 0 && compChoice == 2) || (userChoice == 1 && compChoice == 0) || (userChoice == 2 && compChoice == 1))
        cout << "You win!";
    else cout << "Computer wins!";
    cout << endl;

    // Q10) Day of Week
    int dayNum;
    cout << "\n--- Q10: Day of Week ---\n";
    cout << "Enter day (1-7): "; cin >> dayNum;
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if (dayNum >= 1 && dayNum <= 7) cout << days[dayNum-1] << endl;
    else cout << "Invalid day\n";

    return 0;
}