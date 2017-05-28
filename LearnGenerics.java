public class LearnGenerics<P, Q >{
	P obj1;
	Q obj2;
	LearnGenerics(P obj1,Q obj2){
		this.obj1=obj1;
		this.obj2=obj2;
	}
	public P getFirstObject(){
		return obj1;
	}
	public Q getSecondObject(){
		return obj2;
	}
}