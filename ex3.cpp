#include <iostream>
using namespace std;
int main()
{
    char p_alpha, p_alpha_1;
    int i = 0, j = 0;
    cout << "Character (lowercase)" << "\t" << "Integer Value" << "\t" << "Character (uppercase)" << "\t" << "Integer Value"<< endl;
    for (p_alpha = 'a', p_alpha_1 = 'A'; p_alpha <= 'z' && p_alpha_1 <= 'Z'; ++p_alpha, ++p_alpha_1){
        cout << p_alpha << "\t" << "\t" << "\t" << p_alpha + i << "\t" << "\t" << p_alpha_1 << "\t" << "\t" << "\t" << p_alpha_1 + j << endl;
    }
    return 0;
}
