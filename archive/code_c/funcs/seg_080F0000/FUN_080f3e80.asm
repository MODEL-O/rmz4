; undefined FUN_080f3e80(void)
; entry 0x80f3e80  size 74 bytes

080F3E80: 10b5         push {r4,lr}
080F3E82: 041c         add r4,r0,#0x0
080F3E84: 217c         ldrb r1,[r4,#0x10]
080F3E86: 4800         lsl r0,r1,#0x1
080F3E88: 4018         add r0,r0,r1
080F3E8A: 2074         strb r0,[r4,#0x10]
080F3E8C: 607c         ldrb r0,[r4,#0x11]
080F3E8E: 0728         cmp r0,#0x7
080F3E90: 1cd8         bhi 0x080f3ecc
080F3E92: 8000         lsl r0,r0,#0x2
080F3E94: 0149         ldr r1,[0x080f3e9c]
080F3E96: 4018         add r0,r0,r1
080F3E98: 0068         ldr r0,[r0,#0x0]
080F3E9A: 8746         mov pc,r0
080F3ECC: 0b49         ldr r1,[0x080f3efc]
080F3ECE: 207c         ldrb r0,[r4,#0x10]
080F3ED0: 8000         lsl r0,r0,#0x2
080F3ED2: 4018         add r0,r0,r1
080F3ED4: 0168         ldr r1,[r0,#0x0]
080F3ED6: 201c         add r0,r4,#0x0
080F3ED8: 35f052f8     bl 0x08128f80
080F3EDC: 0849         ldr r1,[0x080f3f00]
080F3EDE: 607a         ldrb r0,[r4,#0x9]
080F3EE0: 8000         lsl r0,r0,#0x2
080F3EE2: 4018         add r0,r0,r1
080F3EE4: 0121         mov r1,#0x1
080F3EE6: e160         str r1,[r4,#0xc]
080F3EE8: 0068         ldr r0,[r0,#0x0]
080F3EEA: 4068         ldr r0,[r0,#0x4]
080F3EEC: 6061         str r0,[r4,#0x14]
080F3EEE: 201c         add r0,r4,#0x0
080F3EF0: 00f008f8     bl 0x080f3f04
080F3EF4: 10bc         pop {r4}
080F3EF6: 01bc         pop {r0}
080F3EF8: 0047         bx r0
