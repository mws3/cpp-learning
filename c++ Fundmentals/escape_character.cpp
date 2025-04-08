/*
  Escape Sequences Characters
  --- Special Non Printing Characters
  --- Control Printing Behaviour
  --- Start With Back Slash "\"
  --- Can Be Inserted In Any Position
  - \n
  - \\
  - \"
  - \'
  - \t => Tab Equal 8 Spaces
  - \b => backspace like the one in the keyboard
  - \a => Alert => Play Beep During Execution
  - \r => Carriage Return (overwrite)
*/

#include <iostream>
using namespace std;

int main()
{
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\\\n";
  cout << "Line \"4\"\n";
  cout << "Line 5\n";
  cout << "Line\t6\n";
  cout << "Line\b7\n"; // Lin7
  cout << "Line 8\a\n";
  cout << "Osama\rLzero\n"; // Lzero
  cout << "Line"; // This Is Line \\
  return 0;
}