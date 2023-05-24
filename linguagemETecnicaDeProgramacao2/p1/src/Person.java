package src;

public class Person{
    private String name;
    private String surname;
    private String gender;
    protected static int qntdPerson = 0;
    protected Firm firma = new Firm(); 
    private Cargo cargo = new Cargo();

    public Person() {}

    public Person(String name, String surname) {
        this.name = name;
        this.surname = surname;
    }

    public Person(String name, String surname, String gender) {
        this.name = name;
        this.surname = surname;
        this.gender = gender;
    }
    public String getName() {
        return this.name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getSurname() {
        return this.surname;
    }
    public void setSurname(String surname) {
        this.surname = surname;
    }
    public String getGender() {
        return this.gender;
    }
    public void setGender(String gender) {
        this.gender = gender;
    }
    public static void printQtdePerson() {
        System.out.println(qntdPerson);
    }

    public void setFirma(Firm firma) {
        this.firma = firma;
    }

    public Firm getFirma() {
        return this.firma;
    }

    public void setCargo(Cargo cargo) {
        this.cargo = cargo;
    }

    public Cargo getCargo() {
        return this.cargo;
    }

}