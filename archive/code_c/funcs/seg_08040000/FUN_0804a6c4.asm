; undefined FUN_0804a6c4(void)
; entry 0x804a6c4  size 40 bytes

0804A6C4: 00b5         push {lr}
0804A6C6: bdf7d9fa     bl 0x08007c7c
0804A6CA: 0004         lsl r0,r0,#0x10
0804A6CC: 000c         lsr r0,r0,#0x10
0804A6CE: 011c         add r1,r0,#0x0
0804A6D0: 0f20         mov r0,#0xf
0804A6D2: 0840         and r0,r1
0804A6D4: 0f28         cmp r0,#0xf
0804A6D6: 06d0         beq 0x0804a6e6
0804A6D8: 8020         mov r0,#0x80
0804A6DA: 0002         lsl r0,r0,#0x8
0804A6DC: 0840         and r0,r1
0804A6DE: 0028         cmp r0,#0x0
0804A6E0: 01d1         bne 0x0804a6e6
0804A6E2: 081c         add r0,r1,#0x0
0804A6E4: 00e0         b 0x0804a6e8
0804A6E6: 0020         mov r0,#0x0
0804A6E8: 02bc         pop {r1}
0804A6EA: 0847         bx r1
