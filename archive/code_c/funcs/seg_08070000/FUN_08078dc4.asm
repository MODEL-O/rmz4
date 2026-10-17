; undefined FUN_08078dc4(void)
; entry 0x8078dc4  size 32 bytes

08078DC4: 70b5         push {r4,r5,r6,lr}
08078DC6: 82b0         sub sp,#0x8
08078DC8: 041c         add r4,r0,#0x0
08078DCA: e07b         ldrb r0,[r4,#0xf]
08078DCC: 0728         cmp r0,#0x7
08078DCE: 00d9         bls 0x08078dd2
08078DD0: 9fe0         b 0x08078f12
08078DD2: 8000         lsl r0,r0,#0x2
08078DD4: 0149         ldr r1,[0x08078ddc]
08078DD6: 4018         add r0,r0,r1
08078DD8: 0068         ldr r0,[r0,#0x0]
08078DDA: 8746         mov pc,r0
08078F12: 02b0         add sp,#0x8
08078F14: 70bc         pop {r4,r5,r6}
08078F16: 01bc         pop {r0}
08078F18: 0047         bx r0
