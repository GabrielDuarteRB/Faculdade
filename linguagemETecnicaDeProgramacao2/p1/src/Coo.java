package src;

public class Coo extends Secretary implements Partner, OperatingOfficer {
    static int cargo = 3;

    public void supportExecutives() {
        System.out.println("supportExecutives"); 
    }

    public void developPolicies() {
        System.out.println("developPolicies"); 
    }

    public void coordinate() {
        System.out.println("coordinate"); 
    }

    public void decisionMaking() {
        System.out.println("decisionMaking"); 
    }

    public void profitRevenue() {
        System.out.println("profitRevenue"); 
    }

    
}
