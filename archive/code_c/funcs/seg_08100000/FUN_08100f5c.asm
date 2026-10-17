; undefined FUN_08100f5c(void)
; entry 0x8100f5c  size 28 bytes

08100F5C: 70b5         push {r4,r5,r6,lr}
08100F5E: 061c         add r6,r0,#0x0
08100F60: b07b         ldrb r0,[r6,#0xe]
08100F62: 0428         cmp r0,#0x4
08100F64: 00d9         bls 0x08100f68
08100F66: ede0         b 0x08101144
08100F68: 8000         lsl r0,r0,#0x2
08100F6A: 0249         ldr r1,[0x08100f74]
08100F6C: 4018         add r0,r0,r1
08100F6E: 0068         ldr r0,[r0,#0x0]
08100F70: 8746         mov pc,r0
08101144: 70bc         pop {r4,r5,r6}
08101146: 01bc         pop {r0}
08101148: 0047         bx r0
