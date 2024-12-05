#include <stdio.h>

int main(){
	
	int arr[100]; 
	int choice;
	int Index;
	int n=0;
	int correct=0; 
	int value, found=0;
	do{
		printf("     \nMENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang \n");
		printf("2. In ra gia tri cac phan tu theo mang theo dang arr[i]\n");
		printf("3. Dem so luong cac so hoan hao co trong mang \n");
		printf("4. Tim gia tri lon thu 2 trong mang , khong duoc sap xep mang\n");
		printf("5. Them 1 phan tu vao vi tri ngau nhien trong mang \n");
		printf("6. Xoa phan tu tai 1 vi tri cu the \n");
		printf("7. Sap xep mang theo thu tu tang dan \n");
		printf("8. Cho nguoi dung nhap 1  phan tu vao mang kiem tra xem phan tu do co ton tai hay khong\n ");
		printf("9. Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc so le dung sau\n"); 
		printf("10. Dao nguoc thu tu cua cac phan tu co trong mang \n");
		printf("11. Thoat chuong trinh ");
		printf("\nMoi ban nhap lua chon :\n"); 
		printf("\n");
		scanf("%d", &choice);
		switch (choice){
			case 1://Nhap so phan tu va gia tri cho mang
				printf("Nhap so phan tu : ");
                scanf("%d", &Index);
                if(Index<0||Index>100){
            		printf("so phan tu ko hop le, moi nhap lai : ");
			    }else{
					printf("Nhap cac phan tu cua mang:\n");
                	for (int i = 0; i < Index; i++) {
                    printf("arr[%d]: ", i);
                    scanf("%d", &arr[i]);
				} 
		    	}
		    	break;
			case 2://In ra gia tri cac phan tu theo mang theo dang arr[i]
				printf("cac phan tu vua nhap la :"); 
			    for(int i=0;i<Index;i++){
					printf("  %d   ", arr[i]); 
				}
			break; 
			case 3://Dem so luong cac so hoan hao co trong mang
				printf("so luong cac so hoan hao co trong mang la :");
			break;
			case 4://Tim gia tri lon thu 2 trong mang , khong duoc sap xep mang
				
				
			break;
			case 5://Them 1 phan tu vao vi tri ngau nhien trong mang
				 if (Index >= 100) {
                    printf("khong the them phan tu!\n");
                } else {
                    int value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &value);
                    arr[Index] = value;
                    Index++;
                    printf("mang sau khi them phan tu :\n");
                    for (int i = 0; i < Index; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
			        
                }
				
			break;
			case 6://Xoa phan tu tai 1 vi tri cu the
				 if (Index == 0) {
                    printf(" khong co phan tu de xoa\n");
                } else {
                    printf("Nhap vi tri can xoa : ", Index - 1);
                    scanf("%d", &n);
                    if (n < 0 || n >= Index) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = n; i < Index - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        Index--;
                        printf("mang sau khi xoa phan tu :\n");
                        for (int i = 0; i < Index; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                    }
                	}
			break;
			case 7://Sap xep mang theo thu tu tang dan
				for (int i = 0; i < Index ; i++) {
					int key =arr[i] ;
					int j =i-1;
                    while ( j >= 0 && arr[j]>key) {
                        arr[j+1] = arr[j];
                        j=j-1;
                    }
                    arr[j+1]=key;
                }
            		printf("mang sau khi dc sap xep la  :\n");
                	for (int i = 0; i <Index; i++) {
                    printf("%d ", arr[i]);
                }  
			break;
			case 8://Cho nguoi dung nhap 1  phan tu vao mang kiem tra xem phan tu do co ton tai hay khong
			printf("nhap phan tu muon tim : ");
             scanf("%d", &Index);
 
            for (int i = 0; i < Index; i++) {
            if (arr[i] == Index) {
        	printf("vi tri phan tu ban muon tim la : %d", arr[Index] ); 
            correct = 1;
            break;
        	}
        	}
            if (Index!=correct){
        	printf("phan tu ko co trong mang "); 
        	}
        	break; 
			case 9://Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so chan dung truoc so le dung sau
			break;
			case 10://Dao nguoc thu tu cua cac phan tu co trong mang
    		for (int i = 0; i < 100/2 ; i++) {
        		Index = arr[i];
        		arr[i] = arr[100-i-1];
	        	arr[100-i-1] = Index;
	    }
    		for (int i = 0; i <100; i++) {
        	printf("%d ", arr[i]);
    	}
			break;
    }
	}while(choice!=11);
	   printf("Thoat chuong trinh\n");
	   return 0;
}


