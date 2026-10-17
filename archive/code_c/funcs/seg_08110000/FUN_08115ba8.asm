; undefined FUN_08115ba8(void)
; entry 0x8115ba8  size 28 bytes

08115BA8: f0b5         push {r4,r5,r6,r7,lr}
08115BAA: 041c         add r4,r0,#0x0
08115BAC: e078         ldrb r0,[r4,#0x3]
08115BAE: 1428         cmp r0,#0x14
08115BB0: 00d9         bls 0x08115bb4
08115BB2: 09e1         b 0x08115dc8
08115BB4: 8000         lsl r0,r0,#0x2
08115BB6: 0249         ldr r1,[0x08115bc0]
08115BB8: 4018         add r0,r0,r1
08115BBA: 0068         ldr r0,[r0,#0x0]
08115BBC: 8746         mov pc,r0
08115DC8: f0bc         pop {r4,r5,r6,r7}
08115DCA: 01bc         pop {r0}
08115DCC: 0047         bx r0
