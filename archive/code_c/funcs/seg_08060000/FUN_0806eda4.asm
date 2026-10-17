; undefined FUN_0806eda4(void)
; entry 0x806eda4  size 32 bytes

0806EDA4: 30b5         push {r4,r5,lr}
0806EDA6: 82b0         sub sp,#0x8
0806EDA8: 041c         add r4,r0,#0x0
0806EDAA: e07b         ldrb r0,[r4,#0xf]
0806EDAC: 0728         cmp r0,#0x7
0806EDAE: 00d9         bls 0x0806edb2
0806EDB0: 8be0         b 0x0806eeca
0806EDB2: 8000         lsl r0,r0,#0x2
0806EDB4: 0149         ldr r1,[0x0806edbc]
0806EDB6: 4018         add r0,r0,r1
0806EDB8: 0068         ldr r0,[r0,#0x0]
0806EDBA: 8746         mov pc,r0
0806EECA: 02b0         add sp,#0x8
0806EECC: 30bc         pop {r4,r5}
0806EECE: 01bc         pop {r0}
0806EED0: 0047         bx r0
