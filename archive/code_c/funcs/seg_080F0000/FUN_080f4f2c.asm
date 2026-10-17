; undefined FUN_080f4f2c(void)
; entry 0x80f4f2c  size 38 bytes

080F4F2C: 30b5         push {r4,r5,lr}
080F4F2E: 82b0         sub sp,#0x8
080F4F30: 051c         add r5,r0,#0x0
080F4F32: 687b         ldrb r0,[r5,#0xd]
080F4F34: 0528         cmp r0,#0x5
080F4F36: 00d9         bls 0x080f4f3a
080F4F38: 89e1         b 0x080f524e
080F4F3A: 8000         lsl r0,r0,#0x2
080F4F3C: 0149         ldr r1,[0x080f4f44]
080F4F3E: 4018         add r0,r0,r1
080F4F40: 0068         ldr r0,[r0,#0x0]
080F4F42: 8746         mov pc,r0
080F524E: 281c         add r0,r5,#0x0
080F5250: 27f7cefe     bl 0x0801cff0
080F5254: 02b0         add sp,#0x8
080F5256: 30bc         pop {r4,r5}
080F5258: 01bc         pop {r0}
080F525A: 0047         bx r0
