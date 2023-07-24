# MINI_PROJECT(매표소 프로그램 만들기)


## 문제


[Project_Content.pptx](https://github.com/Hosama92/Web_class/files/12142704/Project_Content.pptx)

## 코드 구조
```bash
├── collum.h
│   ├── Collum
│   │   ├── list_up
│   │   ├── receipt
│   │   ├── list_to_receipt
│   │   ├── age_checker
│   │   └── for_CSV
│   ├── Now
│   │   ├── date
├── collum.cpp
│   │   ├── list_up
│   │   ├── receipt
│   │   ├── list_to_receipt
│   │   ├── age_checker
│   │   ├── for_CSV
│   │   └── date
└── main.cpp
``` 

## 코드 설명
- **collum.h** : 헤더 파일, 각 클래스와 맴버를 선언해놓음
- **collum.cpp** : 헤더 파일에서 선언한걸 기능구현함
- **main.cpp** : *while*문을 통해 프로그램 구현
---------------------------------
- list_up : 프로그램이 진행되는 부분, 값을 받아서 각 함수로 할당해주는 역할
- receipt : 영수증의 내용을 출력
- list_to_receipt : list에서 저장한 배열값을 receipt로 보내는 역할
- age_checker : 주민등록번호를 받아서 연령대를 계산후 적절한 *age_kind*의 인덱스 값을 리턴
- for_CSV : 내용을 파일로 출력해서 CSV형태로 저장
- date : 현재 날짜를 출력하기위한 클래스
