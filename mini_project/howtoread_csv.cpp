//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//    std::ifstream file("test.csv");
//
//    if (!file.is_open()) {
//        std::cerr << "파일을 열 수 없습니다." << std::endl;
//        return 1;
//    }
//
//    std::string line;
//    while (std::getline(file, line)) {
//        std::cout << line << std::endl;
//    }
//
//    file.close();
//
//    return 0;
//}
//*******************************************************************

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//
//// 단어(문자열)과 숫자를 모두 담을 수 있는 유니온(union) 정의
//union WordOrNumber {
//    char word[50]; // 단어(문자열)를 저장할 공간
//    int number;    // 숫자를 저장할 공간
//};
//
//int main() {
//    WordOrNumber array[5];
//
//    // 배열에 값 할당하기 (예시)
//    strcpy(array[0].word, "Hello");  // 단어(문자열) 할당
//    array[1].number = 42;            // 숫자 할당
//    strcpy(array[2].word, "World");  // 단어(문자열) 할당
//    array[3].number = 123;           // 숫자 할당
//    strcpy(array[4].word, "C++");    // 단어(문자열) 할당
//
//    // 배열 값 출력하기 (예시)
//    for (int i = 0; i < 5; ++i) {
//        if (i % 2 == 0)
//        {
//            std::cout << "Word: " << array[i].word << std::endl;
//        }
//        else
//        {
//            std::cout << "Number: " << array[i].number << std::endl;
//        }
//    }
//
//    return 0;
//}

//******************************************************************



//#include <iostream>
//#include <fstream>
//
//int main() {
//     //배열 초기화
//    int for_write_result[6] = { 20191101, 1, 2, 3, 4, 5 }; // 예시 값으로 변경하여 사용하세요.
//    int for_write_result2[6] = { 20230101, 6, 7, 8, 9, 10 }; // 예시 값으로 변경하여 사용하세요.
//
//     //파일 열기 (추가 모드)
//    std::ofstream outputFile("test.csv", std::ios_base::app);
//
//     //파일 열기에 실패한 경우 예외 처리
//    if (!outputFile.is_open()) {
//        std::cerr << "파일을 열 수 없습니다." << std::endl;
//        return 1;
//    }
//
//     //배열 값을 CSV 파일에 저장 (for_write_result)
//    for (int i = 0; i < 6; ++i) {
//        outputFile << for_write_result[i];
//
//         //마지막 값인 경우 줄 바꿈 문자를 넣지 않음
//        if (i != 5) {
//            outputFile << ",";
//        }
//    }
//
//     //새로운 줄로 이동
//    outputFile << std::endl;
//
//     //배열 값을 CSV 파일에 저장 (for_write_result2)
//    for (int i = 0; i < 6; ++i) {
//        outputFile << for_write_result2[i];
//
//         //마지막 값인 경우 줄 바꿈 문자를 넣지 않음
//        if (i != 5) {
//            outputFile << ",";
//        }
//    }
//
//     //파일 닫기
//    outputFile.close();
//
//    std::cout << "CSV 파일에 저장되었습니다." << std::endl;
//
//    return 0;
//}


//*********************************************
//#define _CRT_SECURE_NO_WARNINGS //당일 날짜 출력해주는 함수
//#include <ctime>
//#include <stdio.h>

//
//int main() {
//	time_t timer;
//	struct tm* t;
//	timer = time(NULL);
//	t = localtime(&timer);
//	printf("%04d%02d%02d", t->tm_year+1900,t->tm_mon+1,t->tm_mday);
//
//}