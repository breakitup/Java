class Singleton{
	private static Singleton instance=null;
	private Singleton(){

	}
	synchronized public static Singleton getInstance(){
		if(instance==null){
			instance=new Singleton();
		}
		return instance;
	}
}