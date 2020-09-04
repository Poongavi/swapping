/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
    static int numberofones(int startrange,int endrange){
        int count=0;
        for(int i=startrange;i<=endrange;i++){
            String s=String.valueOf(i);
            count=count+s.split("1",-1).length-1;
        }
        return count;
    }
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Startrange:");
		int startrange=sc.nextInt();
		System.out.print("Endrange:");
		int endrange=sc.nextInt();
		System.out.println(numberofones(startrange,endrange));
		
	}
}
