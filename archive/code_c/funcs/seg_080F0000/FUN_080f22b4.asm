; undefined FUN_080f22b4(void)
; entry 0x80f22b4  size 28 bytes

080F22B4: f0b5         push {r4,r5,r6,r7,lr}
080F22B6: 061c         add r6,r0,#0x0
080F22B8: 707b         ldrb r0,[r6,#0xd]
080F22BA: 1128         cmp r0,#0x11
080F22BC: 00d9         bls 0x080f22c0
080F22BE: c1e1         b 0x080f2644
080F22C0: 8000         lsl r0,r0,#0x2
080F22C2: 0249         ldr r1,[0x080f22cc]
080F22C4: 4018         add r0,r0,r1
080F22C6: 0068         ldr r0,[r0,#0x0]
080F22C8: 8746         mov pc,r0
080F2644: f0bc         pop {r4,r5,r6,r7}
080F2646: 01bc         pop {r0}
080F2648: 0047         bx r0
