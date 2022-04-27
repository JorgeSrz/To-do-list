#include <iostream>
#include <map>

using namespace std;

int main() {
  bool finished = false;
  int option;
  string date;
  string description;
  map<string,string> tasks;

  while(!finished) {
    cout << "\nTasks:\n";
    for(auto element = tasks.cbegin(); element != tasks.cend(); ++element) {
      cout << "- " << element->first << ": " << element->second << endl;;
    }

    cout << "\n1: Add task\n";
    cout << "2: Delete task\n";
    cout << "0: Finish\n";
    cin >> option;

    switch (option) {
    case 1:
      cout << "Date: ";
      cin.ignore();
      getline(cin, date);
      cout << "Description: ";
      getline(cin, description);
      tasks.insert(pair<string,string>(date, description));
      break;
    case 2:
      cout << "Task: ";
      cin.ignore();
      getline(cin, date);
      tasks.erase(date);
      break;
    case 0:
      finished = true;
      cout << "Finished\n\n";
      break;
    default:
      cout << "Invalid option\n\n";
      break;
    }
  }
  
}