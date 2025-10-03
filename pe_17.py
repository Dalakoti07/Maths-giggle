def letters_1_to_19(n: int) -> int:
    lookup = {
        1: 3, 2: 3, 3: 5, 4: 4, 5: 4,
        6: 3, 7: 5, 8: 5, 9: 4, 10: 3,
        11: 6, 12: 6, 13: 8, 14: 8, 15: 7,
        16: 7, 17: 9, 18: 8, 19: 8,
    }
    return lookup.get(n, 0)


def letters_tens(n: int) -> int:
    lookup = {
        20: 6, 30: 6, 40: 5, 50: 5,
        60: 5, 70: 7, 80: 6, 90: 6,
    }
    return lookup.get(n, 0)


def letters_under_100(n: int) -> int:
    if n == 0:
        return 0
    if n <= 19:
        return letters_1_to_19(n)
    tens_part = (n // 10) * 10
    ones_part = n % 10
    return letters_tens(tens_part) + (letters_1_to_19(ones_part) if ones_part else 0)


def letters_in_number(n: int) -> int:
    if n == 1000:
        return 3 + 8  # one thousand
    if n >= 100:
        hundreds = n // 100
        remainder = n % 100
        count = letters_1_to_19(hundreds) + 7  # hundred
        if remainder:
            count += 3  # and
            count += letters_under_100(remainder)
        return count
    return letters_under_100(n)


def compute_total_letters_1_to_1000() -> int:
    return sum(letters_in_number(i) for i in range(1, 1001))


ans = compute_total_letters_1_to_1000()


if __name__ == "__main__":
    print(ans)