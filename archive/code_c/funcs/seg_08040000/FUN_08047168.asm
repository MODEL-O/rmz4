; undefined FUN_08047168(void)
; entry 0x8047168  size 48 bytes

08047168: 10b5         push {r4,lr}
0804716A: 041c         add r4,r0,#0x0
0804716C: 207c         ldrb r0,[r4,#0x10]
0804716E: 0028         cmp r0,#0x0
08047170: 0cd1         bne 0x0804718c
08047172: 201c         add r0,r4,#0x0
08047174: bd30         add r0,#0xbd
08047176: 0078         ldrb r0,[r0,#0x0]
08047178: 0028         cmp r0,#0x0
0804717A: 07d0         beq 0x0804718c
0804717C: 211c         add r1,r4,#0x0
0804717E: 5431         add r1,#0x54
08047180: 0120         mov r0,#0x1
08047182: 89f081fd     bl 0x080d0c88
08047186: 3520         mov r0,#0x35
08047188: bbf7c2fc     bl 0x08002b10
0804718C: 201c         add r0,r4,#0x0
0804718E: f3f791fb     bl 0x0803a8b4
08047192: 10bc         pop {r4}
08047194: 01bc         pop {r0}
08047196: 0047         bx r0
