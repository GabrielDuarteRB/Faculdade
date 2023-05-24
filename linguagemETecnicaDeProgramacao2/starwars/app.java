public class app {
    
    public static void main(String[] args) {
        // Pessoa leia = new Pessoa();
        // leia.setNome("Leia");
        // leia.setSobrenome("Organa");
        // leia.setSexo("F");

        // System.out.println(leia.getNome());
        // System.out.println(leia.getSobrenome());
        // System.out.println(leia.getSexo());

        // Pessoa luke = new Pessoa("Luke", "Skywalker", "M");
        // System.out.println(luke.getNome());
        // System.out.println(luke.getSobrenome());
        // System.out.println(luke.getSexo());

        Jedi obi = new Jedi("Obi-Wan Kenobi", "Jedi");
        Sith darth = new Sith("Darth Vader", "Mestre");

        // darth.mindControl();
        // darth.levitation();

        // obi.mindControl();
        // obi.levitation();   

        Weapon azul = new Saber("Azul");
        Weapon vermelho = new Saber("Vermelho");
        Weapon laser = new Blast("laser");


        obi.setWeapons(azul);
        obi.setWeapons(laser);
        darth.setWeapons(vermelho);

        // obi.getWeapons().get(0);
        darth.getWeapons().get(0).slash();

        obi.printAllWeapons();

    }
}