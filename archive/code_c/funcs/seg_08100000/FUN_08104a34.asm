; undefined FUN_08104a34(void)
; entry 0x8104a34  size 62 bytes

08104A34: 10b5         push {r4,lr}
08104A36: 021c         add r2,r0,#0x0
08104A38: 5069         ldr r0,[r2,#0x14]
08104A3A: 0121         mov r1,#0x1
08104A3C: 0840         and r0,r1
08104A3E: 0028         cmp r0,#0x0
08104A40: 14d0         beq 0x08104a6c
08104A42: d26a         ldr r2,[r2,#0x2c]
08104A44: 907c         ldrb r0,[r2,#0x12]
08104A46: 0028         cmp r0,#0x0
08104A48: 10d1         bne 0x08104a6c
08104A4A: 101c         add r0,r2,#0x0
08104A4C: b530         add r0,#0xb5
08104A4E: 0378         ldrb r3,[r0,#0x0]
08104A50: 012b         cmp r3,#0x1
08104A52: 0bd1         bne 0x08104a6c
08104A54: 0748         ldr r0,[0x08104a74]
08104A56: 0068         ldr r0,[r0,#0x0]
08104A58: b324         mov r4,#0xb3
08104A5A: 6400         lsl r4,r4,#0x1
08104A5C: 0119         add r1,r0,r4
08104A5E: 3020         mov r0,#0x30
08104A60: 0870         strb r0,[r1,#0x0]
08104A62: 3c20         mov r0,#0x3c
08104A64: 9074         strb r0,[r2,#0x12]
08104A66: 101c         add r0,r2,#0x0
08104A68: b630         add r0,#0xb6
08104A6A: 0370         strb r3,[r0,#0x0]
08104A6C: 10bc         pop {r4}
08104A6E: 01bc         pop {r0}
08104A70: 0047         bx r0
