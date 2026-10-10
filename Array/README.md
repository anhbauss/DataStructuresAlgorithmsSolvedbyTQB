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

# Ex9:
## Chi tiết giải thuật sắp xếp mảng chứa các phần tử 0, 1 và 2
 + Input: Mảng A có N phần tử, các phần tử trong mảng chỉ gồm 0, 1 và 2
 + Đếm số lượng phần tử 0, 1 và 2 trong mảng, lần lượt lưu vào count_0, count_1 và count_2
 + Dựa vào số lượng đã đếm được, chia mảng thành ba vùng: vùng đầu chứa 0, vùng giữa chứa 1 và vùng cuối chứa 2
 + Vùng chứa 0 bắt đầu từ A đến A + count_0
 + Vùng chứa 1 bắt đầu từ A + count_0 đến A + count_0 + count_1
 + Vùng chứa 2 bắt đầu từ A + count_0 + count_1 đến A + count_0 + count_1 + count_2
 + Dùng hai con trỏ p1 và p2 để tìm phần tử sai vùng và phần tử đúng cần đổi vào vùng đó
 + Đưa tất cả phần tử 0 về vùng đầu bằng cách tìm vị trí không phải 0 ở vùng đầu và tìm giá trị 0 ở phần sau rồi đổi chỗ
 + Sau khi vùng đầu đã đúng, đưa tất cả phần tử 1 về vùng giữa bằng cách tìm vị trí không phải 1 ở vùng giữa và tìm giá trị 1 ở phần sau rồi đổi chỗ
 + Sau khi vùng 0 và vùng 1 đã đúng, các phần tử còn lại tự động thuộc vùng 2
 + In ra mảng sau khi đã được sắp xếp theo thứ tự 0, 1, 2

# EX10:
## Chi tiết giải thuật đảo hai mảng sao cho khi ghép liền kề hai mảng thì được một dãy tăng dần
 + Input: Mảng A có N phần tử, mảng B có M phần tử
 + Dùng giải thuật Bubble Sort để sort mảng A và mảng B theo thứ tự tăng dần
 + Tạo con trỏ p1 và p2 ứng với hai vị trí đầu của mảng A và mảng B
 + Duyệt cho con trỏ p1 chạy đến vị trí cuối cùng trong mảng A
 + So sánh giá trị của con trỏ p2 với p1, nếu giá trị tại p2 nhỏ hơn giá trị tại p1 thì đổi giá trị của hai con trỏ
 + Dùng hàm sap_xep để sắp xếp lại mảng B với thứ tự tăng dần
 + Tịnh tiến con trỏ p2 để duyệt cho lần tiếp theo.

# EX11:
## Chi tiết giải thuật điền mảng Y vào mảng X:
 + Input: Mảng X có n phần tử với các chỗ trống được biểu diễn là số 0, mảng Y có m phần tử được sắp xếp theo thứ tự.

 + Dồn các phần tử khác không trong mảng X về cuối mảng. Cụ thể:
 + Khởi tạo hai con trỏ ở cuối mảng là p1 và p2. Lần lượt lùi hai con trỏ về đầu mảng, con trỏ p1 chạy trước, nếu gặp phần tử khác không thì dừng lại; con trỏ p2 chạy sau, nếu gặp phần tử bằng 0 thì dừng lại. Nếu *p1 != 0 và *p2 == 0 thì đảo giá trị của hai con trỏ.

 + Đưa các phần tử trong mảng Y vào các vị trí số 0 đầu tiên của mảng X. Đưa con trỏ p2 đến vị trí khác không đầu tiên của mảng X. Đưa con trỏ p1 đến vị trí đầu tiên của mảng Y, tạo thêm con trỏ p3 nằm ở vị trí đầu tiên của mảng X.

 + Đưa các phần tử vào bằng cách so sánh: nếu *p1 < *p2 thì gán giá trị con trỏ p1 cho con trỏ p3, tịnh tiến con trỏ p1 và p3; còn nếu ngược lại thì gán giá trị con trỏ p2 cho con trỏ p3, tịnh tiến con trỏ p2 và p3.

 + Quá trình này được lặp lại cho đến khi con trỏ p3 gặp p2. 

 
