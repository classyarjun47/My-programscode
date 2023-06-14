abstract class animal {

	animal() {
		System.out.println("all animal");
	}

	public abstract void sound();

}

class dog extends animal {

	dog() {
		super();
	}

	public void sound() {
		System.out.println("dog are bark");
	}

}
	class lion extends animal {

		public void sound() {

			System.out.println("lion are garjan");
		}

	}

public class abstrexer {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		dog d = new dog();
        lion l = new lion();
		d.sound();  l.sound();
	}

}
