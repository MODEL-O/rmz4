; undefined FUN_0807e744(void)
; entry 0x807e744  size 32 bytes

0807E744: 30b5         push {r4,r5,lr}
0807E746: 82b0         sub sp,#0x8
0807E748: 041c         add r4,r0,#0x0
0807E74A: e07b         ldrb r0,[r4,#0xf]
0807E74C: 0728         cmp r0,#0x7
0807E74E: 00d9         bls 0x0807e752
0807E750: b5e0         b 0x0807e8be
0807E752: 8000         lsl r0,r0,#0x2
0807E754: 0149         ldr r1,[0x0807e75c]
0807E756: 4018         add r0,r0,r1
0807E758: 0068         ldr r0,[r0,#0x0]
0807E75A: 8746         mov pc,r0
0807E8BE: 02b0         add sp,#0x8
0807E8C0: 30bc         pop {r4,r5}
0807E8C2: 01bc         pop {r0}
0807E8C4: 0047         bx r0
