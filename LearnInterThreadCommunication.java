class LearnInterThreadCommunication{

	public static void main(String args[]){
		final ThreadCommunication c=new ThreadCommunication();
		Thread t1=new Thread(){
			public void run(){
				c.withdraw(15000);
			}
		};
		Thread t2=new Thread(){
			public void run(){
				c.deposit(3000);
			}
		};
		t1.start();
		t2.start();
	}
}