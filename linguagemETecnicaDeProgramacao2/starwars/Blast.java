public class Blast extends Weapon {
    public String nome;

    public Blast(String nome) {
        this.nome = "Blast: " + nome;
    }

    public String getNome(){
        return this.nome;
    }

    public void setNome(String nome){
        this.nome = "Blast: " + nome;
    }
    public void shot() {
        System.out.println("Shot");
    }
}