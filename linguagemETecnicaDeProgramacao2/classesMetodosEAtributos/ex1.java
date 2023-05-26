import java.util.Scanner;

public class ex1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Digite a primeira média: ");
        double media1 = scanner.nextDouble();
        
        System.out.println("Digite a segunda média: ");
        double media2 = scanner.nextDouble();
        
        double mediaFinal = (media1 + media2) / 2;
        
        if (mediaFinal >= 7.0) {
            System.out.println("Aluno aprovado!");
        } else {
            System.out.println("Aluno reprovado!");
        }
        
        scanner.close();
    }
}