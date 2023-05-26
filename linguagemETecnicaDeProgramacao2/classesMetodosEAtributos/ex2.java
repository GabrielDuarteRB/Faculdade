import java.util.Scanner;

public class ex2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite a primeira nota: ");
        float nota1 = scanner.nextFloat();
        while(nota1 > 10) {
            System.out.println("Apenas valores menores de 10: ");
            nota1 = scanner.nextFloat();
        }

        System.out.println("Digite a segunda nota: ");
        float nota2 = scanner.nextFloat();
        while(nota2 > 10) {
            System.out.println("Apenas valores menores de 10: ");
            nota2 = scanner.nextFloat();
        }

        float media = (nota1 + nota2) / 2;

        if(media >= 6) {
            System.out.println("Aprovado");
            return;
        }

        if(media < 2) {
            System.out.println("Reprovado");
            return;
        }

        System.out.println("Digite a nota da prova final: ");
        float nota3 = scanner.nextFloat();
        
        if((media + nota3) / 2 < 5) {
            System.out.println("Reprovado");
            return;
        }
        
        System.out.println("Aprovado na final");
    }
}
