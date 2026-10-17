; undefined FUN_0804c09c(void)
; entry 0x804c09c  size 46 bytes

0804C09C: 10b5         push {r4,lr}
0804C09E: 041c         add r4,r0,#0x0
0804C0A0: bd30         add r0,#0xbd
0804C0A2: 0078         ldrb r0,[r0,#0x0]
0804C0A4: 0028         cmp r0,#0x0
0804C0A6: 0ad0         beq 0x0804c0be
0804C0A8: 207c         ldrb r0,[r4,#0x10]
0804C0AA: 0028         cmp r0,#0x0
0804C0AC: 07d1         bne 0x0804c0be
0804C0AE: 211c         add r1,r4,#0x0
0804C0B0: 5431         add r1,#0x54
0804C0B2: 0120         mov r0,#0x1
0804C0B4: 84f0e8fd     bl 0x080d0c88
0804C0B8: 3520         mov r0,#0x35
0804C0BA: b6f729fd     bl 0x08002b10
0804C0BE: 201c         add r0,r4,#0x0
0804C0C0: eef7f8fb     bl 0x0803a8b4
0804C0C4: 10bc         pop {r4}
0804C0C6: 01bc         pop {r0}
0804C0C8: 0047         bx r0
