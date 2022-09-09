#include <stdio.h>
#include <stdlib.h>

// Đề bài: Trấn Thành và Hari Won cùng đi Mỹ.
// (Tham khảo thêm: https://kenh14.vn/hari-won-khong-hanh-ly-tien-bac-o-my-khi-tran-thanh-bi-tu-choi-nhap-canh-20160707184524314.chn)

int main(int argc, char *argv[]) {
	
	// Trấn Thành đem theo 5000 đô để cả hai cùng sử dụng
	int tranThanh = 5000;
	
	// Giả sử Trấn Thành mua một cái ví LV mới hết 1000 đô
	// để chứa số tiền mặt mà mình đã đem theo,
	// hỏi Trấn Thành còn lại bao nhiêu?
	//tranThanh = 4000; // Đây là câu sai
						// vì không thể hiện được
						// rằng Trấn Thành đã tiêu 1000 đô
	
	tranThanh -= 1000; // Tự rút 1000 đô để sử dụng
	
	printf("After buying LV wallet, Tran Thanh now has: %d$\n", tranThanh);
	
	// Vì tiền là để sử dụng chung nên khi ấy,
	// Hari Won không cần đem theo ví
	// vì Trấn Thành đã có nói rằng anh sẽ lo hết cho cô
	//int hariWon = 300; // Hari Won tự mang theo 300 USD
						 // để phòng hờ
	
	// Một loại biến mới lạ,
	// không lưu những giá trị bình thường
	// mà đóng vai trò như một quyển danh bạ
	// để lưu toạ độ của nơi chứa giá trị				 
	int* hariWon = &tranThanh; // Hari Won sử dụng
							   // tiền của Trấn Thành
	//	-> Hari Won biết Trấn Thành để ví ở đâu
	
	// Kiểm tra xem có đúng là Hari Won biết vị trí
	// và đang sử dụng ví của Trấn Thành hay không
	printf("Tran Thanh's wallet is at %u\n", &tranThanh);
	printf("Hari has in hand at %u\n", hariWon);
	
	// Hỏi thử Hari Won xem
	// Trấn Thành đang có bao nhiêu tiền
	// (sử dụng *tênBiến để lấy giá trị bên trong
	// sau khi đã biết được địa chỉ)
	printf("Hari Won said, 'Tran Thanh now has %d$.'\n", *hariWon);
	
	// Hari mua đồ hết 1000 đô
	// (bằng tiền trong ví của Trấn Thành)
	*hariWon = *hariWon - 1000;
	
	// Số tiền còn lại trong ví của Trấn Thành
	printf("After used money by Hari, 'I'm now has %d$,' Tran Thanh said\n", tranThanh);
	printf("After used money, 'Tran Thanh now has %d$,' Hari Won said\n", *hariWon);
	
	// Kết luận: tranThanh = *hariWon (để lấy giá trị)
	//			 &tranThanh = hariWon (để lấy địa chỉ)
	return 0;
}