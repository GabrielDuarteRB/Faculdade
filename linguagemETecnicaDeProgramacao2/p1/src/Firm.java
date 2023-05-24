package src;

import java.util.ArrayList;

public class Firm {
    protected String name;
    protected String foundation;
    private ArrayList<Person> people = new ArrayList<Person>();

    public Firm(){}

    public Firm(String name, String foundation) {
        this.name = name;
        this.foundation = foundation;
    }

    public void listEmployees(){
        for(int i = 0; i < people.size(); i++) {
            System.out.println(people.get(i).getName());
        }
    }

    public void info(){
        System.out.println("[name: " + this.name + ", foundation:" + this.foundation + "]");
    }

    public void setPersonToFirm(Person person) {
        this.people.add(person);
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getFoundation() {
        return foundation;
    }

    public void setFoundation(String foundation) {
        this.foundation = foundation;
    }
    
}
