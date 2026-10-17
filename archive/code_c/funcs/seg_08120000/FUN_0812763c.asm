; undefined FUN_0812763c(void)
; entry 0x812763c  size 26 bytes

0812763C: 0022         mov r2,#0x0
0812763E: 8a75         strb r2,[r1,#0x16]
08127640: 8a76         strb r2,[r1,#0x1a]
08127642: 0a7e         ldrb r2,[r1,#0x18]
08127644: 002a         cmp r2,#0x0
08127646: 01d1         bne 0x0812764c
08127648: 0c22         mov r2,#0xc
0812764A: 00e0         b 0x0812764e
0812764C: 0322         mov r2,#0x3
0812764E: 0b78         ldrb r3,[r1,#0x0]
08127650: 1343         orr r3,r2
08127652: 0b70         strb r3,[r1,#0x0]
08127654: 7047         bx lr
