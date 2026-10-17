; undefined FUN_080f0084(void)
; entry 0x80f0084  size 32 bytes

080F0084: 70b5         push {r4,r5,r6,lr}
080F0086: 82b0         sub sp,#0x8
080F0088: 061c         add r6,r0,#0x0
080F008A: 707b         ldrb r0,[r6,#0xd]
080F008C: 0528         cmp r0,#0x5
080F008E: 00d9         bls 0x080f0092
080F0090: 05e1         b 0x080f029e
080F0092: 8000         lsl r0,r0,#0x2
080F0094: 0149         ldr r1,[0x080f009c]
080F0096: 4018         add r0,r0,r1
080F0098: 0068         ldr r0,[r0,#0x0]
080F009A: 8746         mov pc,r0
080F029E: 02b0         add sp,#0x8
080F02A0: 70bc         pop {r4,r5,r6}
080F02A2: 01bc         pop {r0}
080F02A4: 0047         bx r0
