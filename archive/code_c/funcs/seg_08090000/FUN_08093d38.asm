; undefined FUN_08093d38(void)
; entry 0x8093d38  size 54 bytes

08093D38: f0b5         push {r4,r5,r6,r7,lr}
08093D3A: 4746         mov r7,r8
08093D3C: 80b4         push {r7}
08093D3E: 83b0         sub sp,#0xc
08093D40: 051c         add r5,r0,#0x0
08093D42: a87a         ldrb r0,[r5,#0xa]
08093D44: 0009         lsr r0,r0,#0x4
08093D46: 8046         mov r8,r0
08093D48: 0120         mov r0,#0x1
08093D4A: 4146         mov r1,r8
08093D4C: 0140         and r1,r0
08093D4E: 8846         mov r8,r1
08093D50: e87b         ldrb r0,[r5,#0xf]
08093D52: 0428         cmp r0,#0x4
08093D54: 00d9         bls 0x08093d58
08093D56: e7e0         b 0x08093f28
08093D58: 8000         lsl r0,r0,#0x2
08093D5A: 0249         ldr r1,[0x08093d64]
08093D5C: 4018         add r0,r0,r1
08093D5E: 0068         ldr r0,[r0,#0x0]
08093D60: 8746         mov pc,r0
08093F28: 03b0         add sp,#0xc
08093F2A: 08bc         pop {r3}
08093F2C: 9846         mov r8,r3
08093F2E: f0bc         pop {r4,r5,r6,r7}
08093F30: 01bc         pop {r0}
08093F32: 0047         bx r0
