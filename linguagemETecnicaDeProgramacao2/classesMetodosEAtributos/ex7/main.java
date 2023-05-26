package ex7;

public class main {
    public static void main(String[] args) {
        Carros c1 = new Carros("BMW", "X5");
        c1.correr(252);
        c1.correr(162);
        System.out.println(c1.getQuilometragemTotal());

        Carros c2 = new Carros("BMW", "X7");
        c2.correr(58);
        c2.correr(88);
        System.out.println(c2.getQuilometragemTotal());
    }
}
