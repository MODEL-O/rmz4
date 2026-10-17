; undefined FUN_080625d8(void)
; entry 0x80625d8  size 42 bytes

080625D8: 70b5         push {r4,r5,r6,lr}
080625DA: 82b0         sub sp,#0x8
080625DC: 061c         add r6,r0,#0x0
080625DE: 0748         ldr r0,[0x080625fc]
080625E0: 4168         ldr r1,[r0,#0x4]
080625E2: 0068         ldr r0,[r0,#0x0]
080625E4: 0090         str r0,[sp,#0x0]
080625E6: 0191         str r1,[sp,#0x4]
080625E8: f07b         ldrb r0,[r6,#0xf]
080625EA: 0728         cmp r0,#0x7
080625EC: 00d9         bls 0x080625f0
080625EE: d8e0         b 0x080627a2
080625F0: 8000         lsl r0,r0,#0x2
080625F2: 0349         ldr r1,[0x08062600]
080625F4: 4018         add r0,r0,r1
080625F6: 0068         ldr r0,[r0,#0x0]
080625F8: 8746         mov pc,r0
080627A2: 02b0         add sp,#0x8
080627A4: 70bc         pop {r4,r5,r6}
080627A6: 01bc         pop {r0}
080627A8: 0047         bx r0
