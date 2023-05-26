package ex9;

public class main {
    public static void main(String[] args) {
        Retangulo r1 = new Retangulo(10, 20);
        Retangulo r2 = new Retangulo(20, 40);
        Retangulo r3 = new Retangulo(30, 60);

        System.out.println("Perimetro: " + r1.Perimetro());
        System.out.println("Area: " + r1.Area());

        System.out.println("Perimetro: " + r2.Perimetro());
        System.out.println("Area: " + r2.Area());

        System.out.println("Perimetro: " + r3.Perimetro());
        System.out.println("Area: " + r3.Area());
    }
}
