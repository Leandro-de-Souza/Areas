using System;
using System.Globalization;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PROBLEMA_MEDIDAS {
    internal class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double A, B, C, areaq, areatri, areatrap;

            Console.Write("Digite a medida A: ");
            A = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a medida B: ");
            B = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a medida C: ");
            C = double.Parse(Console.ReadLine(), CI);

            areaq = A * A;
            areatri = (A * B) / 2;
            areatrap = (A + B) * C / 2;

            Console.WriteLine("AREA DO QUADRADO = " + areaq.ToString("F4", CI));
            Console.WriteLine("AREA DO TRIANGULO = " + areatri.ToString("F4", CI));
            Console.WriteLine("AREA DO TRAPEZIO = " + areatrap.ToString("F4", CI));


        }
    }
}
