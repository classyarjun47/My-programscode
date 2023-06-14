

//? blank variable 

class Bank{

	final int num;
	
	void assignvalue(final int number) {
		
		//num=number;                        //! you cant assign value to blank variable
		//number = 200;
	}
	
	Bank(){                                  //? but you can assign value using constructer
		num=200;
		System.out.println(num);
	}

}

public class finalvar {

	public static void main(String[] args) {
		
		Bank b = new Bank();
		
	}
}
