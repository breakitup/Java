class UseGenerics{

	public static <T,S> void genericFunc(T element1,S element2){
		System.out.println(element1.getClass().getName()+":"+element1);
		System.out.println(element2.getClass().getName()+":"+element2);
	}

	public static void main(String args[])throws Exception{
	LearnGenerics <Integer,String > o1=new LearnGenerics<Integer,String>(5,"Abhishek");
	System.out.println(o1.getFirstObject());
	System.out.println(o1.getSecondObject());
	genericFunc("Hello",10);
	}
}