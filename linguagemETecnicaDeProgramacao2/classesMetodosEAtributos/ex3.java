import java.util.Scanner;

public class ex3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float maior;

        System.out.println("Digite o primeiro valor: ");
        float val1 = scanner.nextFloat();
        
        System.out.println("Digite o segundo valor: ");
        float val2 = scanner.nextFloat();

        if(val1 >= val2) {
            maior = val1;
        } else {
            maior = val2;
        }

        System.out.println("Digite o terceiro valor: ");
        float val3 = scanner.nextFloat();

        if(val3 > maior) {
            maior = val3;
        }

        System.out.println("O maior valor foi " + maior);
    }
}
