import java.util.Scanner;
import java.util.*;

class Swapnodes{
	
	Swapnodes left;
	Swapnodes right;
	int data;

	static void printinorder(Swapnodes root){
		if(root==null){
			return;
		}
		printinorder(root.left);
		System.out.println(root.data);
		printinorder(root.right);
	}

	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n;
		n=sc.nextInt();
		Swapnodes root=new Swapnodes();
		root.left=null;
		root.right=null;
		root.data=1;
		Queue<Swapnodes> q=new LinkedList<Swapnodes>();
		q.add(root);
		for(int i=1;i<=n;i++){
			Swapnodes currnode=q.peek();
			q.remove();
			int lc=sc.nextInt();
			int rc=sc.nextInt();
			if(lc!=-1){
				Swapnodes l=new Swapnodes();
				l.data=lc;
				l.left=null;
				l.right=null;
				currnode.left=l;
				q.add(l);
			}
			else{
				currnode.left=null;
			}
			if(rc!=-1){
				Swapnodes r=new Swapnodes();
				r.data=rc;
				r.left=null;
				r.right=null;
				currnode.right=r;
				q.add(r);
			}
			else{
				currnode.right=null;
			}
		}
		printinorder(root);
		int k=sc.nextInt();
		int level=0;
		q.add(root);
		while(level<k){
			Swapnodes currnode=q.peek();
			q.remove();
			if(currnode.left!=null)
			q.add(currnode.left);
			if(currnode.right!=null)
				q.add(currnode.right);
			level++;
		}
		while(q.peek()!=null){
			Swapnodes currnode=q.peek();
			Swapnodes tmp=currnode.left;
			currnode.left=currnode.right;
			currnode.right=tmp;
			q.remove();
		}
		printinorder(root);
	}
}