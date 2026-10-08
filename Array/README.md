# Ex4:
 ## Chi tiết giải thuật sort Ex4:
 + Khai báo hai con trỏ, con trỏ p1 trỏ vào phần tử đầu tiên, con trỏ p2 trỏ vào phần tử cuối cùng
 + Lần lượt tịnh tiến con trỏ cho đến khi nào con trỏ p1 gặp 1 thì dừng lại, con trỏ p2 gặp 0 thì dừng lại
 + Đảo giá trị của hai con trỏ
 + Lặp lại quá trình trên cho đến khi hai con trỏ tìm thấy nhau

# Ex5:
 ## Chi tiết giải thuật tìm số bị duplicate Ex5:
 + Khai báo hai biến để duyệt là i và j
 + Cho i bắt đầu duyệt từ vị trí đầu tiên của mảng
 + Cho j bắt đầu duyệt từ vị trí cuối cùng của mảng
 + Nếu tại vị trí nào đó của j mà bị duplicate với vị trí của i thì trả về ngay lập tức vì đề bài nói chỉ có một số bị duplicate
 + Tiếp tục duyệt với vị trí tiếp theo của i, cho đến khi nào được kết quả

# Ex6:
 ## Chi tiết giải thuật dãy có thể xếp theo thứ tự tăng dần có kích thước lớn nhất
 + Tạo vectơ để chứa là rs và temp, rs là để lấy kết quả, còn temp là để lấy các dãy tạm thời
 + Khởi tạo hai biến để duyệt i và j
 + Duyệt với i chạy từ vị trí đầu tiên, duyệt j chạy từ vị trí của i
 + Khởi tạo giá trị min và max bằng giá trị tại j
 + Với mỗi giá trị tại j; kiểm tra giá trị đó đã có trong temp chưa. Nếu đã có thì kết thúc duyệt j, lưu mảng temp vào rs và tiếp tục duyệt với i mới; ngược lại nếu chưa có thì đưa giá trị đó lưu vào temp.
 + Sau khi được lưu vào temp, kiểm tra giá trị đó nếu lớn hơn max thì gán cho max hoặc nhỏ hơn min thì gán cho min
 + Kiểm tra dãy đã liên tiếp hay chưa bằng cách kiểm tra khoảng giá trị của max và min
 + Nếu dãy đã liền, số lượng phần tử trong temp lớn hơn trong rs thì gán temp cho rs.
 + Tiếp tục duyệt với giá trị i tiếp theo cho đến khi kết thúc giải thuật
