class ThreadCommunication{
	int amount=10000;

	synchronized public void withdraw(int amount){
		if(this.amount<amount){
			try{
				System.out.println("Low Balance... Waiting for deposit");
				wait();
			}
			catch(Exception e){
				System.out.println(e);
			}
			this.amount-=amount;
			System.out.println("withdraw complete");
		}
	}

	synchronized public void deposit(int amount){
		System.out.println("Going to deposit");
		this.amount+=amount;
		System.out.println("deposit complete");
		notify();
	}
}