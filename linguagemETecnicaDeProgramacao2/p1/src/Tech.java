package src;

public class Tech extends Firm {
    private String nonDisclosure;
    private String ipAddress;

    public Tech(String name, String foundation, String nonDisclosure, String ipAddress) {
        super(name, foundation);
        this.nonDisclosure = nonDisclosure;
        this.ipAddress = ipAddress;
    }

    public void info() {
        System.out.println("Law [name=" + this.name + ", foundation=" + this.foundation + ", nonDisclosure=" + this.nonDisclosure + ", ipAddress=" + this.ipAddress + "]");
    }

    public String getNonDisclosure() {
        return this.nonDisclosure;
    }

    public void setNonDisclosure(String nonDisclosure) {
        this.nonDisclosure = nonDisclosure;
    }

    public String getIpAddress() {
        return this.ipAddress;
    }

    public void setIpAddress(String ipAddress) {
        this.ipAddress = ipAddress;
    }

    

}
