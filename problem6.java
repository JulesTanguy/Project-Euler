class problem6 {

	public static void main(String[] args) {

		final int NOMBRE = 100;
		int result = 0;
		int x = 0;

		for (int i = 1; i<= NOMBRE; i++) {
			result += i * i;
		}

		for (int i = 1; i<= NOMBRE; i++) {
			x = x + i;
		}

		x = x * x;

		System.out.println(x - result);
	}
}
