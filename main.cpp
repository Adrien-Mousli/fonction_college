#include <iostream>
using namespace std;

int main()
{

    string a;
    string b;
    string c;
    string d;

    cout << "entrer un nombre: " << endl;  
    cin >> a;
    cout << "le nombre que vous avez choisi est: " << a << endl;
    cout << "" << endl;
    cout << "entrer un nombre" << endl;
    cin >> b;
    cout << "le nombre que vous avez choisi est: " << b << endl;
    cout << "ce nombre sera le multiplicateur du premier nombre choisit" << endl;
    cout << "" << endl;
    cout << "entrer un nombre" << endl;
    cin >> c;
    cout << "le nombre que vous avez choisi est: " << c << endl;
    cout << "ce nombre va s'additionner au résultat des deux premiers" << endl;
    d = a * b;
    d = d + c;
    cout << d << endl;



    return 0;
}
