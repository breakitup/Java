class LearnSingleton{
	
	public static void main(String args[]){
	Singleton obj=Singleton.getInstance();
		System.out.println(obj);
		Singleton obj1=obj.getInstance();
		System.out.println(obj1);
	}
}