// Vanessa Roque
// CPSC 120-19
// 2021-11-09
// vroque19@csu.fullerton.edu
// @vroque19
//
// Lab 10-01
//
// This is an address book
//
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "person.h"

using namespace std;

/// Entry point to the addressbook program
/// \remark This program takes no arguments. All the input is driven
/// by interactive prompts.
int main(int argc, char* argv[]) {
  /// Number of enteries in the address book.
  const int kEnteries = 3;
  /// The address book is C++ Vector object that contains Person objects.
  // declare a variable named addressbook which is a vector of
  // Person objects.
  vector<Person> addressbook;


  cout << "Let's add 3 " << kEnteries << " to your address book!\n";
  for (int i = 0; i < kEnteries; i++) {
    cout << "Enter a name: ";
    string name;
    getline(cin, name);
    cout << "Enter a phone number: ";
    string phone_number;
    getline(cin, phone_number);
    // Print out a prompt for the computer user to enter a person's name
    // Declare a string variable named `name` to store the person's name.
    // Using getline(), read from cin and store into `name`; read up to
    // '\n'.

    // Print out a prompt for the computer user to enter a
    // person's phone number.
    // Declare a string variable named `phone_number` to store
    // the person's phone number.
    // Using getline(), read from cin and store into `phone_number`;
    // read up to '\n'.
    Person p(name, phone_number);
    // Declare a variable named `p` which is of type Person. Intialize
    // it with the name and phone number that was read in from cin.
    addressbook.push_back(p);
    // Use the push_back() method to insert into the vector the person
    // that was just created.
    // https://en.cppreference.com/w/cpp/container/vector/push_back
  }
  cout << "Let's sort your addressbook!\n";
  sort(addressbook.begin(), addressbook.end(),
       [](Person& a, Person& b) { return a > b; });
  // Sort the address_book vector using sort().
  // https://en.cppreference.com/w/cpp/algorithm/sort

  cout << "Great! Let's print out all the enteries in your addressbook.\n";
  for (auto person : addressbook) {
    cout << person << "\n";
  }
  // Using a range-for loop, print out each entry of the addressbook.
  // Remember to use the overloaded << operator to output the person to
  // cout.

  return 0;
}
