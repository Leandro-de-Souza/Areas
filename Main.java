import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double A, B, C, areaq, areatri, areatrap;

		System.out.print("Digite a medida A: ");
		A = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		B = sc.nextDouble();
		System.out.print("Digite a medida C: ");
		C = sc.nextDouble();
		
		areaq = A * A;
        areatri = (A * B) / 2;
        areatrap = (A + B) * C / 2;

        System.out.println("AREA DO QUADRADO = " + String.format("%.4f", areaq));
        System.out.println("AREA DO TRIANGULO = " + String.format("%.4f", areatri));
        System.out.println("AREA DO TRAPEZIO = " + String.format("%.4f", areatrap));
        
        sc.close();
        

	}

}
