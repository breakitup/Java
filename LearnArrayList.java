import java.util.List;
import java.util.ArrayList;
import java.util.Iterator;

class LearnArrayList{

	public static void main(String[] args) {
		List<Integer> ls=new ArrayList<Integer>();
		ls.add(1);
		ls.add(2);
		ls.add(3);
		Iterator<Integer> it=ls.iterator();
		while(it.hasNext()){
			Integer i=it.next();
			it.set(32);
		}
	}
}