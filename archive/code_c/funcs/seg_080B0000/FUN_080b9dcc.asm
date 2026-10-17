; undefined FUN_080b9dcc(void)
; entry 0x80b9dcc  size 68 bytes

080B9DCC: 10b5         push {r4,lr}
080B9DCE: 021c         add r2,r0,#0x0
080B9DD0: 131c         add r3,r2,#0x0
080B9DD2: b433         add r3,#0xb4
080B9DD4: 1878         ldrb r0,[r3,#0x0]
080B9DD6: 0028         cmp r0,#0x0
080B9DD8: 08d1         bne 0x080b9dec
080B9DDA: 101c         add r0,r2,#0x0
080B9DDC: b830         add r0,#0xb8
080B9DDE: 0168         ldr r1,[r0,#0x0]
080B9DE0: b024         mov r4,#0xb0
080B9DE2: a401         lsl r4,r4,#0x6
080B9DE4: 0919         add r1,r1,r4
080B9DE6: 0160         str r1,[r0,#0x0]
080B9DE8: 0120         mov r0,#0x1
080B9DEA: 06e0         b 0x080b9dfa
080B9DEC: 101c         add r0,r2,#0x0
080B9DEE: b830         add r0,#0xb8
080B9DF0: 0168         ldr r1,[r0,#0x0]
080B9DF2: 054c         ldr r4,[0x080b9e08]
080B9DF4: 0919         add r1,r1,r4
080B9DF6: 0160         str r1,[r0,#0x0]
080B9DF8: 0020         mov r0,#0x0
080B9DFA: 1870         strb r0,[r3,#0x0]
080B9DFC: d07b         ldrb r0,[r2,#0xf]
080B9DFE: 0028         cmp r0,#0x0
080B9E00: 04d1         bne 0x080b9e0c
080B9E02: fe20         mov r0,#0xfe
080B9E04: 03e0         b 0x080b9e0e
080B9E0C: 0120         mov r0,#0x1
080B9E0E: 9074         strb r0,[r2,#0x12]
080B9E10: 10bc         pop {r4}
080B9E12: 01bc         pop {r0}
080B9E14: 0047         bx r0
