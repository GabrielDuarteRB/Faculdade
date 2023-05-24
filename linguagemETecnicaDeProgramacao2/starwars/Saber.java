class Saber extends Weapon {
    public String nome;

    public Saber(String nome) {
        this.nome = "Sabre: " + nome;
    }

    public String getNome(){
        return this.nome;
    }

    public void setNome(String nome){
        this.nome = "Sabre: " + nome;
    }

    public void slash() {
        System.out.println("Slash");
    }
}