public class Shotgun extends Weapon {
    private int bullets = 4;

    public void shoot() {
        if(this.bullets < 1) {
            System.out.println("Acabou as balas, recarregue");
            return;
        }

        this.bullets--;
        System.out.println("clatibum");
    }

    public void reload() {
        this.bullets = 4;
        System.out.println("Arma recarregada");
    }
}
