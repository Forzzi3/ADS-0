// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a == 0 || b == 0)
		return a + b;
	if (a > b)
		return nod(a - b, b);
	else
		return nod(a, b - a);
}
