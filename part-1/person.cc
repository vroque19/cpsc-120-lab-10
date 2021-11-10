
#include "person.h"

/// Person is a constructor which initializes a Person object
/// \param name A string which represents the persons name like
/// "Al Smith" or "Prince"
/// \param phone_number A string which represents a telephone number like
/// "657-278-3700"
Person::Person(std::string name, std::string phone_number) {
  // TODO: Implement the constructor. If you can't remember the names
  // of the data members look in the associated header file, person.h
}

/// The name of the person
/// \returns the name of the person
std::string Person::name() const {
  // TODO: Implement the accessor (also known as a getter) for the name_ data
  // member.
}

/// The phone_number of the person
/// \returns the phone_number of the person
std::string Person::phone_number() const {
  // TODO: Implement the accessor (also known as a getter) for the phone_number_
  // data member.
}

/// Change the person's current phone_number to some other number
/// \param phone_number The person's new phone number
/// \returns The person object itself
/// \remark The method returns the object itself so multiple methods
/// can be chained together.
Person& Person::set_phone_number(const std::string& phone_number) {
  // TODO: Implement the mutator (also known as a setter) for the phone_number_
  // data member.
}

/// Write the person object to an output stream
/// \param out An output stream such as cout.
/// \returns The outputput stream \p out
/// \remark Look at operator<< at the bottom - this method is called from
/// within that function.
std::ostream& Person::write(std::ostream& out) const {
  // TODO: Implement the write member function which sends to the out parameter
  // the name and the phone number with a space between the two data members.
  // Don't forget to return out.
}

/// Boolean equals opertor overload
/// \param person The operand to the right hand side of ==
/// \returns true when *this and person have the same name and phone
/// number.
bool Person::operator==(const Person& person) const {
  // TODO: Implement an is equal to boolean operator which returns true when
  // this has the same name and phone number as the parameter person.
}

/// Boolean not equals operator overload
/// \param person The operand to the right hand side of !=
/// \returns true when *this and person do not have the same name and phone
/// number.
bool Person::operator!=(const Person& person) const {
  return !(*this == person);
}

/// Boolean less-than operator overload
/// \param person The operand to the right hand side of <
/// \returns true when *this.name() < person.name()
bool Person::operator<(const Person& person) const {
  // TODO: Implement a less than boolean operator which returns true when this
  // has a name that alphabetically comes before the name assciated with the
  // parameter person.
}

/// Boolean greater-than operator overload
/// \param person The operand to the right hand side of >
/// \returns true when *this.name() > person.name()
bool Person::operator>(const Person& person) const {
  // TODO: Implement a greater than boolean operator which returns true when
  // this has a name that alphabetically comes after the name assciated with the
  // parameter person.
}

/// Convert a person object into a string so it can be printed.
/// This is a function which defines a new behavior for the << operator.
/// \param out An output stream such as cout
/// \param person A person object
/// \remark This function is a wrapper for the Person::write() method.
std::ostream& operator<<(std::ostream& out, const Person& person) {
  return person.write(out);
}
