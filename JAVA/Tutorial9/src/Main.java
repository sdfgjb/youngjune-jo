
public class Main {
	public static char function(String input) {
		return input.charAt(input.length() -1 );
	}
	//input.length()는 해당 문자열의 길이를 의미함
	public static void main(String[] args) {
		System.out.println("Hello World의 마지막 단어는"+function("Hello World"));
	}

}
