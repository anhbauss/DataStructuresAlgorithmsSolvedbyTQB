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

# EX12:
## Giải thuật tìm mảng số 1 liên tục sao cho mảng đó chỉ có một số 0 và tìm index của số 0 đó.
## Output: Có thế có rất nhiều vị trí 0 sao cho khi thay thành 1 thì đều cho ra cùng một mảng có độ dài bằng nhau và là lớn nhất.
## Ý tưởng: 
Tìm những mảng con sao cho mảng đấy chỉ bao gồm toàn số 1 hoặc chỉ có 1 số 0. 
+ Trường hợp nếu mảng đó chỉ toàn số 1 thì kiểm tra nếu đổi số 0 ở vị trí liền trước và liền cuối thành số 1 thì mảng đó có lớn nhất không. Nếu lớn nhất thì add vị trí liền trước và vị trí liền sau của mảng, nếu không lớn nhất thì vẫn lấy giá trị cũ
+ Trượng hợp nếu mảng đó chỉ có 1 số 0 thì tiếp tục kiểm tra mảng đó có lớn nhất không. Nếu lớn nhất thì thay đổi giá trị index thành giá trị mới.
## Chi tiết giải thuật:
 + Khai báo hai con trỏ p1 và p2 lần lượt ở vị trí đầu tiên và cuối cùng của mảng.
 + Duyệt con trỏ p2 bằng cách lùi p2 cho đến khi *p2==1 thì dừng lại.
 + Tạo biến tổng kết số phần tử lớn nhất của mảng con là max_count và vector<int> index để lưu trữ các index trong trường hợp các mảng đó có cùng số phần tử và là lớn nhất
 + Lúc này, với mỗi vị trí của p2; ta tịnh tiến con trỏ p1 cho đến khi *p1==1 thì dừng lại.Tạo các biến đếm số các số 0 là count_0 và biến đếm số phần tử là count_num. 
 + Lúc này,tại một con trỏ mới *ct duyệt từ p1 đến p2. Nếu *ct==0 thì tăng count_0 và kiểm tra ngay nếu count_0 vượt quá 1 thì break vòng lặp vì đoạn từ p1 đến p2 không tạo thành mảng con thỏa mãn, nếu count_0 chưa vượt quá 1 thì tăng count_num; lưu index vào biến tạm là temp_index. Nếu *ct ==1 thì tăng count_num.
 + Sau khi đếm được số phần tử trong mảng con đó và tìm được vị trí số 0 thì kiểm tra: Nếu count_0==0 thì chứng tỏ mảng lúc này đang không có số không, nghĩa là index nằm ở vị trí liền trước của mảng là p1-- và liền sau của mảng là p2++; lúc này dùng một CTDL pair<int,int> để lưu hai index này và tạm gán temp_index=-1
 + Khi đã kiểm tra, bây giờ đến lúc kiểm tra count_num có lớn hơn max_size hay không. Nếu lớn hơn xóa hết vector cũ và kiểm tra xem temp_index có bằng trừ -1 không, trong trường hợp nếu bằng thì phải đẩy hai phần từ trong pair vào vector và kèm thêm điều kiện là hai phần tử ấy chưa xuất hiện trong vector (dung hàm "tim" trong ALGORITHM.h), trong trường hợp không bằng thì đẩy temp_index vào vector và kèm thêm điểu kiện là temp_index chưa xuất hiện trong vector(tiep tuc dung ham "tim"). Nếu nhỏ hơn thì giữ nguyên vector và max_count. Nếu bằng thì làm như trường hợp lớn hơn nhưng không xóa vector cũ.

# EX13:
## Ý tưởng: 
 + Viết một hàm tìm hai số dương nhất (hai số lớn nhất trong mảng).
 + Lần lượt đảo dấu của các phần tử trong mảng
 + Tiếp tục tìm hai số dương nhất trong mảng hiện tại, tức là hai số âm nhất trong mảng ban đầu.
 + Lần lượt nhất hai số dương nhất và hai số âm nhất với nhau. Nếu cái nào lớn hơn thì lấy
## Chi tiết giải thuật: Chọn ra hai phần tử khác nhau trong mảng sao cho khi nhân chúng với nhau, tích thu được là lớn nhất so với tất cả các cặp khác có thể tạo ra trong mảng.
 + Tạo một CTDL pair<int,int> để lưu trữ các cặp giá trị dương nhất và âm nhất trong mảng.
 + Khởi tạo hai biến để lưu trữ các giá trị trong mảng khi duyệt là max_1 và max_2 và bé nhất là min_1 và min_2.
 + Hàm tìm cặp giá trị lớn nhất find_max_in_arr() trả về một pair<int,int>; cụ thể trong hàm này: Lần lượt duyệt từng phần tử A[i] trong mảng, nếu lớn hơn max_2 thì gán vào max_2. Bước tiếp theo có thế đổi giá trị của max_1 và max_2 vì mặc định max_1 là giá trị lớn nhất.
 + Gọi hàm find_max_in_arr() để tìm pair<int,int> max
 + Lần lượt duyệt từng phần tử trong mảng và đảo dấu chúng.
 + Gọi hàm find_max_in_arr() để tìm pair<int,int> min
 + Kiểm tra xem tích của hai phần từ trong pair nào lớn nhất thì in ra.
 + Kết thúc giải thuật

# EX14:
## Ý tưởng:
 + Do điều kiện chỉ được sử dụng các thư viện chuẩn, để tạo số ngẫu nhiên thì bắt buộc phải tận dụng mảng ngẫu nhiên mà người dùng nhập vào.
## Chi tiết giải thuật: Đảo các số trong mảng một cách ngẫu nhiên
 + Giải thuật hàm tạo số ngẫu nhiên: Input: a,c, X_n, n( số phần tử trong mảng). Output: (a*X_n+c) mod n vì số ngẫu nhiên là chỉ số mảng nên bắt buộc phải 0<=output<=n. Bên trong hàm xáo trộn mảng: Chọn giá trị ban đầu của a và c bằng |A[0]|%n và |A[1]%n, X_0= a.c; sau mỗi lần duyệt đến vị trí j chọn lại: a= |A[j]|%n và c= a.c%n để đảm bảo tính ngẫu nhiên.   
 + Giải thuật hàm xáo trộn mảng: Dùng biến i để duyệt lần lượt các giá trị của trong mảng, tại một giá trị i nhất định; dùng hàm tạo số ngẫu nhiên để tạo ra index được lưu vào temp của giá trị cần đảo với giá trị tại i. Đảo hai giá trị A[i] và A[temp].
 + Tiếp tục duyệt cho đến hết mảng.

# EX15:
## Chi tiết giải thuật tạo mảng hình sóng: Giả trị ở giữa lớn hơn giá trị liền trước và liền sau:
 + Dùng giải thuật buble sort hoặc giải thuật sort nào khác để sắp xếp mảng theo thứ tự tăng dần.
 + Dùng biến i làm index để duyệt mảng, i bắt đầu với phần tử thứ hai (i=1)
 + Tại mỗi vị trí có index lẻ thì đổi giá trị phần tử tại vị trí i với phần tử ngay sau nó
 + Tăng biến i lên 2 đơn vị và duyệt cho đến hết mảng sẽ cho ra mảng cần tìm.

# EX16:
## Chi tiết giải thuật tìm index cân bằng của mảng: Tổng bên trái và tổng bên phải bằng nhau: 
 + Tính tổng của tất các phần tử trong mảng: khởi tạo biến sum = 0, dùng biến i duyệt qua các phần tử rồi cộng vào biến sum.mảng
 + Khởi tạo một CTDL vector<int> index để lưu các giá trị index cân bằng thỏa màn.
 + Khởi tạo một biến khác để tính tổng các phần tử trong các lần duyệt: tong_trai =0.
 + Dùng biến i để duyệt các phần tử trong mảng, tại mỗi vị trí:
     * Tìm tổng ở dãy bên phải bằng cách: Lấy sum -  tong_trai - A[i].
     * Kiểm tra nếu i bằng 0 thì tổng phải (sum-A[0]) có bằng 0 không. Nếu bằng thì đẩy vào index, nếu không bằng thì cộng A[i] vào tổng trái và tiếp tục duyệt.
     * Kiểm tra nếu i bằng n-1 thì tong_trai có bằng 0 không. Nếu bằng thì đẩy n-1 vào index, nếu không thì kết thúc vòng lặp
     * Nếu i không thuộc 2 trường hợp trên thì kiểm tra tổng phải có bằng tong_trai hay không, nếu bằng thì đẩy i vào index, nếu không bằng thì cộng A[i] vào tong_trai va tiếp tục duyệt.
 + Tiếp tục như trên cho đến khi duyệt hết mảng.
 + In các giá trị trong vector<int> index ra màn hình.

# EX17:
## Ý tưởng: 
+ Dùng giải thuật bubble sort hoặc sort khác để sắp xếp mảng theo giá trị tăng dần. Mục đích để gom các phần từ giống nhau lại với nhau. Duyệt để tìm phần tử xuất hiện nhiều nhất.
## Chi tiết giải thuật tìm phần tử chiếm đa số trong mảng:
 + Dùng giải thuật bubble sort hoặc sort khác để sắp xếp mảng theo thứ tự tăng dần.
 + Tạo biến count_max để lưu số lần xuất hiện của phần tử nhiều nhất cho đến hiện tại, count để đếm số lần xuất hiện của chính phần tử đang duyệt, temp để lưu tạm giá trị của phần tử đang duyệt, majority để lưu phần tử có số lần xuất hiện nhiều nhất cho đến hiện tại
 + Gán count_max=0, temp=majority=A[0], count=1.
 + Dùng biến i làm index để duyệt các phần tử trong mảng:
   * Với mỗi giá trị trong mảng: Nếu i=0 đơn giản tăng count lên 1 đơn vị và duyệt tiếp phần tử tiếp theo. 
   * Nếu phần tử hiện tại bằng temp (hay phần tử trước đó) thì tăng count lên 1 và tiếp tục duyệt. 
   * Nếu phần tử hiện tại khác temp thì kiểm tra xem count có lớn hơn count_max, nếu đúng thì gán count cho count_max và temp cho majority, nếu sai thì reset lại biến count=1, temp = A[i] và tiếp tục duyệt.
 + Sau khi kết thúc vòng lặp, chỉ còn các phần tử nằm cuối mảng là chưa được kiểm tra. Kiểm tra count lúc này có lớn hơn count_max không. Nếu có thì gán count cho count_max và majority=A[n-1]. Nếu không thì giữ nguyên giá trị.
 + Kiểm tra count_max có lớn hơn N/2 không? Nếu có thì in ra.