import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Main {

	public static void main(String[] args) {
		//Scanner를 통해 입출력 가능
		// nextInt는 정수를 입력 받고, next()는 문자열을 입력받음
		Scanner sc= new Scanner(System.in);
		System.out.print("정수를 입력해주세요");
		int i = sc.nextInt();
		System.out.println("입력된 정수는 "+ i + "입니다");
		
		File file =new File("input.txt");
		try {
			Scanner ac = new Scanner(file);
			while(ac.hasNextInt()) {
				System.out.println(ac.nextInt()*100);
			}
			ac.close();
		} catch (FileNotFoundException e) {
			System.out.println("파일을 읽어오는 도중 오류가 발생했습니다.");
			
		}
			
	
	}

}
