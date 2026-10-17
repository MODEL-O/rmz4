; undefined FUN_0804a8d0(void)
; entry 0x804a8d0  size 46 bytes

0804A8D0: 10b5         push {r4,lr}
0804A8D2: 041c         add r4,r0,#0x0
0804A8D4: bd30         add r0,#0xbd
0804A8D6: 0078         ldrb r0,[r0,#0x0]
0804A8D8: 0028         cmp r0,#0x0
0804A8DA: 0ad0         beq 0x0804a8f2
0804A8DC: 207c         ldrb r0,[r4,#0x10]
0804A8DE: 0028         cmp r0,#0x0
0804A8E0: 07d1         bne 0x0804a8f2
0804A8E2: 211c         add r1,r4,#0x0
0804A8E4: 5431         add r1,#0x54
0804A8E6: 0120         mov r0,#0x1
0804A8E8: 86f0cef9     bl 0x080d0c88
0804A8EC: 3520         mov r0,#0x35
0804A8EE: b8f70ff9     bl 0x08002b10
0804A8F2: 201c         add r0,r4,#0x0
0804A8F4: eff7deff     bl 0x0803a8b4
0804A8F8: 10bc         pop {r4}
0804A8FA: 01bc         pop {r0}
0804A8FC: 0047         bx r0
