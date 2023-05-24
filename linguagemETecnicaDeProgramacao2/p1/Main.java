import src.Attorney;
import src.Coo;
import src.Law;
import src.NamePartner;
import src.Person;
import src.Secretary;
import src.Tech;

public class Main {
    
    public static void main(String[] args) {
        Secretary secretary = new Secretary();
        NamePartner namePartner = new NamePartner();
        Coo coo = new Coo();
        Attorney attorney = new Attorney();

        Person harvey = new Person();
        harvey.setName("Harvey");
        harvey.setSurname("Specter");
        harvey.setGender("M");
        harvey.setCargo(namePartner);
        // System.out.println(harvey.cargo);
        // NamePartner harvey = new NamePartner("Harvey", "Speceter", "M");

        Person louis = new Person("Louis", "Litt", "M");
        louis.setCargo(attorney);
        // Attorney louis = new Attorney("Louis", "Litt", "M");

        Person donna = new Person("Donna", "Paulsen", "F");
        donna.setCargo(coo);
        // Coo donna = new Coo("Donna", "Paulsen", "F");


        Law rand = new Law("Rand, Kaldor & Zane", "2009", "Rand", "Havard");
        Law pearson = new Law("Pearson-Specter-Litt", "2003", "Pearson", "Cefet");
        
        Tech velocity = new Tech("Velocity Data Solutions", "1998", "Velocity", "128.0.0.8080");
        
        // velocity.info();

        Person mike = new Person("Mike", "Ross", "M");
        mike.setCargo(attorney);
        // Attorney mike = new Attorney("Mike", "Ross", "M");

        // NamePartner robert = new NamePartner("Robert", "Zane", "M");
        Person robert = new Person("Robert", "Zane", "M");
        robert.setCargo(namePartner);

        System.out.println(donna.getName());
        System.out.println(donna.getSurname());
        System.out.println(donna.getGender());

        pearson.setPersonToFirm(harvey);
        harvey.setFirma(pearson);

        pearson.setPersonToFirm(louis);
        louis.setFirma(pearson);

        pearson.setPersonToFirm(donna);
        donna.setFirma(pearson);

        rand.setPersonToFirm(robert);
        robert.setFirma(rand);

        velocity.setPersonToFirm(mike);
        mike.setFirma(velocity);

        harvey.getFirma().info();
        robert.getFirma().info();

        robert.getCargo().decisionMaking();

    }

}