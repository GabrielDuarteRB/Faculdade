package ex9;

public class Retangulo {
    private float largura;
    private float comprimento;
    private float perimetro;
    private float area;

    public Retangulo(int largura, int comprimento) {
        this.largura = largura;
        this.comprimento = comprimento;
    }

    public float Perimetro() {
        this.perimetro = (this.largura + this.comprimento) * 2;
        return this.perimetro;
    }

    public float Area() {
        this.area = this.largura * this.comprimento;
        return this.area;
    }

}
