; undefined FUN_08028a48(void)
; entry 0x8028a48  size 64 bytes

08028A48: 00b5         push {lr}
08028A4A: 011c         add r1,r0,#0x0
08028A4C: ca68         ldr r2,[r1,#0xc]
08028A4E: 5078         ldrb r0,[r2,#0x1]
08028A50: 0028         cmp r0,#0x0
08028A52: 0ad1         bne 0x08028a6a
08028A54: a223         mov r3,#0xa2
08028A56: 5b00         lsl r3,r3,#0x1
08028A58: c818         add r0,r1,r3
08028A5A: 0068         ldr r0,[r0,#0x0]
08028A5C: 0028         cmp r0,#0x0
08028A5E: 10d0         beq 0x08028a82
08028A60: 101c         add r0,r2,#0x0
08028A62: 0838         sub r0,#0x8
08028A64: c860         str r0,[r1,#0xc]
08028A66: 0120         mov r0,#0x1
08028A68: 0ce0         b 0x08028a84
08028A6A: a223         mov r3,#0xa2
08028A6C: 5b00         lsl r3,r3,#0x1
08028A6E: c818         add r0,r1,r3
08028A70: 5178         ldrb r1,[r2,#0x1]
08028A72: 0160         str r1,[r0,#0x0]
08028A74: 0820         mov r0,#0x8
08028A76: 0140         and r1,r0
08028A78: 0029         cmp r1,#0x0
08028A7A: 02d0         beq 0x08028a82
08028A7C: 0249         ldr r1,[0x08028a88]
08028A7E: 0020         mov r0,#0x0
08028A80: 0880         strh r0,[r1,#0x0]
08028A82: 0020         mov r0,#0x0
08028A84: 02bc         pop {r1}
08028A86: 0847         bx r1
