import java.util.ArrayList;

public class Hero {

    private String nome;
    private int energy;
    private int usingWeapon;
    private ArrayList<Weapon> weapons = new ArrayList<Weapon>();

    public Hero(String nome, int energy) {
        this.nome = nome;
        this.energy = energy;
        this.weapons.add(new Weapon());
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public int getEnergy() {
        return energy;
    }
    public void setEnergy(int energy) {
        this.energy = energy;
    }
    public int getUsingWeapon() {
        return usingWeapon;
    }

    public void setUsingWeapon(int usingWeapon) {
        this.usingWeapon = usingWeapon;
    }

    public ArrayList<Weapon> getWeapons() {
        return weapons;
    }

    public void printWeapons() {
        System.err.println(this.weapons);
    }

    public void setWeapons(ArrayList<Weapon> weapons) {
        this.weapons = weapons;
    }

    public void setWeapons(Weapon weapons) {
        this.weapons.add(weapons);
    }


}