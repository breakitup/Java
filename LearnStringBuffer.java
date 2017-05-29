import java.util.StringTokenizer;
class LearnStringBuffer{
	public static void main(String args[]){
		StringBuffer sb=new StringBuffer("Learned");//synchronized //doen't override the equals method of Object Class
		StringBuilder s=new StringBuilder("Sachin A billon dreams");//asynchronized
		StringTokenizer st=new StringTokenizer("My Name is Abhishek"," ");
		while(st.hasMoreTokens()){
			System.out.println(st.nextToken());
		}
		sb.append("StringBuffer");
		System.out.println(sb);
		//sb.toUpperCase();
		//System.out.println();
	}
}