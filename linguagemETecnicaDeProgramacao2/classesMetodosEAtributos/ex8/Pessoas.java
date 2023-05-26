package ex8;
import java.util.Calendar;

public class Pessoas {
    private int idade;
    private int anoNascimento;

    public void calcularIdade(int ano) {
        this.anoNascimento = ano;

        Calendar calendar = Calendar.getInstance();
        int anoAtual = calendar.get(Calendar.YEAR);

        this.idade = anoAtual - ano;

        System.out.println("Idade: " + this.idade + " anos");
    }    
}
