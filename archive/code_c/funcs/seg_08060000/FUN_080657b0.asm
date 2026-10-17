; undefined FUN_080657b0(void)
; entry 0x80657b0  size 50 bytes

080657B0: f0b5         push {r4,r5,r6,r7,lr}
080657B2: 86b0         sub sp,#0x18
080657B4: 051c         add r5,r0,#0x0
080657B6: 0948         ldr r0,[0x080657dc]
080657B8: 4168         ldr r1,[r0,#0x4]
080657BA: 0068         ldr r0,[r0,#0x0]
080657BC: 0090         str r0,[sp,#0x0]
080657BE: 0191         str r1,[sp,#0x4]
080657C0: a87a         ldrb r0,[r5,#0xa]
080657C2: 0609         lsr r6,r0,#0x4
080657C4: 0120         mov r0,#0x1
080657C6: 0640         and r6,r0
080657C8: e87b         ldrb r0,[r5,#0xf]
080657CA: 0728         cmp r0,#0x7
080657CC: 00d9         bls 0x080657d0
080657CE: 14e1         b 0x080659fa
080657D0: 8000         lsl r0,r0,#0x2
080657D2: 0349         ldr r1,[0x080657e0]
080657D4: 4018         add r0,r0,r1
080657D6: 0068         ldr r0,[r0,#0x0]
080657D8: 8746         mov pc,r0
080659FA: 06b0         add sp,#0x18
080659FC: f0bc         pop {r4,r5,r6,r7}
080659FE: 01bc         pop {r0}
08065A00: 0047         bx r0
