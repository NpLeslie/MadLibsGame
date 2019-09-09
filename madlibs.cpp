//Author: Nathaniel Leslie 
#include <iostream>
#include <string>
using std :: cin;
using std :: cout;
using std :: endl;

int main()
{
std :: string adjective = "";
std :: string verb = "";
int number = 0;
std :: string emotion = "";
std :: string noun = "";

cout << "Enter an adjective:";
cin >> adjective;
cout << "Enter a verb:";
cin >> verb;
cout << "Enter a number:";
cin >> number;
cout << "Enter an emotion:";
cin >> emotion;
cout << "Enter a noun:";
cin >> noun;

cout << "Once upon a time a(n) " << adjective << " dog was walking to a store to " << verb << ". " << endl;
cout << "Unfortunately, " << number << " robbers robbed the store. " << endl;
cout << "The dog was " << emotion << " as they robbed all the " << noun << "." << endl;


return 0;
}
