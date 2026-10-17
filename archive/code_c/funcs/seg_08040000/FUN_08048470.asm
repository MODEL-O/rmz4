; undefined FUN_08048470(void)
; entry 0x8048470  size 58 bytes

08048470: 10b5         push {r4,lr}
08048472: 041c         add r4,r0,#0x0
08048474: bd30         add r0,#0xbd
08048476: 0078         ldrb r0,[r0,#0x0]
08048478: 0028         cmp r0,#0x0
0804847A: 10d0         beq 0x0804849e
0804847C: 207c         ldrb r0,[r4,#0x10]
0804847E: 0028         cmp r0,#0x0
08048480: 08d1         bne 0x08048494
08048482: 211c         add r1,r4,#0x0
08048484: 5431         add r1,#0x54
08048486: 0120         mov r0,#0x1
08048488: 88f0fefb     bl 0x080d0c88
0804848C: 3520         mov r0,#0x35
0804848E: baf73ffb     bl 0x08002b10
08048492: 04e0         b 0x0804849e
08048494: 211c         add r1,r4,#0x0
08048496: 5431         add r1,#0x54
08048498: 0220         mov r0,#0x2
0804849A: 88f0f5fb     bl 0x080d0c88
0804849E: 201c         add r0,r4,#0x0
080484A0: f2f708fa     bl 0x0803a8b4
080484A4: 10bc         pop {r4}
080484A6: 01bc         pop {r0}
080484A8: 0047         bx r0
