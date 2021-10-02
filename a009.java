import java.util.Scanner;
public class a009 {  
    public static void main(String[] args) {      
    	Scanner sc = new Scanner(System.in);
    	String str= sc.next();
    	int i,k;
    	char n=0;
    	for(i=0;i<str.length();i++)
    	{
    		k=0;
    		k=str.charAt(i);
    		k=k-7;  
    		n=(char)k;
    		System.out.print(n);
    	}
    }
}  

 