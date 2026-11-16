#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
bool Password::has_mixed_case(string pass){
  bool hasCaps = false;
  bool hasLower = false;
  if (pass.length() == 0) return false;
  else {
    for (int i = 0; i < pass.length();i++) {
        if (pass.at(i) <= 90 && pass.at(i) >= 65) { hasCaps = true;}  //comparing index with ascii of Cap letters
        else if (pass.at(i) <= 122 && pass.at(i) >= 97) { hasLower = true;} //compare index with ascii of lower letters
    }
    if (hasCaps == hasLower) return true
  }
  return false;
}
