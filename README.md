# 2022 동계 모각소

## 파이썬으로 하는 아두이노

##### python version: python3.11

### 목차
1. [2023년 1월 13일 17시부터 21시까지](#2023년-1월-13일-17시부터-21시까지)
2. [2023년 1월 20일 17시 40분부터 20시 40분까지](#2023년-1월-20일-17시-40분부터-20시-40분까지)
3. [2023년 1월 27일 17시 10분부터 20시 20분까지](#2023년-1월-27일-17시-10분부터-20시-20분까지)
4. [2023년 2월 3일 17시 5분부터 20시 5분까지](#2023년-2월-3일-17시-5분부터-20시-5분까지)
5. [회고 및 소감](#회고-및-소감)
### 2023년 1월 13일 17시부터 21시까지

- 오늘은
    - 아두이노의 개념 알아보기
    - 노트북에 아두이노와 파이썬 설치하기(실습환경 준비하기)
    - LED 1개 제어하는 실습 해보기(blink 프로그램 공부하기)
    - 아두이노 보드와 통신하기
    - LED 한 개 제어하기, 여러 개 제어하기
    - 함수 작성을 통해 위의 실습들에서 사용한 코드를 효율적으로 바꿔보기
    - 위에서 한 실습들을 파이썬 코드로도 실습해보기

- 아두이노 with 파이썬 교재의 python 버전이 2.7 버전이지만, 현재 python3가 많이 사용되고 있으므로 python3.11로 셋팅하였다.

- 파이썬3 버전으로 작성할 때 arduino 모듈이 없다거나 포트를 찾을 수 없다는 오류가 발생했다. 이를 해결하기 위해
    
    [[Arduino] 파이썬에서 아두이노 제어하기](https://hyunsun99.tistory.com/5)
    
    를 설치하고 아두이노에서 실행시킨 후 파이썬에서 다시 실습을 하였다. 설치한 후 prototype 코드에서 통신 속도만 9600으로 변경해주고 sketches 내 폴더에 있는 prototype 폴더를 Arduino폴더에 복붙하였다.

    또한, (pip install python-arduino를 cmd에 입력한 후) 기본서에서의 pip install arduino-python대신 pip install arduino-python3로 해주어야 한다.

- 챕터 1. 아두이노 알아보기

아두이노: 물리적인 세계를 감지하여 제어할 수 있는 소형 컴퓨터 

아두이노 보드: 센서가 입력받은 데이터를 액츄에이터의 출력 형태로 변환하도록 처리하는 것 

피지컬 컴퓨팅: 아두이노를 이용하여 만든 컴퓨팅 시스템, 디지털 기술 및 장치를 이용하여 물리적인 방식으로 정보를 입력 받아 처리한 결과를 물리적인 방식으로 출력하는 시스템 

센서: 실제 세계의 다양한 정보를 감지하거나 입력 받을 수 있는 부품 또는 장치 ex)빛 센서, 소리 센서, 초음파 센서 

액츄에이터: 물리적으로 동작하는 부품 또는 장치 ex) LED, 부저, 모터 

아두이노의 종류: 우노 모델, 레오나르도 모델, 101 모델, 나노 모델, 아두이노 메가, 아두이노 윤, 릴리패드 등 *아두이노 우노 보드 -디지털 영역: 0번부터 13번까지 14개의 디지털 입출력 핀이 있음 0번과 1번 핀은 주로 다른 컴퓨팅 장치와의 통신(RX, TX)을 위해 사용 2번부터 13번까지의 디지털 핀을 사용 디지털 핀을 출력 핀으로 사용할 경우 0V(LOW) 또는 5V(HIGH)의 전압 출력 가능 -초기화 버튼: 아두이노 보드 초기화 -파워 영역: 전원을 공급해주는 5V와 3.3V 핀, -극인 GND 핀이 2개, 외부 전원을 공급받을 때 사용하는 Vin이 있음 -전원 LED는 아두이노 보드에 전원이 공급할 때 켜지며 RX, TX LED는 아두이노와 컴퓨터가 통신할 때 켜짐 -디지털 13번 핀 옆에 L로 표시된 LED는 디지털 13번 핀에 연결되어 있음 -아날로그 인 영역: 0번부터 5번까지 6개의 아날로그 입력 핀이 있음

- 챕터 2. 실습 환경 준비하기

아두이노 소프트웨어를 설치하였다. 

파이썬을 설치하였다. 

파이썬 라이브러리를 설치하였다.

나머지는 위에서 설명한 부분이다.

- 챕터 3. LED 1개 제어하기

아두이노에 내장된 LED를 1초 간격으로 깜빡이는 활동을 하였다. 

Blink 프로그램을 살펴보았다. 

새로운 함수를 정의해보았다. 

setup() 함수: 각종 설정을 하는 함수, 프로그램이 한 번만 실행 

loop() 함수: 프로그램을 반복적으로 실행하는 함수 

pinMode(LED_BUILTIN, OUTPUT): 디지털 13번 핀을 출력 핀으로 설정하는 명령어 digitalWrite(LED_BUILTIN, HIGH): 디지털 13번 핀에 전기를 공급하라는 명령어 

delay(1000): 1000 밀리세컨드, 즉 1초동안 아무것도 하지 않고 대기하는 명령어 digitalWrite(LED_BUILTIN, LOW): 디지털 13번 핀에 전기 공급을 해제하라는 명령어 

컴파일: 사람이 작성한 프로그램을 컴퓨터가 이해할 수 있는 코드로 변환하는 것 

체크(V)버튼: 컴파일 

업로드(->)버튼: 컴파일 후, 컴파일 된 파일을 아두이노 보드에 업로드 

모듈화: 함수를 이용하면 기본 함수(loop)에서 특정 동작을 수행하는 명령어들을 모아서 별도의 함수로 만들 수 있음, 새로 정의한 함수를 필요할 때마다 호출하여 실행 가능

- 챕터 4. 아두이노 보드와 통신하기

센서 값을 모니터에 출력하는 활동을 하였다. 조도센서를 아두이노 보드에 연결하고, 조도센서가 감지한 값을 컴퓨터의 시리얼 모니터로 확인해 보았다. 센서 주변이 어두워지면 값이 작아지고 밝아지면 값이 커지는 것을 확인할 수 있었다. 

특정 문자를 입력하여 LED를 제어해보는 활동을 하였다. 컴퓨터에서 특정 문자를 입력하고 시리얼 모니터의 전송 기능을 이용하여 아두이노 보드로 정보를 보내 그에 연결된 LED를 켜거나 꺼 보았다. 

Serial.begin(9600): 통신 속도를 9600으로 설정 

Serial.PrintIn( ): 시리얼 모니터에 ( )안의 데이터를 출력하고, 한 줄 내리라는 의미 

analogRead(0): 아날로그 0번 핀에 연결된 조도 센서의 데이터를 읽어오라는 명령어

Serial.print( ): 시리얼 모니터에 ( )안의 데이터를 출력하지만, 입력 커서를 한 줄 내리지는 않는다. 

Serial.available( ): 시리얼 통신으로 데이터를 받으면, 받은 데이터의 개수를 출력, 만약 데이터를 입력하지 않으면 0을 출력(거짓으로 판단하여 명령어를 실행하지 않는다.)

- 챕터 5. LED 여러개 제어하기

LED: 발광다이오드(Light-Emitting Diode)의 약어 순방향으로 전압을 가했을 때 빛을 내는 전자 부품/크기 단위: 파이/긴 핀이 +극, 짧은 핀이 –극 

아두이노 보드에 LED 1개를 연결하고 1초 간격으로 켜졌다가 꺼지게 하는 활동을 하였다. 

LED 3개를 연결하여 순서대로 깜박이는 활동을 하였다. 

digitalWrite(핀 번호, 값): 해당 디지털 핀에 HIGH(전기 공급) 또는 LOW(전기 공급 안 함)의 값을 줄 수 있는 명령어 

digitalRead(핀 번호): 해당 핀에 입력된 값을 읽어 오는 명령어, 해당 핀 번호에 연결된 전자부품으로부터 받은 값을 HIGH 또는 LOW값으로 가져옴

### 2023년 1월 20일 17시 40분부터 20시 40분까지

- 오늘은
    - 푸쉬 버튼을 눌렀을 때 LED에 불이 들어오고 뗐을 때 불이 꺼지게 되는 회로를 구성하는 활동
    - PWM 기능과 아날로그 출력 코드를 이용해 LED의 밝기를 조절하는 활동
    - 조도 센서를 통해 센서 주변이 어두워지면 LED에 불이 들어오고 밝아지면 LED에 불이 꺼지는 회로를 만드는 활동
    - 가변 저항을 통해 LED의 밝기를 조절하는 회로를 구성하는 활동
- 아두이노 with 파이썬 교재에 나와있는 회로가 제대로 작동하는 회로가 아니기에 제대로 작동하도록 회로를 고쳐줘야 했다. 다른 센서에서 받아오는 값을 이용해 LED의 밝기를 조절할 때 LED를 디지털 핀에 연결하면 2단계로만 밝기가 변경된다. 하지만 아날로그 핀에 연결하면 다양한 밝기의 변화를 확인할 수 있었다.

- 챕터 6. 푸쉬 버튼 제어하기

푸쉬 버튼을 통해 회로를 제어하는 활동을 하였다.

푸쉬 버튼을 눌렀을 때 LED에 불이 들어오고 뗐을 때 불이 꺼지게 되는 회로를 구성하는 활동을 하였다.

푸쉬 버튼 : 전기 회로를 연결하거나 끊을 수 있는 물리적 장치, 버튼을 눌렀을 때 회로가 연결되고 누르지 않았을 때 회로가 끊김. 이 구조를 통해 전기를 공급하거나 하지 않게 하는 스위치 기능을 함

플로팅 현상 : 스위치가 연결되지 않은 상태에서 전류가 흐르는지 안 흐르는지 알 수 없는 상태가 된 것

풀다운 저항 : 플로팅 현상을 해결하기 위한 방법으로 스위치가 열린 상태에서는 어디에도 전류가 흐르지 않고 입력핀에 0V 전압을 걸고 스위치가 닫히면 GND와 연결되어 GND에 연결된 저항으로 인해 전류가 모두 입력핀으로 흐르게 하여 5V 전압을 거는 방법

풀업 저항 : 플로팅 현상을 해결하기 위한 방법으로 스위치가 열린 상태일 때는 입력핀으로 전류가 흐르게 하여 5V 전압을 걸고 스위치가 닫히면 GND와 연결해 모든 전류가 GND 쪽으로 흐르게 하여 입력핀에 0V의 전압을 거는 방법

Arduino("9600", port="COM6") : 통신 속도를 9600으로 포트를 COM6로 설정하는 코드

pinMode(ledPin, “OUTPUT”) : 미리 설정한 변수 ledPin의 값에 해당하는 핀을 출력핀으로 설정

pinMode(buttonPin, “INPUT”) : 미리 설정한 변수 buttonPin의 값에 해당하는 핀을 입력핀으로 설정

digitalRead(buttonPin) : buttonPin에서 측정되는 값을 읽어오는 코드

digitalWrite(ledPin, “HIGH”) : 미리 설정한 변수 ledPin의 값에 해당하는 핀을 HIGH로 출력하는 코드

if문을 통해 푸쉬 버튼을 눌러 13번 핀에서 값이 1이 되면 LED에 불을 켜고 Push!!를 출력하고 else를 통해 푸쉬 버튼을 누르지 않으면 13번 핀에서 값이 0이 되며 LED의 불을 끄는 코드를 작성했다.

- 챕터 8. LED를 제어하는 또 다른 방법

LED의 밝기를 제어하는 활동을 하였다.

PWM 기능과 아날로그 출력 코드를 이용해 LED의 밝기를 조절하는 활동을 하였다.

LED : 아두이노 보드에서 전류가 흐르지 않는 상태인 0부터 가장 밝은 255까지 총 256단계의 밝기 단계를 사용하여 LED를 점점 밝게 점점 어둡게 조절할 수 있다.

PWM : Pulse Width Modulation의 약자로 주기 폭 변조를 의미 한다. 각 주기별로 가장 높은 전압 구간의 비율을 조절하여 아날로그처럼 여러 개의 신호로 만들어 주는 출력 방법이다.

analogWrite(ledPin, brightness) : PWM 기능을 지원하는 핀(ledPin에 저장된 핀 번호)에 brightness에 저장한 값을 출력하는 코드

while 반복문과 brightness 변수를 통해 LED 최고 단계 255보다 작을 때는 brightness 값에 1씩 더해가며 LED의 밝기를 점점 올린다. 그리고 255보다 커지게 되면 brightness의 값에 1씩 빼가며 LED가 점점 어두워지게 한다. 

- 챕터 9. 조도 센서 제어하기

조도 센서를 통해 회로를 제어하는 활동을 하였다.

조도 센서를 통해 센서 주변이 어두워지면 LED에 불이 들어오고 밝아지면 LED에 불이 꺼지는 회로를 만드는 활동을 하였다.

조도 센서(Photoresistor) : 빛, 광, CdS 센서 등으로 불리는 센서로, 주변의 빛의 양을 감지하는 센서이다. 일반적인 조도 센서는 핀 다리가 2개이며 극성이 따로 없다. 일종의 저항으로 볼 수 있다. 

analogRead(cdsPin) : cdsPin에 저장된 값에 해당하는 아날로그 핀에서 측정된 값을 읽어오는 코드

if문을 통해 조도 센서에 측정되는 값이 일정 수치보다 작아지면 즉 센서 주변이 어두워지면 LED에 불이 켜지고 else를 통해 일정 수치보다 조도 센서에 측정되는 값이 클 때는 LED에 불이 꺼지게 되는 코드를 작성했다.

- 챕터 10. 가변 저항 제어하기

가변 저항을 통해 회로를 제어하는 활동을 하였다.

가변 저항을 통해 LED의 밝기를 조절하는 회로를 구성하는 활동을 하였다.

가변 저항 : 가변 저항은 반고정저항, 포텐셔미터 등으로 불리며 저항 값을 조절할 수 있는 부품이다. 0부터 1023까지 값을 가질 수 있다.

while문을 통해 반복해서 가변 저항의 값을 측정하면서 변수 brightness를 설정해 가변 저항의 값을 4로 나눈 값을 저장한다. 이 brightness 값은 0~255까지의 값을 가지게 되어 LED의 밝기 단계를 거의 모두 조절할 수 있게 된다. 이를 통해 가변 저항의 값을 변경해 가며 LED의 밝기를 변경하는 코드를 작성했다.

### 2023년 1월 27일 17시 10분부터 20시 20분까지
- 오늘은
    - 피에조 부저를 통해 C4(도) 음을 나게 하는 활동
    - 온도 센서를 통해 주변 온도를 측정하여 터미널에 출력하게 하는 활동
    - 서보모터가 0~180 사이의 각도로 움직이도록 제어하는 활동
- 온도 센서의 종류가 교재와 달라 어디가 GND인지 등을 따로 찾아서 맞는 방향으로 회로를 만들었다
- 온도 센서로 주변 온도 측정하는 파이썬 코드 부분이 교재에서는 온도 값을 계산할 때 millivolts에 -500을 해주는데 이 부분을 지우지 않으면 이상한 값이 나오기에 지웠다
- 또한 교재에서 print를 사용할 때 python 2 버전의 사용법으로 나와 있었기 때문에 이 부분을 3 버전에 맞게 고쳐줬다

- 챕터 11. 피에조 부저 제어하기

피에조 부저는 피에조(압전) 효과를 이용하여 소리를 낼 수 있는 부품이다. 피에조 효과란, 어떠한 성질을 이용하여 압력을 주게 되면 표면에 전압이 발생하는 것으로, 피에조 부저에서는 이 효과로 얇은 판에 미세한 떨림이 발생해 소리가 나게 된다. 큰 소리를 내지는 못하지만 값이 싸고 사용하기 간단하다.

피에조 부저에는 2개의 핀이 달려 있는데, 긴 핀은 +극, 짧은 핀은 -극을 나타낸다.

C언어에서는 tone()함수를 이용하여 해당 주파수의 음을 내도록 할 수 있지만, 파이썬에서는 이러한 함수가 존재하지 않아, 원하는 음을 내기 위해 피에조 부저가 몇초마다 어느만큼 진동해야하는지 직접 설정해주어야 한다.

예를 들어, C4(도)는 1초당 262번 진동한다(262Hz). 따라서 이 음을 내기 위해서는 1초/262를 2로 나눈 값(0.001911) 동안 High전압을 주고 다시 같은 시간동안 Low 전압을 주어야 한다.

- 챕터 13. 온도 센서 제어하기

온도 센서는 주변의 온도를 측정할 수 있는 부품이다. 온도 센서의 3개의 핀은 아래의 그림에서 볼 수 있듯, 1번부터 전원 공급핀, 아날로그 출력 핀, GND 핀이다. 이 핀들을 제대로 연결하지 않을 시 온도 센서가 가열될 수 있으므로 주의해서 연결하여야 한다.

![https://velog.velcdn.com/images/huejii/post/7445b15d-d529-45b4-acbc-b2c70eca12fa/image.png](https://velog.velcdn.com/images/huejii/post/7445b15d-d529-45b4-acbc-b2c70eca12fa/image.png)

온도 센서가 측정한 값을 섭씨 온도로 출력하기 위해 다음과 같은 계산식을 거쳐야 한다.

섭씨 온도 = (온도 센서가 출력한 값/1024.0) * 5000.0 / 10.0

우리가 사용한 온도 센서는 LM35dz로, 1℃ 변할 때, 10mV 변한다.(10mv/℃)

온도 센서는 아날로그 값을 출력하므로 이를 1024로 나누어주고, 5V의 전압을 주었으므로 mV로 전환하기 위해 5000을 곱해주고, 10mv/℃로 나누어 주면 섭씨 온도를 도출할 수 있다.

- 챕터 14. 서보모터 제어하기

서보모터는 전기를 이용하여 회전 동작을 하는 전자 부품이다. 0~180 사이의 각도로 움직이며, 해당 회전 범위 안에서 정확한 위치 제어가 가능하다.

위 그림에 보이는 노란색 선은 PWM(펄스 폭 변조) 기능을 지원하는 디지털 핀에 연결해야한다. 빨간색 선은 5V에, 갈색 선은 GND에 연결한다.

### 2023년 2월 3일 17시 5분부터 20시 5분까지

- 오늘은
    - 아두이노 코드 C 언어로 작성해서 LED + 스위치 추가해서 LED 제어하기
    - 아두이노 코드 C 언어로 작성해서 LED 7-세그먼트 제어하기
    - 아두이노 코드 C 언어로 작성해서 LCD 제어하기

- 단순 LED를 제어하고 스위치로 제어하는 부분은 전에도 했던 부분이라 큰 어려움 없이 잘 진행했다.
- LED와 7-세그먼트 제어하기는 원래의 교재에 없는 내용이라
    
    https://kocoafab.cc/tutorial/view/351 와 https://www.hackster.io/akhtar/simple-0-9-counter-dcba41
    
    를 참고해서 진행했다.
    
    참고한 사이트와 7-세그먼트의 종류가 달라 회로와 코드를 알맞게 고친 후 제대로 동작함을 볼 수 있었다.
- LCD를 제어하기 역시 원래의 교재에는 없는 내용이라
    
    http://songpamakers.com/blog/2017/06/04/%EC%95%84%EB%91%90%EC%9D%B4%EB%85%B8-lcd-1602-iic%EC%97%B0%EA%B2%B0%EB%B0%A9%EC%8B%9D%EC%9C%BC%EB%A1%9C-%EA%B8%80%EC%9E%90%ED%91%9C%EA%B8%B0%ED%95%98%EA%B8%B0/
    
    를 참고해서 진행했다.
    
    또한 필요한 LCD를 제어하는 데 필요한 LiquidCrystal_I2C 라이브러리 역시 설치해서 활동을 하였다.
    
    회로와 코드 역시 맞게 했지만 LCD 화면에 글자가 출력이 안되는 현상이 있었는데 이는 LCD의 저항 때문이었다.
    글자가 출력되는 저항으로 잘 조절하여 성공적으로 활동을 마무리 하였다.
    
### 회고 및 소감

1주차 : 언제나 첫 설정이 가장 까다롭고 힘들다는 것을 다시 한 번 느낄 수 있었습니다. 어느 부분은 잘 진행되다가 다른 부분에서 오류가 발생하는 경우가 있어서 이유를 찾기 힘들었고 교재의 아두이노와 파이썬은 구버전이기 떄문에 이상한 부분이 많다고 생각했습니다. 하지만 오류를 해결하고 실습을 잘 마무리 할 수 있어서 뿌듯하고 자신감이 붙었습니다.

2주차 : 교재의 회로가 제대로 작동하지 않는 경우가 있었습니다. 
첫 번째는 조도 센서를 통해 LED의 밝기를 조절하는 활동이었습니다. 조도 센서마다 측정하는 값들이 달라 조도 센서가 측정하는 값을 확인하고 측정하는 값들 중에서 적절하게 정하여 코드를 작성해야 하는데 처음에는 이를 몰라 교재에 있는 부분을 따라하다 논리적 오류가 발생해 애를 먹었지만 나중에 이유를 깨닫고 잘 마무리 했습니다. 
두 번째는 가변 저항을 이용해 LED의 밝기를 조절하는 활동이었습니다. 이 부분 역시 교재의 회로가 잘 못 나와있어 올바르게 고쳤어야 했습니다. 그 과정에서 LED를 13번 핀과 연결하면 LED의 밝기가 2단계밖에 나오지 않고 11번 핀과 연결했을 때는 다양한 밝기가 나온다는 사실을 확인했는데 이는 디지털 핀과 아날로그 핀의 차이라는 것을 알게 됐습니다. 디지털 핀은 이산적으로 작동해 2단계만 보여주고 아날로그 핀은 연속적으로 작동해 다양한 밝기를 볼 수 있다는 것을 알게 됐습니다.

3주차 : 온도 센서 제어하기 챕터에서 온도값에 관한 코드가 잘못된 부분이 있어서 고쳤더니 잘 작동한 반면 피에조 부저 제어하기 챕터에서 피에조 부저가 각각 같은 음으로 설정했는데도 부저마다 다른 소리가 나오고 하나의 부저에 대해 다른 소리를 내도록 코드를 작성했지만 같은 소리만 나왔습니다. 부저의 질이 별로 좋지 못했기에 발생한 이슈일 수도 있다고 생각이 들었습니다. 또한 파이썬 코드로는 작동을 제대로 안하는 부분이 많아 C언어보다 더 힘들 수도 있겠다는 생각을 하였습니다.

4주차 : 본격적인 교재 제작에 앞서서 교재에 어떤 내용을 담을지 구상하며 아두이노 회로와 코드를 작성하는 시간을 가졌다. 우선 전체적인 교재 제작에 있어 변경점이 있다. 교재를 보는 사람이 이해하기 쉽도록 파이썬 코드로 교재를 제작하려 했었는데 직접 파이썬으로 아두이노를 해보니 오히려 초기 설정은 더 복잡하고, 기대했던 코드에서의 쉬운 부분은 크게 없었으며 오히려 제대로 작동하지 않는 코드가 더 많아 불편했다. 따라서 C 언어로 교재를 제작하게 되었다. 우선 C 언어로 LED를 제어하는 코드를 작성하고 아두이노 회로를 만들어 스위치로 끄고 키는 활동을 해봤는데 그 전에 한번 해봤던 것이어서 그런지 잘 작동하는 모습을 볼 수 있었다. 그렇기에 이 부분이 보기도 쉽고 만들기도 쉬워서 아두이노를 처음 접하는 사람이 하면 좋겠다는 생각을 했다. 그리고 LCD를 제어하는 활동을 해봤는데 이 부분을 하기 위해서는 우선 새로운 라이브러리를 깔아야 했지만 이 단계에선 큰 문제는 없었다. 문제는 LCD의 저항의 세기에 따라 글씨가 출력이 안 될 수도 있다는 것이었다. 이 부분에 주의해 저항을 변경해가며 LCD를 확인하니 글씨가 제대로 나오게 할 수 있었다. 아두이노를 할 때는 부품에서 문제가 발생할 수도 있으므로 부품의 상태에 주의하면 문제를 그래도 빠르게 찾을 수 있다는 것을 깨달았다. 마지막으로는 7segment를 제어하는 활동을 해봤다. 이 부분 역시 7segment의 종류에 따라 a, b, c, d, e, f, g로 나타나는 부분이 다르므로 이를 확인하고 회로를 연결하고 코드를 짜야 원하는 대로 작동할 수 있음을 확인할 수 있었다.
