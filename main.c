#include <stdio.h>


int main()
{

      double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

      printf("Digite a medida A: ");
      scanf("%lf", &A);
      printf("Digite a medida B: ");
      scanf("%lf", &B);
      printf("Digite a medida C: ");
      scanf("%lf", &C);

      areaQuadrado = A * A;
      printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);

      areaTriangulo = (double)(A * B) / 2;
      printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);

      areaTrapezio = (double)(A + B) * C / 2;
      printf("AREA DO TRAPEZIO = %.4lf", areaTrapezio);



    return 0;
}
