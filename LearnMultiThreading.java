class LearnMultiThreading extends Thread{
	public void run(){
		try{
			for(int i=1;i<6;i++){
				Thread.sleep(500);
				System.out.println(i);
			}

		}
		catch(Exception e){
			System.out.println(e);
		}
	}
	public static void main(String args[]){
		LearnMultiThreading t1=new LearnMultiThreading();
		LearnMultiThreading t2=new LearnMultiThreading();
		t1.start();
		t2.start();
	}
}