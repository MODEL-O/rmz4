; undefined FUN_080d37e8(void)
; entry 0x80d37e8  size 32 bytes

080D37E8: 00b5         push {lr}
080D37EA: 021c         add r2,r0,#0x0
080D37EC: 137c         ldrb r3,[r2,#0x10]
080D37EE: 002b         cmp r3,#0x0
080D37F0: 05d1         bne 0x080d37fe
080D37F2: 0549         ldr r1,[0x080d3808]
080D37F4: 507c         ldrb r0,[r2,#0x11]
080D37F6: 8000         lsl r0,r0,#0x2
080D37F8: 0431         add r1,#0x4
080D37FA: 4018         add r0,r0,r1
080D37FC: 0360         str r3,[r0,#0x0]
080D37FE: 101c         add r0,r2,#0x0
080D3800: fdf716fa     bl 0x080d0c30
080D3804: 01bc         pop {r0}
080D3806: 0047         bx r0
