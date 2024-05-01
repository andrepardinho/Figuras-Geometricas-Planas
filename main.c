#include <stdio.h>
#include <math.h>

// RETA
double comprimento_reta(double A, double B) {
  return B - A;
}

// CIRCULO
double area_circulo(double raio) {
  return M_PI * pow(raio, 2);
}
double perimetro_circulo(double raio) {
  return 2 * M_PI * raio;
}
double diametro_circulo(double raio) {
  return 2 * raio;
}

// QUADRADO
double area_quadrado(double lado) {
return lado * lado;
}
double perimetro_quadrado(double lado) {
return 4 * lado;
}
double diagonal_quadrado(double lado) {
return lado * sqrt(2);
}

// RETÂNGULO
double area_retangulo(double baseret, double alturaret) {
  return baseret * alturaret;
}
double perimetro_retangulo(double baseret, double alturaret) {
  return 2 * (baseret + alturaret);
}
double diagonal_retangulo(double baseret, double alturaret) {
  return sqrt(pow(baseret, 2) + pow(alturaret, 2));
}

// TRIÂNGULO
double perimetro_triangulo(double lado1, double lado2, double lado3) {
    return lado1 + lado2 + lado3;
}
double area_triangulo(double lado1, double lado2, double lado3) {
    double semi_perimetro = perimetro_triangulo(lado1, lado2, lado3) / 2;
    return sqrt(semi_perimetro * (semi_perimetro - lado1) * (semi_perimetro - lado2) * (semi_perimetro - lado3));
}

// Trapézio
double area_trapezio(double basemaior, double basemenor, double alturatrap){
  return ((basemaior + basemenor) * alturatrap) / 2;
}
double basemedia_trapezio(double basemaior, double basemenor) {
  return (basemaior + basemenor) / 2;
}
double mediana_trapezio(double basemaior, double basemenor) {
  return (basemaior - basemenor) / 2;
}
double perimetro_trapezio(double basemaior, double basemenor, double lado1trap, double lado2trap) {
  return basemaior + basemenor + lado1trap + lado2trap;
}

//LOSANGO
double area_losango(double diagonalmaior, double diagonalmenor) {
  return (diagonalmaior * diagonalmenor) / 2;
}
double lados_losango(double diagonalmaior, double diagonalmenor) {
  return sqrt(pow((diagonalmaior/2), 2) + pow((diagonalmenor/2), 2));
}


int main() {
  int opcao;
  printf("Escolha uma figura geométrica:\n");
  printf("\n1. Segmento de reta\n");
  printf("2. Circulo\n");
  printf("3. Quadrado\n");
  printf("4. Retângulo\n");
  printf("5. Triângulo\n");
  printf("6. Trapézio\n");
  printf("7. Losango\n");

  
  printf("Opção: ");
  scanf("%d", &opcao);

  if (opcao == 1) {
      double A, B;
      printf("\nDigite o ponto A: ");
      scanf("%lf", &A);
      printf("Digite o ponto B: ");
      scanf("%lf", &B);
      printf("\nComprimento do segmento de reta: %.2lf\n", comprimento_reta(A, B));
  }
  if  (opcao == 2) {
      double raio;
      printf("\nInsira o raio do círculo: ");
      scanf("%lf", &raio);
      printf("\nÁrea do círculo: %.2lf\n", area_circulo(raio));
      printf("Perímetro do círculo: %.2lf\n", perimetro_circulo(raio));
      printf("Diâmetro do círculo: %.2lf\n", diametro_circulo(raio));
  }
  if (opcao == 3) {
     double lado;
     printf("\nInsira o lado do quadrado: ");
     scanf("%lf", &lado);
     printf("\nÁrea do quadrado: %2.lf\n", area_quadrado(lado));
     printf("Perimetro do quadrado: %2.lf\n", perimetro_quadrado(lado));
     printf("Diagonal quadrado: %.2lf\n", diametro_circulo(lado));
  }
  if (opcao == 4) {
    double baseret, alturaret;
    printf("\nInsira a base do retângulo: ");
    scanf("%lf", &baseret);
    printf("Insira a altura do retângulo: ");
    scanf("%lf", &alturaret);
    printf("\nÁrea do quadrado: %2.lf\n", area_retangulo(baseret, alturaret));
    printf("Perímetro do quadrado: %2.lf\n", perimetro_retangulo(baseret, alturaret));
    printf("Diagonal do quadrado: %2.lf\n", diagonal_retangulo(baseret, alturaret));
  }
  if (opcao == 5) {
      double lado1, lado2, lado3;
        printf("\nInsira o comprimento do lado 1 (base) do triângulo: ");
        scanf("%lf", &lado1);
        printf("Insira o comprimento do lado 2 do triângulo: ");
        scanf("%lf", &lado2);
        printf("Insira o comprimento do lado 3 do triângulo: ");
        scanf("%lf", &lado3);
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("\nSeu triângulo é equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("\nSeu triângulo é isósceles.\n");
        } else {
            printf("\nSeu triângulo é escaleno.\n");
        }

        printf("Perímetro do triângulo: %.2lf\n", perimetro_triangulo(lado1, lado2, lado3));
        printf("Área do triângulo: %.2lf\n", area_triangulo(lado1, lado2, lado3));
      }
    else {
      printf("\nOs valores inseridos não formam um triângulo válido.\n");
    }
  }
  if (opcao == 6) {
    double basemaior, basemenor, alturatrap, lado1trap, lado2trap;
    printf("\nInsira a base maior do trapézio: ");
    scanf("%lf", &basemaior);
    printf("Insira a base menor do trapézio: ");
    scanf("%lf", &basemenor);
    printf("Insira a altura do trapézio: ");
    scanf("%lf", &alturatrap);
    printf("Insira o 1º lado do trapézio: ");
    scanf("%lf", &lado1trap);
    printf("Insira 2º lado do trapézio: ");
    scanf("%lf", &lado2trap);
    printf("\nÁrea do trapézio: %.2lf um²\n", area_trapezio(basemaior, basemenor, alturatrap));
    printf("Base média do trapézio: %.2lf\n", basemedia_trapezio(basemaior, basemenor));
    printf("Mediana do trapézio: %.2lf\n", mediana_trapezio(basemaior, basemenor));
    printf("Perímetro do trapézio: %.2lf\n", perimetro_trapezio(basemaior, basemenor, lado1trap, lado2trap));
  }
  if (opcao == 7) {
    double diagonalmaior, diagonalmenor;
    printf("\nInsira a diagonal maior do losango: ");
    scanf("%lf", &diagonalmaior);
    printf("Insira a diagonal menor do losango: ");
    scanf("%lf", &diagonalmenor);

    double lado = lados_losango(diagonalmaior, diagonalmenor);
    double perimetro = 4 * lado;

  printf("\nÁrea do losango: %.2lf um²\n", area_losango(diagonalmaior, diagonalmenor));
  printf("Lado do losango: %.2lf\n", lado);
  printf("Perímetro do losango: %.2lf\n", perimetro);
}

  return 0;
}
