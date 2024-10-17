#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "welcome to our grade calculator" << endl
        << endl;
   int a = 85;
   int b = 75;
   int c = 50;
   int d = 45;
   int e = 29;
   int f = 28;
   int i;
   int m = 101;
   string ex = "Excellent work!";
   string wd = "Well done";
   string gj = "Good job";
   string fl = "you failed!!";
   string nimp = "Need improvement";
   string err = "";
   string ps = "You passed but you could do better";
   cout << "" << endl;

   cout << "enter the percentage :  ";

   cin >> i;
   cout << "" << endl;
   cout << "" << endl;

   cout << endl;

   if (i > e)
   {
      cout << "You are eligible for the next level" << endl;
      (i > a) ? cout << "excellent you are A Grade student !!" << " " << ex << " " : (i >= b) ? cout << "good you are B Grade student" << " " << wd << " "
                                                                                 : (i >= c)   ? cout << "good you are C Grade student" << " " << gj << " "
                                                                                 : (i >= d)   ? cout << "good you are D Grade student" << " " << nimp << " "
                                                                                 : (i >= e)   ? cout << "good you are E Grade student" << " " << ps << " "
                                                                                 : (i >= f)   ? cout << "sorry !! but you are failed" << " " << fl << " "
                                                                                 : (i <= e)   ? cout << "sorry !! but you are failed" << " " << fl << " "

                                                                                           : cout << "invalid";
   }
   if (i > m)
   {
      cout << "invalid Operation" << " " << err << " ";
   }
   else
   {
      cout << "better luck next time " << endl;
   }
}