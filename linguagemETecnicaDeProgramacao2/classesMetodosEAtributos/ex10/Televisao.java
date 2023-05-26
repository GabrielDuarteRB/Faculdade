package ex10;
import java.util.ArrayList;

public class Televisao {
    private ArrayList<String> canais;
    private String entradaDeSinal;

    public String getEntradaDeSinal() {
        return this.entradaDeSinal;
    }

    public void setEntradaDeSinal(String entradaDeSinal) {
        this.entradaDeSinal = entradaDeSinal;
    }

    public void setCanais(String canal){
        this.canais.add(canal);
    }

    public ArrayList<String> getCanais(){
        return this.canais;
    }

    
}
