; undefined FUN_0806eed8(void)
; entry 0x806eed8  size 40 bytes

0806EED8: 70b5         push {r4,r5,r6,lr}
0806EEDA: 84b0         sub sp,#0x10
0806EEDC: 051c         add r5,r0,#0x0
0806EEDE: a87a         ldrb r0,[r5,#0xa]
0806EEE0: 0609         lsr r6,r0,#0x4
0806EEE2: 0120         mov r0,#0x1
0806EEE4: 0640         and r6,r0
0806EEE6: e87b         ldrb r0,[r5,#0xf]
0806EEE8: 0728         cmp r0,#0x7
0806EEEA: 00d9         bls 0x0806eeee
0806EEEC: f2e0         b 0x0806f0d4
0806EEEE: 8000         lsl r0,r0,#0x2
0806EEF0: 0149         ldr r1,[0x0806eef8]
0806EEF2: 4018         add r0,r0,r1
0806EEF4: 0068         ldr r0,[r0,#0x0]
0806EEF6: 8746         mov pc,r0
0806F0D4: 04b0         add sp,#0x10
0806F0D6: 70bc         pop {r4,r5,r6}
0806F0D8: 01bc         pop {r0}
0806F0DA: 0047         bx r0
