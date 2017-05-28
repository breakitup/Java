import java.io.*;

class LearnSerilization implements Serializable{
	int id;
	String name;
	static String company="Quiker";
	transient String nextCompany="Amazon";
	LearnSerilization(int id,String name){
		this.id=id;
		this.name=name;
	}
	public static void main(String args[]) throws Exception{
		LearnSerilization ls=new LearnSerilization(1,"Abhi");

		FileOutputStream fout=new FileOutputStream("f.txt");
		ObjectOutputStream out=new ObjectOutputStream(fout);
		out.writeObject(ls);
		out.flush();
		out.close();
		fout.close();
	}

}