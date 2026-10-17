; undefined FUN_0804e4b0(void)
; entry 0x804e4b0  size 40 bytes

0804E4B0: 10b5         push {r4,lr}
0804E4B2: 041c         add r4,r0,#0x0
0804E4B4: bd30         add r0,#0xbd
0804E4B6: 0078         ldrb r0,[r0,#0x0]
0804E4B8: 0028         cmp r0,#0x0
0804E4BA: 07d0         beq 0x0804e4cc
0804E4BC: 211c         add r1,r4,#0x0
0804E4BE: 5431         add r1,#0x54
0804E4C0: 0120         mov r0,#0x1
0804E4C2: 82f0e1fb     bl 0x080d0c88
0804E4C6: 3520         mov r0,#0x35
0804E4C8: b4f722fb     bl 0x08002b10
0804E4CC: 201c         add r0,r4,#0x0
0804E4CE: ecf7f1f9     bl 0x0803a8b4
0804E4D2: 10bc         pop {r4}
0804E4D4: 01bc         pop {r0}
0804E4D6: 0047         bx r0
