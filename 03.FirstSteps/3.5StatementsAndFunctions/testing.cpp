// #include <iostream>
// using namespace std ;

// int main() {
//     int firstnumber = 12 ;
//     int secondnumber = 9 ;
//     int sum = firstnumber + secondnumber ;
//     cout << "The sum is : " << sum << endl ;
//     return 0 ;

// }

// #include <iostream>
// using namespace std ;
// int addnumbers(int first_number , int second_number){
//     int sum = first_number + second_number ;
//     return sum ;
//     }

// #include <iostream>
// using namespace std ;

// int addNumbers( int first_param , int second_param ) {
//     int result = first_param + second_param ;
//     return result ; 
// }

// int main() {
//     int first_number {3} ; 
//     int second_number {7} ;
//     int sum = first_number + second_number ;


//     cout << "The first number is : " << first_number << endl ;
//     cout << "The second number is : " << second_number << endl ;
//     cout << "The sum of both the numbers is : " << sum << endl ;

//     sum = addNumbers( 25,7);
//     cout << "The sum of both the numbers is : " << sum << endl ;
//     return 0 ;

// }

#include <iostream>
using namespace std ;
int func( int first_param , int second_param) {
    int result = first_param + second_param ;
    return result ;
}

int multi( int first , int second){
    int out = first * second ; 
    return out ;
}

int main() {
    int sum = func(44 , 7) ; 
    cout << "The sum is : " << sum << endl ;

    cout << "The sum of the numbers is : " << func(57 , 30) << endl ;

    cout << "The product of the numbers is : " << multi(5 , 8) << endl ;
    return 0 ;
}