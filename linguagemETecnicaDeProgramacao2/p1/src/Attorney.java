package src;

public class Attorney extends Cargo implements Lawyer {
    private String legalNumber;
    static int cargo = 1;

    public String getLegalNumber() {
        return this.legalNumber;
    }

    public void setLegalNumber(String legalNumber) {
        this.legalNumber = legalNumber;
    }

    public void representClients() {
        System.out.println("representClients");
    }

    public void research() {
        System.out.println("research");
    }

    public void analysis(String doc) {
        System.out.println(doc + " salvo");
    }

    public void fileDocument(String type) {
        System.out.println(type + " fileDocument");
    }

    
}
