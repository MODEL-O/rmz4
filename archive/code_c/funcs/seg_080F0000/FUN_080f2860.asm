; undefined FUN_080f2860(void)
; entry 0x80f2860  size 28 bytes

080F2860: f0b5         push {r4,r5,r6,r7,lr}
080F2862: 061c         add r6,r0,#0x0
080F2864: 707b         ldrb r0,[r6,#0xd]
080F2866: 2328         cmp r0,#0x23
080F2868: 00d9         bls 0x080f286c
080F286A: 1ce3         b 0x080f2ea6
080F286C: 8000         lsl r0,r0,#0x2
080F286E: 0249         ldr r1,[0x080f2878]
080F2870: 4018         add r0,r0,r1
080F2872: 0068         ldr r0,[r0,#0x0]
080F2874: 8746         mov pc,r0
080F2EA6: f0bc         pop {r4,r5,r6,r7}
080F2EA8: 01bc         pop {r0}
080F2EAA: 0047         bx r0
