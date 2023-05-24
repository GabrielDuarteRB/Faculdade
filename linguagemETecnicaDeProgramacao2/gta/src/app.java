public class app {
    
    public static void main(String[] args) {
        
        Hero h1 = new Hero("Gabriel", 10000);

        h1.setWeapons(new Gun());
        h1.setWeapons(new Bow());
        h1.setWeapons(new Laser());
        h1.setWeapons(new Shotgun());    

        // h1.getWeapons().get(0).shoot();
        // h1.getWeapons().get(1).shoot();
        // h1.getWeapons().get(2).shoot();
        h1.getWeapons().get(3).shoot();
        // h1.getWeapons().get(4).shoot();
        // h1.getWeapons().get(4).shoot();
        // h1.getWeapons().get(4).shoot();
        // h1.getWeapons().get(4).shoot();
        // Shotgun s = (Shotgun) h1.getWeapons().get(4);
        // s.reload();
        // h1.getWeapons().get(4).shoot();
        // h1.getWeapons().get(4).shoot();
        // h1.getWeapons().get(4).shoot();
        h1.getWeapons().get(3).reload();

    }

}
