def is_palindrome(x):
    # Chuyển số x thành chuỗi để dễ kiểm tra
    x_str = str(x)
    
    # So sánh chuỗi với phiên bản đảo ngược của nó
    return x_str == x_str[::-1]

x = int(input())

if is_palindrome(x):
    print("true")
else:
    print("false")
