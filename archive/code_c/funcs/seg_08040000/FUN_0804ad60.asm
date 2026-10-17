; undefined FUN_0804ad60(void)
; entry 0x804ad60  size 40 bytes

0804AD60: 00b5         push {lr}
0804AD62: bcf78bff     bl 0x08007c7c
0804AD66: 0004         lsl r0,r0,#0x10
0804AD68: 000c         lsr r0,r0,#0x10
0804AD6A: 011c         add r1,r0,#0x0
0804AD6C: 0f20         mov r0,#0xf
0804AD6E: 0840         and r0,r1
0804AD70: 0f28         cmp r0,#0xf
0804AD72: 06d0         beq 0x0804ad82
0804AD74: 8020         mov r0,#0x80
0804AD76: 0002         lsl r0,r0,#0x8
0804AD78: 0840         and r0,r1
0804AD7A: 0028         cmp r0,#0x0
0804AD7C: 01d1         bne 0x0804ad82
0804AD7E: 081c         add r0,r1,#0x0
0804AD80: 00e0         b 0x0804ad84
0804AD82: 0020         mov r0,#0x0
0804AD84: 02bc         pop {r1}
0804AD86: 0847         bx r1
