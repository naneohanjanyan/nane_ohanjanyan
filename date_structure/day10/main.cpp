#include "hashTable.hpp"
#include "hashTable.cpp"

int main()
{
  HashTable table;
  table.insert("one", 12);
  table.insert("one", 17);
  table.insert("two", 18);
  table.insert("three", 17);
  table.insert("four", 25);
  table.insert("five", 17);
  table.insert("six", 1);
  table.insert("seven", 17);

  table.print();
  cout << endl;

  table.remove("two");
  table.remove("four");
  table.remove("seven");
  table.print();

  table.print();
  cout << endl;

  cout << "countElement = " << table.countElement() << endl;
  cout << " find element: " << table.find("six") << endl;

  cout << endl;

  return 0;
}
