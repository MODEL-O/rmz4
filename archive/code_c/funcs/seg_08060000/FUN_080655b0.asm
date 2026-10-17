; undefined FUN_080655b0(void)
; entry 0x80655b0  size 42 bytes

080655B0: 70b5         push {r4,r5,r6,lr}
080655B2: 84b0         sub sp,#0x10
080655B4: 041c         add r4,r0,#0x0
080655B6: 0748         ldr r0,[0x080655d4]
080655B8: 4168         ldr r1,[r0,#0x4]
080655BA: 0068         ldr r0,[r0,#0x0]
080655BC: 0090         str r0,[sp,#0x0]
080655BE: 0191         str r1,[sp,#0x4]
080655C0: e07b         ldrb r0,[r4,#0xf]
080655C2: 0728         cmp r0,#0x7
080655C4: 00d9         bls 0x080655c8
080655C6: ece0         b 0x080657a2
080655C8: 8000         lsl r0,r0,#0x2
080655CA: 0349         ldr r1,[0x080655d8]
080655CC: 4018         add r0,r0,r1
080655CE: 0068         ldr r0,[r0,#0x0]
080655D0: 8746         mov pc,r0
080657A2: 04b0         add sp,#0x10
080657A4: 70bc         pop {r4,r5,r6}
080657A6: 01bc         pop {r0}
080657A8: 0047         bx r0
