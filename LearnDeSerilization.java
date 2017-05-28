import java.io.*;

class LearnDeSerilization implements Serializable{
	
	public static void main(String args[]) throws Exception{
		FileInputStream fin=new FileInputStream("f.txt");
		ObjectInputStream in=new ObjectInputStream(fin);
		LearnSerilization ls=(LearnSerilization)in.readObject();
		System.out.println(ls.id+" "+ls.name+" "+ls.nextCompany);
		in.close();
	}

}