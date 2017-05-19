import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.String;

public class CF403QsD {

	List<String> inp;
	HashMap<String,Integer> H1=new HashMap<String,Integer>();
	HashMap<String,Integer> H2=new HashMap<String,Integer>();

	private List<String> readTeamNames() throws IOException{
		List<String> names = new ArrayList<String>();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int lines = Integer.parseInt(br.readLine());
		while(lines-- > 0){
		names.add(br.readLine());
		}
		return names;
		}

	private void start(){
		int i=0;
		boolean result=false;
		while(i<inp.size()){
			String Sc=getShortCode1(i);
			result=inserttomap1(H1,Sc,i);
			if(result){
				i++;
			}else{
				break;
			}
		}
		if(result){
			System.out.println("YES");
			H1=(HashMap<String,Integer>)sortByValue(H1);
			for (String key : H1.keySet()){
				System.out.println(key);
			}

		}
		else{
			System.out.println("NO");
		}
	}

	private String getShortCode1(int i) {
		// TODO Auto-generated method stub
		char[] tmp=inp.get(i).toCharArray();
//		System.out.println(tmp);
		char[] sc=new char[3];
		sc[0]=tmp[0];
		sc[1]=tmp[1];
		sc[2]=tmp[2];
		String Sc = new String(sc);
		return Sc;
	}

	private  String getShortCode2(int j) {
		// TODO Auto-generated method stub
//		System.out.println(j);
		char[] tmp=inp.get(j).toCharArray();
		char[] tmp2=(inp.get(j).split( "\\s+"))[1].toCharArray();
//		System.out.println(tmp2);
		char[] sc=new char[3];
		sc[0]=tmp[0];
		sc[1]=tmp[1];
		sc[2]=tmp2[0];
		String Sc= new String(sc);
		return Sc;
	}

	private  boolean inserttomap1(HashMap<String,Integer> h1, String sc, int i) {
		// TODO Auto-generated method stub
		boolean result;
		String Sc2j;
		String Sc2i;
		Sc2i=getShortCode2(i);
		if(H2.containsKey(sc)){
			result=inserttomap2(h1,Sc2i,i);
			return result;
			}
		else if(h1.containsKey(sc)) {
			int j =h1.get(sc);
//			System.out.println("j="+j+"i="+i);
			if(sc.equals(getShortCode1(j))){
//				System.out.println("j="+j+"i="+i);
				h1.remove(sc);
				H2.put(sc,i);
				Sc2j=getShortCode2(j);
				if(Sc2i.equals(Sc2j)){
//					System.out.println("no1");
					return false;
				}
				else{
//					System.out.println(j);
					 result=inserttomap2(h1,Sc2j,j);
					if(result){
						result=inserttomap2(h1,Sc2i,i);
					}
					return result;
				}
			}
			else{
				 Sc2i=getShortCode2(i);
				 result=inserttomap2(h1,Sc2i,i);
				 return result;
			}
		}
		else {
			h1.put(sc, i);
			return true;
		}

	}

	private  boolean inserttomap2(HashMap<String, Integer> h1, String sc2i, int i) {
		// TODO Auto-generated method stub
//		boolean result = false;
			if(h1.containsKey(sc2i)){
				int k =h1.get(sc2i);
				if(sc2i.equals(getShortCode2(k))){
//					System.out.println("no2");
					return false;
				}
				else{
					h1.remove(sc2i);
					H2.put(sc2i, k);
					inserttomap2(h1,getShortCode2(k),k);
//					h1.put(getShortCode2(k), k);
					h1.put(sc2i, i);
					return true;
				}
			}
			else{
				h1.put(sc2i, i);
				return true;
			}

		}

    public static <K, V extends Comparable<? super V>> Map<K, V>
    sortByValue( Map<K, V> map )
{
    List<Map.Entry<K, V>> list =
        new LinkedList<Map.Entry<K, V>>( map.entrySet() );
    Collections.sort( list, new Comparator<Map.Entry<K, V>>()
    {
        public int compare( Map.Entry<K, V> o1, Map.Entry<K, V> o2 )
        {
            return (o1.getValue()).compareTo( o2.getValue() );
        }
    } );

    Map<K, V> result = new LinkedHashMap<K, V>();
    for (Map.Entry<K, V> entry : list)
    {
        result.put( entry.getKey(), entry.getValue() );
    }
    return result;
}

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		CF403QsD f = new CF403QsD();
		f.inp=f.readTeamNames();
		f.start();

	}

}
