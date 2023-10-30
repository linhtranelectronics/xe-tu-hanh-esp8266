// đặt tên cho các chân kết nối để dễ viết code
int A_DIR = 0;
int A_SPEED = 5;
int B_DIR = 2;
int B_SPEED = 4;
void setup()
{
  Serial.begin(9600);

  pinMode(A_DIR, OUTPUT); 
  pinMode(A_SPEED, OUTPUT); 

  pinMode(B_DIR, OUTPUT); 
  pinMode(B_SPEED, OUTPUT); 
}
void loop()
{
  // động cơ A chạy nhanh nhất
  digitalWrite(A_DIR,1);
  analogWrite(A_SPEED, 1023);

  // Dừng chương trình 3 giây
  delay(3000);

  // dừng động cơ A
  digitalWrite(A_DIR,1);
  analogWrite(A_SPEED, 0);

  // Dừng chương trình 3 giây
  delay(3000);
}
