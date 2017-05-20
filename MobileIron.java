import java.util.Scanner;

public class MobileIron {
	final static int processTypeLength = 6;
	final static int processValueLength = 4;

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNextLine()) {
			String line = sc.nextLine();
			int offset = 0;
			while (offset < line.length()) {
				String type = line.substring(offset, offset + processTypeLength);
				offset += processTypeLength + 1;
				int length = Integer.parseInt(line.substring(offset, offset + processValueLength));
				offset += processValueLength + 1;
				String value = line.substring(offset, offset + length);
				offset += length ;
				switch (type) {
				case "UPPRCS":
					System.out.println("UPPRCS-" + value.toUpperCase());
					break;
				case "REPLCE":
					System.out.println("REPLCE-THIS STRING");
					break;
				default:
					System.out.println("Type not valid");
				}
			}
		}
	}
}