package ex7;

public class Carros {
    private String marca;
    private String modelo;
    private float quilometragemTotal = 0;

    public Carros(String marca, String modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }

    public float distanciaPercorrida(float velocidade, float tempo) {
        this.quilometragemTotal += velocidade * tempo;
        System.out.println("Sua distancia percorrida foi " + velocidade * tempo);

        return velocidade * tempo;
    }

    public void correr(float n) {
        this.quilometragemTotal += n;
        System.err.println("Quilometragem adicionada");
    }

    public float getQuilometragemTotal() {
        return this.quilometragemTotal;
    }
}
