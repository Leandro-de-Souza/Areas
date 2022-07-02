#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

        double A, B, C, areaq, areatri, areatrap;

        cout << "Digite a medida A: ";
        cin >> A;
        cout << "Digite a medida B: ";
        cin >> B;
        cout << "Digite a medida C: ";
        cin >> C;

        areaq = A * A;
        areatri = (A * B) / 2;
        areatrap = (A + B) * C / 2;

        cout << fixed << setprecision(4);
        cout << "AREA DO QUADRADO = " << areaq << endl;
        cout << fixed << setprecision(4);
        cout << "AREA DO TRIANGULO = " << areatri << endl;
        cout << fixed << setprecision(4);
        cout << "AREA DO TRAPEZIO = " << areatrap << endl;



    return 0;
}
