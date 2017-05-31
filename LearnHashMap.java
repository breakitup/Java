import java.util.*;

class LearnHashMap{
	
	public void fun(Integer x){
		x=8;
	}

	public static void main(String args[]){
		LearnHashMap o1=new LearnHashMap();
		LearnHashMap o2=new LearnHashMap();
		HashMap<LearnHashMap,Integer> m= new HashMap<LearnHashMap,Integer>();
		m.put(null,1);
		m.put(null,2);
		o1=null;
		//o2=null;
		System.out.println(m.get(null));
		ArrayList<Integer> al=new ArrayList<Integer>();
		int a=5;
		//o2.fun(a);
		al.add(a);
		System.out.println(al.get(0).getClass());
	}
}