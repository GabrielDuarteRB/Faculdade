package ex10;

public class main {
    public static void main(String[] args) {
        Quarto q = new Quarto();
        q.setAbajour(true);
        q.setArCondicionado(18);
        q.setLampada(true);
        q.getTelevisao().setCanais("Globo");
        q.getTelevisao().setEntradaDeSinal("HDMI");
    }
}
