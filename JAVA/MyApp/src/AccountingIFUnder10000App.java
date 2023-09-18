
public class AccountingIFUnder10000App {

	public static void main(String[] args) {
		double valueOfSupply = 12345.0;
		double vatRate = 0.1;
		double expenseRate = 0.3;
		double vat = valueOfSupply * vatRate;
		double total = valueOfSupply+vat;
		double expense = valueOfSupply * expenseRate;
		double income = valueOfSupply - expense;
		double dividened1 = income * 1;
		double dividened2 = income * 0;
		double dividened3 = income * 0;
		
		System.out.println("value of supply : " + valueOfSupply);
		System.out.println("VAT : " + vat);
		System.out.println("Total : " + total);
		System.out.println("Expense : " + expense);
		System.out.println("Income : " + income);
		System.out.println("Dividened 1 : " + dividened1);
		System.out.println("Dividened 2 : " + dividened2);
		System.out.println("Dividened 3 : " + dividened3);

	}

}
