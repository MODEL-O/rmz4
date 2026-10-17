; undefined FUN_08107688(void)
; entry 0x8107688  size 28 bytes

08107688: 10b5         push {r4,lr}
0810768A: 041c         add r4,r0,#0x0
0810768C: 607b         ldrb r0,[r4,#0xd]
0810768E: 0828         cmp r0,#0x8
08107690: 00d9         bls 0x08107694
08107692: d6e0         b 0x08107842
08107694: 8000         lsl r0,r0,#0x2
08107696: 0249         ldr r1,[0x081076a0]
08107698: 4018         add r0,r0,r1
0810769A: 0068         ldr r0,[r0,#0x0]
0810769C: 8746         mov pc,r0
08107842: 10bc         pop {r4}
08107844: 01bc         pop {r0}
08107846: 0047         bx r0
