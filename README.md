# Xilinx-Data-Encryption-Standard-on-FPGA
Encrypt a paragraph using DES algorithm in Verilog HDL, and decrypt the paragraph back showing the result on the seven segment display of Spartan 3e FPGA.

**Encryption**

![Encryption] (http://i.imgur.com/Klij6im.png)

- Takes COE file from Serial BUS from PC
- Saves that file in BLOCK ROM inside FPGA
- Ecrypt that plain text
- Display ecrypted text to simulation window

*Simulation Window showing encrypted text*
![Encryption] (http://i.imgur.com/Tr51sZc.png)

**Decryption**

![Decryption] (http://i.imgur.com/Klij6im.png)

- Takes COE file from Serial BUS from PC
- Saves that file in BLOCK ROM inside FPGA
- Decrypted the Encrypted text
- Display decrypted text to 7 segment display of sparten FPGA kit

*Simulation Window showing decrypted text*
![Encryption] (http://i.imgur.com/Tr51sZc.png)

**Modules**

*Top Module*

![Top Module] (http://i.imgur.com/Uv2bDdr.png)

- ct: Cypher Text
- pt: Plain Text
- Data1,2: 7 segment

*Main Module*

![Main Module] (http://i.imgur.com/Dh8M2Vi.png)

- DES-Top: DES Top module- Responsible for both encryption and decryption
- rom: Block ROM to store pt and ct
- seven_seg: Seven Segment Driver

*DES top module*

![DES Top Module] (http://i.imgur.com/sc5Lb7W.png)
 


