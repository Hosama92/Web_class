//#include <iostream>
//#include <fstream>
//#include <string>
//
//int main() {
//    std::ifstream file("test.csv");
//
//    if (!file.is_open()) {
//        std::cerr << "������ �� �� �����ϴ�." << std::endl;
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
//// �ܾ�(���ڿ�)�� ���ڸ� ��� ���� �� �ִ� ���Ͽ�(union) ����
//union WordOrNumber {
//    char word[50]; // �ܾ�(���ڿ�)�� ������ ����
//    int number;    // ���ڸ� ������ ����
//};
//
//int main() {
//    WordOrNumber array[5];
//
//    // �迭�� �� �Ҵ��ϱ� (����)
//    strcpy(array[0].word, "Hello");  // �ܾ�(���ڿ�) �Ҵ�
//    array[1].number = 42;            // ���� �Ҵ�
//    strcpy(array[2].word, "World");  // �ܾ�(���ڿ�) �Ҵ�
//    array[3].number = 123;           // ���� �Ҵ�
//    strcpy(array[4].word, "C++");    // �ܾ�(���ڿ�) �Ҵ�
//
//    // �迭 �� ����ϱ� (����)
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
//     //�迭 �ʱ�ȭ
//    int for_write_result[6] = { 20191101, 1, 2, 3, 4, 5 }; // ���� ������ �����Ͽ� ����ϼ���.
//    int for_write_result2[6] = { 20230101, 6, 7, 8, 9, 10 }; // ���� ������ �����Ͽ� ����ϼ���.
//
//     //���� ���� (�߰� ���)
//    std::ofstream outputFile("test.csv", std::ios_base::app);
//
//     //���� ���⿡ ������ ��� ���� ó��
//    if (!outputFile.is_open()) {
//        std::cerr << "������ �� �� �����ϴ�." << std::endl;
//        return 1;
//    }
//
//     //�迭 ���� CSV ���Ͽ� ���� (for_write_result)
//    for (int i = 0; i < 6; ++i) {
//        outputFile << for_write_result[i];
//
//         //������ ���� ��� �� �ٲ� ���ڸ� ���� ����
//        if (i != 5) {
//            outputFile << ",";
//        }
//    }
//
//     //���ο� �ٷ� �̵�
//    outputFile << std::endl;
//
//     //�迭 ���� CSV ���Ͽ� ���� (for_write_result2)
//    for (int i = 0; i < 6; ++i) {
//        outputFile << for_write_result2[i];
//
//         //������ ���� ��� �� �ٲ� ���ڸ� ���� ����
//        if (i != 5) {
//            outputFile << ",";
//        }
//    }
//
//     //���� �ݱ�
//    outputFile.close();
//
//    std::cout << "CSV ���Ͽ� ����Ǿ����ϴ�." << std::endl;
//
//    return 0;
//}


//*********************************************
//#define _CRT_SECURE_NO_WARNINGS //���� ��¥ ������ִ� �Լ�
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