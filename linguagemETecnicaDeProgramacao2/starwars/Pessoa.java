public class Pessoa {
    private String nome;
    private String sobrenome;
    private String sexo;

    public Pessoa(){}

    public Pessoa(String nome, String sobrenome){
        this.nome = nome;
        this.sobrenome = sobrenome;
    }

    public Pessoa(String nome, String sobrenome, String sexo){
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.sexo = sexo;
    }
    
    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSobrenome() {
        return this.sobrenome;
    }
    
    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }

    public String getSexo() {
        return this.sexo;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }
}