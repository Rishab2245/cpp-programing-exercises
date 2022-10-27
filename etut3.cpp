// #include <iostream>
// using namespace std;
// int main()
// {
// int n, first, second, third, fourth, fifth, sum;
//  n = 89979;
// /*Take out each digit of this number and then finally add the first and the second last digits*/
//  first = n%10; 
//  n = n/10;
//  second = n%10; 
//  n = n/10;
//  third = n%10; 
//  n = n/10;
//  fourth = n%10; 
//   n = n/10;
//  fifth = n%10; 
//  sum = second + fifth;
//  cout << "sum of first and fourth digit is: " << sum << endl;
//  return 0;
// }

// (or)


#include <iostream>
using namespace std;
int main()
{
int n, first, second, third, fourth, fifth, sum;
 n = 123;
/*Take out each digit of this number and then finally add the first and the second last digits*/
 first = n/10000; //first digit
 n = n%10000;
 second = n/1000; //second digit
 n = n%1000;
 third = n/100; //third digit
 n = n%100;
 fourth = n/10; //fourth digit
 fifth = n%10; //fifth digit
 sum = first + fourth;
 cout << "sum of first and fourth digit is: " << sum << endl;
 return 0;
}