; undefined FUN_080732ec(void)
; entry 0x80732ec  size 42 bytes

080732EC: 30b5         push {r4,r5,lr}
080732EE: 84b0         sub sp,#0x10
080732F0: 041c         add r4,r0,#0x0
080732F2: 0748         ldr r0,[0x08073310]
080732F4: 4168         ldr r1,[r0,#0x4]
080732F6: 0068         ldr r0,[r0,#0x0]
080732F8: 0090         str r0,[sp,#0x0]
080732FA: 0191         str r1,[sp,#0x4]
080732FC: e07b         ldrb r0,[r4,#0xf]
080732FE: 0728         cmp r0,#0x7
08073300: 00d9         bls 0x08073304
08073302: aee0         b 0x08073462
08073304: 8000         lsl r0,r0,#0x2
08073306: 0349         ldr r1,[0x08073314]
08073308: 4018         add r0,r0,r1
0807330A: 0068         ldr r0,[r0,#0x0]
0807330C: 8746         mov pc,r0
08073462: 04b0         add sp,#0x10
08073464: 30bc         pop {r4,r5}
08073466: 01bc         pop {r0}
08073468: 0047         bx r0
