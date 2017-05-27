import java.lang.reflect.*;

public class AccessPrivateMethod{

	public static void main(){
		try{
			Class c=Class.forName("A");
			Object obj=c.newInstance();
			Method m =c.getDeclaredMethod("test",new Class[]{});
			m.setAccessible(true);
			m.invoke(obj);
		}
		catch(Exception e){
			System.out.println(e);
		}
	}
}