import java.util.Scanner;

public class ex5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int tentativas = 0;

        System.out.println("Digite um numero de 0 a 100: ");
        int num = scanner.nextInt();

        while(num < 0 || num > 100) {
            System.out.println("Apenas valores entre 0 e 100: ");
            num = scanner.nextInt();
        }

        System.out.println("Tente acertar o numero escolhido: ");
        int escolha = scanner.nextInt();

        while(escolha < 0 || escolha > 100) {
            System.out.println("Apenas valores entre 0 e 100: ");
            escolha = scanner.nextInt();
        }
        
        tentativas++;
        while(escolha != num) {
            System.out.println("Tente acertar o numero escolhido: ");
            escolha = scanner.nextInt();

            while(escolha < 0 || escolha > 100) {
                System.out.println("Apenas valores entre 0 e 100: ");
                escolha = scanner.nextInt();
            }

            tentativas++;
        }

        if(tentativas == 1) {
            System.out.println("Voce e excelente");
            return;
        } if(tentativas <= 10) {
            System.out.println("Voce e bom");
            return;
        } if(tentativas <= 20) {
            System.out.println("Voce nao foi tao bem");
        } else {
            System.out.println("Voce precisa praticar");
        }
        
    }
}
