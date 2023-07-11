
public class Main {
		
	final static int N = 30;
	
	public static void main(String[] args) {
		/*
		int score = 95;
		if(score >= 90) {
			System.out.println(" A+ 입니다.");
		}
		else if(score>=80)
		{
			System.out.println("B+ 입니다");
		}
		else if(score >=70) {
			System.out.println("C+ 입니다");
		}
		else {
			System.out.println("F 입니다");
		}
		
		//자바는 String을 비교할떄 equal()을 이용합니다
		// 그 이유는 String은 다른 자료형과 다른 문자열 자료형이기 때문입니다.
		String a= "Man";
		int b= 0;
		if(a.equals("Man")) {
			System.out.println("남자입니다");
			
		}
		else
		{
			System.out.println("남자가 아닙니다");
		}
		
		if(b==3) {
			System.out.println("b는 3입니다");
			
		}
		else
		{
			System.out.println("3이 아닙니다");
		}
		
		if(a.equalsIgnoreCase("man") && b == 0 ) // equalsIgnoreCase는 대소문자 상관 없이 같은지
		{
			System.out.println("참입니다");
		}
		else
		{
			System.out.println("거짓 입니다");
		}
		*/
		int i =1, sum = 0;
		while(i<=1000) {
			sum += i++;
		}
		System.out.println("1부터 1000까지의 합은 " +sum + "입니다");
		
	}

}
