; undefined FUN_0801bf8c(void)
; entry 0x801bf8c  size 38 bytes

0801BF8C: 00b5         push {lr}
0801BF8E: 011c         add r1,r0,#0x0
0801BF90: 088a         ldrh r0,[r1,#0x10]
0801BF92: 1f28         cmp r0,#0x1f
0801BF94: 0bd8         bhi 0x0801bfae
0801BF96: 0130         add r0,#0x1
0801BF98: 0882         strh r0,[r1,#0x10]
0801BF9A: 064a         ldr r2,[0x0801bfb4]
0801BF9C: 0004         lsl r0,r0,#0x10
0801BF9E: 000d         lsr r0,r0,#0x14
0801BFA0: 1f21         mov r1,#0x1f
0801BFA2: 0840         and r0,r1
0801BFA4: 8023         mov r3,#0x80
0801BFA6: 5b01         lsl r3,r3,#0x5
0801BFA8: 191c         add r1,r3,#0x0
0801BFAA: 0843         orr r0,r1
0801BFAC: 5080         strh r0,[r2,#0x2]
0801BFAE: 01bc         pop {r0}
0801BFB0: 0047         bx r0
