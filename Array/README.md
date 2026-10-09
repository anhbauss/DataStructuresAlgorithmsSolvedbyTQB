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

# Ex7:
 ## Chi tiết giải thuật tìm các dãy có tổng bằng số target
 + Tìm mảng sum prefix là tổng của các dãy con to dần từ 1 đến n
 + Một subarray có tổng bằng target khi độ lệch của hai phần tử phân kỳ trong mảng sum prefix bằng target
 + Chỉ số của phần tử đầu tiên của subarray là vị trí phần tử thứ nhất của mảng sum prefix và phần tử cuối cùng là vị trí phần tử thứ hai của mảng sum prefix + 1
 + Duyệt và đưa ra các mảng con
 + Tìm mảng lớn nhất bằng cách độ lệch của chỉ số phần tử đầu tiên và cuối cùng của mảng subarray là lớn nhất

# Ex8:
## Chi tiết giải thuật tìm dãy có tổng bằng 0 lớn nhất (số phần tử 0 bằng số phần tử 1)
 + Tạo một vector<pair<int,int>> để lưu các subarray có tổng bằng 0 lớn nhất
 + Tạo một vector<int> temp để lưu trữ tạm thời subarray
 + Duyệt qua các phần tử trong mảng input ban đầu bằng biến i, mục đích để tìm các subarray bắt đầu với phần tử tại i
 + Xóa vector<int> lưu trữ tạm thời trước đó để chuẩn bị cho subarray mới
 + Tạo biến count_0,count_1 để đếm các giá trị 0 và 1 trong subarray, biến max_size để biết kích thước subarray lớn nhất đã nhận được
 + Duyệt qua các phần tử trong mảng input với biến j, bắt đầu với vị trí i
 + Lần lượt đẩy các phần tử trong mảng input vào, nếu phần tử đó là 0 thì tăng count_0 lên 1 đơn vị, ngược lại nếu là 1 thì tăng count_1 lên 1 đơn vị.
 + Kiểm tra xem nếu count_0 == count_1 thì tức là subarray đang có tổng bằng 0
 + Lúc này, nếu thêm điều kiện kích thước subarray lớn hơn hoặc bằng max_size: gán max_size= temp.size(); lớn hơn thì xóa và đẩy vào data_structure ban đầu; bằng nhau thì đẩy vào.
