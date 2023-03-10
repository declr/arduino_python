/*
 제목      : 7세그먼트로 숫자 표시하기
 내용      : 7세그먼트를 사용하여 0부터 9까지 숫자를 표시해 봅시다. 
 */

// 7세그먼트는 총 8개의 LED로 구성이 되어 있습니다.
// 본 예제에서는 캐소드(Common Cathode) 타입을 사용하므로, HIGH(1) 값으로 설정합니다.
// 켜고자 하는 LED의 핀에 HIGH(1) 값을 보내도록 설정합니다.
// 반대로, 공통 애노드(Common Anode) 타입의 7세그먼트을 사용할 경우, LOW(0) 값으로 설정합니다.
// 7세그먼트 각각 LED에 핀을 할당합니다. {A, B, C, D, E, F, G, H}
int segmentLEDs[] = {2, 3, 4, 5, 6, 7, 8, 9};
// 지정된 LED 개수
int segmentLEDsNum = 8;

// 각 숫자에 대한 LED 설정 값을 정의합니다.
// 숫자에 매칭되는 LED의 로직레벨을 LOW(0) 상태로 설정합니다.
int digitForNum[10][8] = {
// {A, B, C, D, E, F, G, H}
   {1, 1, 1, 1, 1, 0, 1, 0}, //0
   {0, 1, 1, 0, 0, 0, 0, 0}, //1
   {1, 1, 0, 1, 1, 1, 0, 0}, //2
   {1, 1, 1, 1, 0, 1, 0, 0}, //3
   {0, 1, 1, 0, 0, 1, 1, 0}, //4
   {1, 0, 1, 1, 0, 1, 1, 0}, //5
   {1, 0, 1, 1, 1, 1, 1, 0}, //6
   {1, 1, 1, 0, 0, 0, 0, 0}, //7
   {1, 1, 1, 1, 1, 1, 1, 0}, //8
   {1, 1, 1, 1, 0, 1, 1, 0}  //9
   
};

// 실행시 가장 먼저 호출되는 함수이며, 최초 1회만 실행됩니다.
// 변수를 선언하거나 초기화를 위한 코드를 포함합니다.
void setup() {
   // 7세그먼트 각각 LED에 연결된 핀을 OUTPUT으로 설정합니다.
   for (int i = 0 ; i < segmentLEDsNum ; i++) {
      pinMode(segmentLEDs[i], OUTPUT);
   }
}

// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop() {
   // 0부터 9까지 숫자를 순서대로 표시합니다.
   for (int i = 0 ; i < 10 ; i++) {
      // 각 숫자에 대한 각각 LED의 로직레벨을 설정합니다.
      for (int j = 0 ; j < segmentLEDsNum ; j++) {
         digitalWrite(segmentLEDs[j], digitForNum[i][j]);
      }
      // 1초 동안 대기합니다.
      delay(1000);
   }
   delay(1000);
}