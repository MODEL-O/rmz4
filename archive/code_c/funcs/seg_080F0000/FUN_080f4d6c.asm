; undefined FUN_080f4d6c(void)
; entry 0x80f4d6c  size 32 bytes

080F4D6C: 30b5         push {r4,r5,lr}
080F4D6E: 8ab0         sub sp,#0x28
080F4D70: 051c         add r5,r0,#0x0
080F4D72: 687b         ldrb r0,[r5,#0xd]
080F4D74: 0428         cmp r0,#0x4
080F4D76: 00d9         bls 0x080f4d7a
080F4D78: cde0         b 0x080f4f16
080F4D7A: 8000         lsl r0,r0,#0x2
080F4D7C: 0149         ldr r1,[0x080f4d84]
080F4D7E: 4018         add r0,r0,r1
080F4D80: 0068         ldr r0,[r0,#0x0]
080F4D82: 8746         mov pc,r0
080F4F16: 0ab0         add sp,#0x28
080F4F18: 30bc         pop {r4,r5}
080F4F1A: 01bc         pop {r0}
080F4F1C: 0047         bx r0
