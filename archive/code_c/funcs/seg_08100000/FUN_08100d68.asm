; undefined FUN_08100d68(void)
; entry 0x8100d68  size 28 bytes

08100D68: 70b5         push {r4,r5,r6,lr}
08100D6A: 061c         add r6,r0,#0x0
08100D6C: b07b         ldrb r0,[r6,#0xe]
08100D6E: 0428         cmp r0,#0x4
08100D70: 00d9         bls 0x08100d74
08100D72: e9e0         b 0x08100f48
08100D74: 8000         lsl r0,r0,#0x2
08100D76: 0249         ldr r1,[0x08100d80]
08100D78: 4018         add r0,r0,r1
08100D7A: 0068         ldr r0,[r0,#0x0]
08100D7C: 8746         mov pc,r0
08100F48: 70bc         pop {r4,r5,r6}
08100F4A: 01bc         pop {r0}
08100F4C: 0047         bx r0
