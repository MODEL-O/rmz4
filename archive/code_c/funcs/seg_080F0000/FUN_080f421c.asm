; undefined FUN_080f421c(void)
; entry 0x80f421c  size 32 bytes

080F421C: 30b5         push {r4,r5,lr}
080F421E: 8ab0         sub sp,#0x28
080F4220: 051c         add r5,r0,#0x0
080F4222: 687b         ldrb r0,[r5,#0xd]
080F4224: 0428         cmp r0,#0x4
080F4226: 00d9         bls 0x080f422a
080F4228: bce0         b 0x080f43a4
080F422A: 8000         lsl r0,r0,#0x2
080F422C: 0149         ldr r1,[0x080f4234]
080F422E: 4018         add r0,r0,r1
080F4230: 0068         ldr r0,[r0,#0x0]
080F4232: 8746         mov pc,r0
080F43A4: 0ab0         add sp,#0x28
080F43A6: 30bc         pop {r4,r5}
080F43A8: 01bc         pop {r0}
080F43AA: 0047         bx r0
