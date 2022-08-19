package Object_Oriented_Programming;

import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) {

		// object for cake and pastry
		Cake c1 = new Cake();
		Cake c2 = new Cake();
		Pastry p1 = new Pastry();
		Pastry p2 = new Pastry();

		// getter and setter
		c1.setName("Chocolate Brownie");
		c1.setPrice(250f);
		c2.setName("Chocolate Maple");
		c2.setPrice(300f);
		p1.setName("Black Forest");
		p1.setPrice(35f);
		p2.setName("Choco Truffle");
		p2.setPrice(40f);

		// ArrayList for Cake and Pastry
		List<Cake> cakeList = new ArrayList<Cake>();
		cakeList.add(c1);
		cakeList.add(c2);

		List<Pastry> pastryList = new ArrayList<Pastry>();
		pastryList.add(p1);
		pastryList.add(p2);

		System.out.println("        Today's Special Menu        ");
		System.out.println("------------------------------------");
		System.out.println();
		System.out.println(" Special Cakes                       ");
		System.out.println(" ------------------------------------");

		// for display cakes
		for (Cake object : cakeList) {
			object.display();
		}

		System.out.println();
		System.out.println(" Special Pastries                    ");
		System.out.println(" ------------------------------------");

		// for display pastries
		for (Pastry object : pastryList) {
			object.display();
		}

	}
}
