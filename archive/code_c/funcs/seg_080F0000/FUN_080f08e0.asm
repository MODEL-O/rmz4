; undefined FUN_080f08e0(void)
; entry 0x80f08e0  size 32 bytes

080F08E0: f0b5         push {r4,r5,r6,r7,lr}
080F08E2: 84b0         sub sp,#0x10
080F08E4: 051c         add r5,r0,#0x0
080F08E6: 687b         ldrb r0,[r5,#0xd]
080F08E8: 0528         cmp r0,#0x5
080F08EA: 00d9         bls 0x080f08ee
080F08EC: 29e1         b 0x080f0b42
080F08EE: 8000         lsl r0,r0,#0x2
080F08F0: 0149         ldr r1,[0x080f08f8]
080F08F2: 4018         add r0,r0,r1
080F08F4: 0068         ldr r0,[r0,#0x0]
080F08F6: 8746         mov pc,r0
080F0B42: 04b0         add sp,#0x10
080F0B44: f0bc         pop {r4,r5,r6,r7}
080F0B46: 01bc         pop {r0}
080F0B48: 0047         bx r0
