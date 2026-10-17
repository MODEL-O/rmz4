; undefined FUN_080b37b8(void)
; entry 0x80b37b8  size 68 bytes

080B37B8: 10b5         push {r4,lr}
080B37BA: 021c         add r2,r0,#0x0
080B37BC: 131c         add r3,r2,#0x0
080B37BE: b433         add r3,#0xb4
080B37C0: 1878         ldrb r0,[r3,#0x0]
080B37C2: 0028         cmp r0,#0x0
080B37C4: 08d1         bne 0x080b37d8
080B37C6: 101c         add r0,r2,#0x0
080B37C8: b830         add r0,#0xb8
080B37CA: 0168         ldr r1,[r0,#0x0]
080B37CC: b024         mov r4,#0xb0
080B37CE: a401         lsl r4,r4,#0x6
080B37D0: 0919         add r1,r1,r4
080B37D2: 0160         str r1,[r0,#0x0]
080B37D4: 0120         mov r0,#0x1
080B37D6: 06e0         b 0x080b37e6
080B37D8: 101c         add r0,r2,#0x0
080B37DA: b830         add r0,#0xb8
080B37DC: 0168         ldr r1,[r0,#0x0]
080B37DE: 054c         ldr r4,[0x080b37f4]
080B37E0: 0919         add r1,r1,r4
080B37E2: 0160         str r1,[r0,#0x0]
080B37E4: 0020         mov r0,#0x0
080B37E6: 1870         strb r0,[r3,#0x0]
080B37E8: d07b         ldrb r0,[r2,#0xf]
080B37EA: 0028         cmp r0,#0x0
080B37EC: 04d1         bne 0x080b37f8
080B37EE: fe20         mov r0,#0xfe
080B37F0: 03e0         b 0x080b37fa
080B37F8: 0120         mov r0,#0x1
080B37FA: 9074         strb r0,[r2,#0x12]
080B37FC: 10bc         pop {r4}
080B37FE: 01bc         pop {r0}
080B3800: 0047         bx r0
