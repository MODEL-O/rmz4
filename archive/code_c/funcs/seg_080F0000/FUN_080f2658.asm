; undefined FUN_080f2658(void)
; entry 0x80f2658  size 28 bytes

080F2658: 70b5         push {r4,r5,r6,lr}
080F265A: 061c         add r6,r0,#0x0
080F265C: 707b         ldrb r0,[r6,#0xd]
080F265E: 1128         cmp r0,#0x11
080F2660: 00d9         bls 0x080f2664
080F2662: f3e0         b 0x080f284c
080F2664: 8000         lsl r0,r0,#0x2
080F2666: 0249         ldr r1,[0x080f2670]
080F2668: 4018         add r0,r0,r1
080F266A: 0068         ldr r0,[r0,#0x0]
080F266C: 8746         mov pc,r0
080F284C: 70bc         pop {r4,r5,r6}
080F284E: 01bc         pop {r0}
080F2850: 0047         bx r0
