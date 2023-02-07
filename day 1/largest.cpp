#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? n1;
   ?? n2;

   raptor_prompt_variable_zzyz ="Enter number 1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n1;
   raptor_prompt_variable_zzyz ="Enter number 2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n2;
   if (n1>n2)
   {
      cout << n1+"is the largest of the two" << endl;   }
   else
   {
      cout << n2+"is the largest of the two" << endl;   }

   return 0;
}
