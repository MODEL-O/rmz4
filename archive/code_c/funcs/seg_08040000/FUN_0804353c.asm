; undefined FUN_0804353c(void)
; entry 0x804353c  size 40 bytes

0804353C: 00b5         push {lr}
0804353E: c4f79dfb     bl 0x08007c7c
08043542: 0004         lsl r0,r0,#0x10
08043544: 000c         lsr r0,r0,#0x10
08043546: 011c         add r1,r0,#0x0
08043548: 0f20         mov r0,#0xf
0804354A: 0840         and r0,r1
0804354C: 0f28         cmp r0,#0xf
0804354E: 06d0         beq 0x0804355e
08043550: 8020         mov r0,#0x80
08043552: 0002         lsl r0,r0,#0x8
08043554: 0840         and r0,r1
08043556: 0028         cmp r0,#0x0
08043558: 01d1         bne 0x0804355e
0804355A: 081c         add r0,r1,#0x0
0804355C: 00e0         b 0x08043560
0804355E: 0020         mov r0,#0x0
08043560: 02bc         pop {r1}
08043562: 0847         bx r1
