; undefined FUN_0804a210(void)
; entry 0x804a210  size 40 bytes

0804A210: 10b5         push {r4,lr}
0804A212: 041c         add r4,r0,#0x0
0804A214: bd30         add r0,#0xbd
0804A216: 0078         ldrb r0,[r0,#0x0]
0804A218: 0028         cmp r0,#0x0
0804A21A: 07d0         beq 0x0804a22c
0804A21C: 211c         add r1,r4,#0x0
0804A21E: 5431         add r1,#0x54
0804A220: 0120         mov r0,#0x1
0804A222: 86f031fd     bl 0x080d0c88
0804A226: 3520         mov r0,#0x35
0804A228: b8f772fc     bl 0x08002b10
0804A22C: 201c         add r0,r4,#0x0
0804A22E: f0f741fb     bl 0x0803a8b4
0804A232: 10bc         pop {r4}
0804A234: 01bc         pop {r0}
0804A236: 0047         bx r0
