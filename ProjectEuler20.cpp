#include <iostream>
#include <cmath>
using namespace std;

string multiplier(string a, string b){
	
}

string adder(string a, string b){
	bool carry = false;

	int len = max(a.length(), b.length());

	int lenA = a.length();
	int lenB = b.length();

	string latter = "";
	while(lenA >= 0 && lenB >= 0){
		int z = 0;
		if(carry) z = 1;
		int x = ((char) a.substr(lenA, 1)) - '0';
		int y = ((char) b.substr(lenB, 1)) - '0';
		if(x + y + z > 9){
			carry = true;
		}else{
			carry = false;
		}
		z = x + y + z;
		latter = z + latter;
	}
	string first = "";
	if(lenA < 0){
		first = b.substr(0, b.length() - len);
	}else{
		first = b.substr(0, a.length() - len);
	}
}

int main(){
	// THIS IS THE NEW MAIN FROM BRANDON
	// ALEX ALEX ALEX
	// FINAL CONFLICT!
}
