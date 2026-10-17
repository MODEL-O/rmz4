; undefined FUN_080f02ec(void)
; entry 0x80f02ec  size 32 bytes

080F02EC: f0b5         push {r4,r5,r6,r7,lr}
080F02EE: 84b0         sub sp,#0x10
080F02F0: 061c         add r6,r0,#0x0
080F02F2: 707b         ldrb r0,[r6,#0xd]
080F02F4: 0528         cmp r0,#0x5
080F02F6: 00d9         bls 0x080f02fa
080F02F8: 5ce1         b 0x080f05b4
080F02FA: 8000         lsl r0,r0,#0x2
080F02FC: 0149         ldr r1,[0x080f0304]
080F02FE: 4018         add r0,r0,r1
080F0300: 0068         ldr r0,[r0,#0x0]
080F0302: 8746         mov pc,r0
080F05B4: 04b0         add sp,#0x10
080F05B6: f0bc         pop {r4,r5,r6,r7}
080F05B8: 01bc         pop {r0}
080F05BA: 0047         bx r0
