#include <bits/stdc++.h>
using namespace std;

// Defining enum Year
enum year {
    Jan,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main() {
    for(int i = Jan; i <= Dec; i++)
        cout << i << " ";
    return 0;
}

//Example 2:
#include <bits/stdc++.h>
using namespace std;

int main(){
    // Defining enum Gender
    enum Gender {
        Male, 
        Female 
    };

    // Creating Gender type variable
    Gender gender = Male;

    switch(gender) {
        case Male:
            cout << "Gender is Male";
            break;
        case Female:
            cout << "Gender is Female";
            break;
        default:
            cout << "Value can be Male or Female";
    }
	return 0;
}

// Enum is a user-defined data type that consists of integral constants.
// The enum keyword is used to declare an enumeration.
// An enum is a special type that represents a group of constants (unchangeable values).