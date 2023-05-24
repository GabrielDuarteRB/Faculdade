package src;

public class Law extends Firm {
    private String insuranceQuote;
    private String govApprovement;

    public Law(String name, String foundation, String insuranceQuote, String govApprovement) {
        super(name, foundation);
        this.insuranceQuote = insuranceQuote;
        this.govApprovement = govApprovement;
    }

    public void info() {
        System.out.println("Law [name=" + this.name + ", foundation=" + this.foundation + ", insuranceQuote=" + this.insuranceQuote + ", govApprovement=" + this.govApprovement + "]");
    }

    public String getInsuranceQuote() {
        return this.insuranceQuote;
    }

    public void setInsuranceQuote(String insuranceQuote) {
        this.insuranceQuote = insuranceQuote;
    }

    public String getGovApprovement() {
        return this.govApprovement;
    }

    public void setGovApprovement(String govApprovement) {
        this.govApprovement = govApprovement;
    }
}
