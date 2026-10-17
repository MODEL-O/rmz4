; undefined FUN_08047688(void)
; entry 0x8047688  size 40 bytes

08047688: 00b5         push {lr}
0804768A: c0f7f7fa     bl 0x08007c7c
0804768E: 0004         lsl r0,r0,#0x10
08047690: 000c         lsr r0,r0,#0x10
08047692: 011c         add r1,r0,#0x0
08047694: 0f20         mov r0,#0xf
08047696: 0840         and r0,r1
08047698: 0f28         cmp r0,#0xf
0804769A: 06d0         beq 0x080476aa
0804769C: 8020         mov r0,#0x80
0804769E: 0002         lsl r0,r0,#0x8
080476A0: 0840         and r0,r1
080476A2: 0028         cmp r0,#0x0
080476A4: 01d1         bne 0x080476aa
080476A6: 081c         add r0,r1,#0x0
080476A8: 00e0         b 0x080476ac
080476AA: 0020         mov r0,#0x0
080476AC: 02bc         pop {r1}
080476AE: 0847         bx r1
