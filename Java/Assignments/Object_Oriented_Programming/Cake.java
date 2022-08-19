package Object_Oriented_Programming;

public class Cake {

    public String name = "";

    public float price = 0;

    // for setter
    public void setName(String newName) {
        name = newName;
    }

    public void setPrice(float newPrice) {
        price = newPrice;
    }

    // for getter
    public String getName() {
        return name;
    }

    public float getPrice() {
        return price;
    }

    // for display
    public void display() {
        String display = " " + name + " : \u20B9 " + price + " per pound";
        System.out.println(display);
    }

}
