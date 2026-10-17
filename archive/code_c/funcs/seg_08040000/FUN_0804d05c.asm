; undefined FUN_0804d05c(void)
; entry 0x804d05c  size 46 bytes

0804D05C: 00b5         push {lr}
0804D05E: 426d         ldr r2,[r0,#0x54]
0804D060: 816d         ldr r1,[r0,#0x58]
0804D062: 101c         add r0,r2,#0x0
0804D064: baf70afe     bl 0x08007c7c
0804D068: 0004         lsl r0,r0,#0x10
0804D06A: 000c         lsr r0,r0,#0x10
0804D06C: 011c         add r1,r0,#0x0
0804D06E: 0f20         mov r0,#0xf
0804D070: 0840         and r0,r1
0804D072: 0f28         cmp r0,#0xf
0804D074: 06d0         beq 0x0804d084
0804D076: 8020         mov r0,#0x80
0804D078: 0002         lsl r0,r0,#0x8
0804D07A: 0840         and r0,r1
0804D07C: 0028         cmp r0,#0x0
0804D07E: 01d1         bne 0x0804d084
0804D080: 081c         add r0,r1,#0x0
0804D082: 00e0         b 0x0804d086
0804D084: 0020         mov r0,#0x0
0804D086: 02bc         pop {r1}
0804D088: 0847         bx r1
