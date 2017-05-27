import java.io.*;
import java.sql.*;

class Learnjava{
	
	void m() throws IOException,SQLException{
		throw new IOException();
	}
	protected void finalize (Learnjava lj){
			lj=null;
		}
	public static void main(String[] args) {
		Learnjava lj=new Learnjava();
		try{
			lj.m();
			
			System.gc();
		}
		catch(Exception e){
			System.out.println("Found an Exception--"+e);
		}
		finally{
			System.out.println("Bye");
			
		}
		lj.finalize(lj);
	}
}