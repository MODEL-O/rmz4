; undefined FUN_080eb3e8(void)
; entry 0x80eb3e8  size 36 bytes

080EB3E8: f0b5         push {r4,r5,r6,r7,lr}
080EB3EA: 4746         mov r7,r8
080EB3EC: 80b4         push {r7}
080EB3EE: 061c         add r6,r0,#0x0
080EB3F0: b07b         ldrb r0,[r6,#0xe]
080EB3F2: 0528         cmp r0,#0x5
080EB3F4: 00d9         bls 0x080eb3f8
080EB3F6: e2e1         b 0x080eb7be
080EB3F8: 8000         lsl r0,r0,#0x2
080EB3FA: 0249         ldr r1,[0x080eb404]
080EB3FC: 4018         add r0,r0,r1
080EB3FE: 0068         ldr r0,[r0,#0x0]
080EB400: 8746         mov pc,r0
080EB7BE: 08bc         pop {r3}
080EB7C0: 9846         mov r8,r3
080EB7C2: f0bc         pop {r4,r5,r6,r7}
080EB7C4: 01bc         pop {r0}
080EB7C6: 0047         bx r0
