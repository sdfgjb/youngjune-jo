
public class Main {
	final static int SECOND= 1000;
	public static void main(String[] args) {
		int minute = SECOND / 60;
		int second = SECOND % 60;
		int b = 10;
		int a = 10;
		int x = 20;
		int y = 30;
		System.out.println("현재의 a는" + a + "입니다.");
		System.out.println("a와 b가 같은가요? " + (a == b));

		System.out.println("최댓값은"+ max(x,y) + "입니다");
		//pow 거듭 제곱
		double r = Math.pow(3.0, 20.0);
		System.out.println("3의 20제곱은 "+(int)r + "입니다");
		
	}
	// 조건 ? 참 :거짓
	static int max(int g, int h) {
		int result = ( g > h ) ?  g : h;
		return result;
	}
}
