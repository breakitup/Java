import java.util.concurrent.ExecutorService;  
import java.util.concurrent.Executors;  

class LearnThreadPool implements Runnable{
	int threadId;
	LearnThreadPool(int threadId){
		this.threadId=threadId;
	}
	public void run(){
		System.out.println("Executing thread "+Thread.currentThread().getName()+" number "+threadId);
		try{
		Thread.sleep(1000);
		}
		catch(Exception e){
			System.out.println(e);
		}
		System.out.println("Terminating therad");
	}
	public static void main(String args[]){
		ExecutorService executor=Executors.newFixedThreadPool(5);
		for(int i=1;i<11;i++){
			Runnable worker=new LearnThreadPool(i);
			executor.execute(worker);
		}
		executor.shutdown();

	}

}