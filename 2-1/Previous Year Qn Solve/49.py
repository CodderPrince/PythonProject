class Polynomial:
    def __init__(self):
        self.terms = {}  # Dictionary to store coefficients and exponents: {exponent: coefficient}

    def add_term(self, coefficient, exponent):
        self.terms[exponent] = coefficient

    def __str__(self):
        terms = sorted(self.terms.items(), reverse=True)
        polynomial_str = ""
        for exponent, coefficient in terms:
            if coefficient != 0:
                sign = "+" if coefficient > 0 else "-"
                if coefficient == 1 and exponent > 0:
                    polynomial_str += f"{sign}x^{exponent}"
                elif coefficient == -1 and exponent > 0:
                    polynomial_str += f"-x^{exponent}"
                elif exponent == 0:
                    polynomial_str += f"{sign}{abs(coefficient)}"
                else:
                    polynomial_str += f"{sign}{abs(coefficient)}x^{exponent}"
        if polynomial_str == "":
            return "0"
        return polynomial_str[1:]  # Remove the initial '+' sign

def add_polynomials(poly1, poly2):
    """Adds two polynomials represented as Polynomial objects.

    Args:
        poly1: The first polynomial.
        poly2: The second polynomial.

    Returns:
        A new Polynomial object representing the sum.
    """

    result = Polynomial()
    for exponent, coefficient in poly1.terms.items():
        result.add_term(coefficient, exponent)

    for exponent, coefficient in poly2.terms.items():
        if exponent in result.terms:
            result.terms[exponent] += coefficient
        else:
            result.add_term(coefficient, exponent)

    return result

# Example usage:
poly1 = Polynomial()
poly1.add_term(3, 2)
poly1.add_term(1, 0)

poly2 = Polynomial()
poly2.add_term(2, 1)
poly2.add_term(-1, 0)

print(f"Polynomial 1: {poly1}")
print(f"Polynomial 2: {poly2}")

sum_poly = add_polynomials(poly1, poly2)
print(f"Sum: {sum_poly}")