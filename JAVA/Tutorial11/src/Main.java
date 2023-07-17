import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		String [] members = {"최진혁","최유빈","한아람"};
		
		for(String e : members) {
			System.out.println(e+"이 상담을 받았습니다.");
		}
		// 배열 members 의 값을 변수 e에 담아서 중괄호 구간 안으로 전달해준다
		// for - each문
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt()) {
			System.out.println(sc.nextInt()*1000);
		}
		//hasNextInt()는 입력값이 생기기 전까지 실행을 유보 시킴
		//int형이 아닐 경우 false를 리턴하고 맞을 경우 true 값을 리턴함
		
	}

}
