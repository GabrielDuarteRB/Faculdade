import java.util.ArrayList;

public class Jedi implements Force {
    private String nome;
    private String titulo;
    private ArrayList<Weapon> weapons = new ArrayList<Weapon>();

    public Jedi(String nome, String titulo) {
        this.nome = nome;
        this.titulo = titulo;
    }

    public String patience() {
        return "Patience";
    }

    public void mindControl(){
        System.out.println("Do what I wish");
    }

    public void farseeing() {
        System.out.println("farseeing");
    }

    public void telepath() {
        System.out.println("telepath");
    }

    public void levitation() {
        System.out.println("levitation");
    }

    public String getNome() {
        return this.nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getTitulo() {
        return this.titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public ArrayList<Weapon> getWeapons(){
        return this.weapons;
    }

    public void printAllWeapons() {
        for (int i = 0; i < this.weapons.size(); i++) {
            System.out.println(this.weapons.get(i).getNome());
        }
    }


    public void setWeapons(Weapon weapons){
        this.weapons.add(weapons);
    }

    public void setWeapons(ArrayList<Weapon> weapons){
        this.weapons = weapons;
    }

}