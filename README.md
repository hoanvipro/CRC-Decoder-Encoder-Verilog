# CRC ENCODER/DECODER
That project has two designs. CRC Encoder can create CRC code from data and generator polynomial. 
CRC Deocder can detect error of data with crc code and generator polynomial. 
## Design
The default width of data is 32 bit and CRC is 16 bit.
## Eviroment testing using UVM
Design is test with test environment which built by using UVM Library. Currently, CRC Encoder is only design tested in this environment.
This environment has two agent, one is connected with my CRC encoder and one is connected with verification design. The verification design is a Parallel CRC encoder.
Image of test environment:
![CRC_testbenchimg](https://github.com/user-attachments/assets/49e43ac9-35c6-4398-9140-8af29d359a36)
My testbench on edaplayground:
https://www.edaplayground.com/x/L2eg
## Reference
[1] 	Nguyễn Quân, "[CRC] Bài 1 - Lý thuyết về CRC và mạch tính CRC nối tiếp", "[CRC] Bài 2 - Bộ tính CRC nối tiếp với một giá trị khởi tạo", "[CRC] Bài 3 - Bộ tính CRC song song toàn phần", August 2019.  









