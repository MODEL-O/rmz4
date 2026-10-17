; undefined FUN_080a1a74(void)
; entry 0x80a1a74  size 40 bytes

080A1A74: 70b5         push {r4,r5,r6,lr}
080A1A76: 041c         add r4,r0,#0x0
080A1A78: a07a         ldrb r0,[r4,#0xa]
080A1A7A: 0609         lsr r6,r0,#0x4
080A1A7C: 0120         mov r0,#0x1
080A1A7E: 0640         and r6,r0
080A1A80: 201c         add r0,r4,#0x0
080A1A82: b830         add r0,#0xb8
080A1A84: 0078         ldrb r0,[r0,#0x0]
080A1A86: 0728         cmp r0,#0x7
080A1A88: 00d9         bls 0x080a1a8c
080A1A8A: d1e0         b 0x080a1c30
080A1A8C: 8000         lsl r0,r0,#0x2
080A1A8E: 0249         ldr r1,[0x080a1a98]
080A1A90: 4018         add r0,r0,r1
080A1A92: 0068         ldr r0,[r0,#0x0]
080A1A94: 8746         mov pc,r0
080A1C30: 70bc         pop {r4,r5,r6}
080A1C32: 01bc         pop {r0}
080A1C34: 0047         bx r0
