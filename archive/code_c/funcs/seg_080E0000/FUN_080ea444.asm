; undefined FUN_080ea444(void)
; entry 0x80ea444  size 28 bytes

080EA444: 30b5         push {r4,r5,lr}
080EA446: 051c         add r5,r0,#0x0
080EA448: a87b         ldrb r0,[r5,#0xe]
080EA44A: 0428         cmp r0,#0x4
080EA44C: 00d9         bls 0x080ea450
080EA44E: f6e0         b 0x080ea63e
080EA450: 8000         lsl r0,r0,#0x2
080EA452: 0249         ldr r1,[0x080ea45c]
080EA454: 4018         add r0,r0,r1
080EA456: 0068         ldr r0,[r0,#0x0]
080EA458: 8746         mov pc,r0
080EA63E: 30bc         pop {r4,r5}
080EA640: 01bc         pop {r0}
080EA642: 0047         bx r0
