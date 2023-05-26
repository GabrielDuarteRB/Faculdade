package ex10;

public class Quarto {
    private int arCondicionado;
    private boolean lampada = false;
    private boolean abajour = false;
    private boolean ventilador = false;
    private Televisao televisao = new Televisao();

    public int getArCondicionado() {
        return arCondicionado;
    }

    public void setArCondicionado(int arCondicionado) {
        this.arCondicionado = arCondicionado;
    }

    public boolean isLampada() {
        return lampada;
    }

    public void setLampada(boolean lampada) {
        this.lampada = lampada;
    }

    public boolean isAbajour() {
        return abajour;
    }

    public void setAbajour(boolean abajour) {
        this.abajour = abajour;
    }

    public Televisao getTelevisao() {
        return televisao;
    }

    public boolean isVentilador() {
        return ventilador;
    }
    
    public void setVentilador(boolean ventilador) {
        this.ventilador = ventilador;
    }

}
