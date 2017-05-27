import java.util.Scanner;

class ShapeFactory {
	
	public Shape FactoryFunction(String s){
		if(s.equals("Circle")){
			return new Circle();
		}
		else
			return new Rectangle();
	}
	public static void main(String args[]){
		ShapeFactory sf=new ShapeFactory();
		Scanner sc=new Scanner(System.in);
		String input=sc.nextLine();
		Shape s1=sf.FactoryFunction(input);
		s1.draw();
	}

}