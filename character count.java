/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		String str="Beez Labs is into Automation";
		int result=0;
		for(int index=0;index<str.length();index++){
		    if(str.charAt(index)!=' '){
		        result++;
		    }
		}
		    System.out.println("Number of characters:"+result);
		
	}
}
