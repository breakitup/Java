class LearnSynchronization{
	
	public static void main(String args[]){
		Table t=new Table();
		MyThread1 t1=new MyThread1(t);
		MyThread2 t2=new MyThread2(t);
		t1.start();
		t2.start();
	}
}