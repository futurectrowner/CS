#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

string keyStr;
unsigned int i;

getline(cin, keyStr);

for( i = 0; i< keyStr.size(); i++){
 if(int(char(keyStr[i])) < 65)
    keyStr[i] = 'y';

 if( int(char(keyStr[i]))> 122)
    keyStr[i] = 'y';

    cout <<keyStr[i];
}
//cout << "Valid password: " << keyStr <<endl;

return 0;
}