; undefined FUN_08090f1c(void)
; entry 0x8090f1c  size 50 bytes

08090F1C: 10b5         push {r4,lr}
08090F1E: 041c         add r4,r0,#0x0
08090F20: 0b49         ldr r1,[0x08090f50]
08090F22: 607a         ldrb r0,[r4,#0x9]
08090F24: 8000         lsl r0,r0,#0x2
08090F26: 4018         add r0,r0,r1
08090F28: 0121         mov r1,#0x1
08090F2A: e160         str r1,[r4,#0xc]
08090F2C: 0068         ldr r0,[r0,#0x0]
08090F2E: 4068         ldr r0,[r0,#0x4]
08090F30: 6061         str r0,[r4,#0x14]
08090F32: 0849         ldr r1,[0x08090f54]
08090F34: 207c         ldrb r0,[r4,#0x10]
08090F36: 8000         lsl r0,r0,#0x2
08090F38: 4018         add r0,r0,r1
08090F3A: 0168         ldr r1,[r0,#0x0]
08090F3C: 201c         add r0,r4,#0x0
08090F3E: 98f01ff8     bl 0x08128f80
08090F42: 201c         add r0,r4,#0x0
08090F44: 00f008f8     bl 0x08090f58
08090F48: 10bc         pop {r4}
08090F4A: 01bc         pop {r0}
08090F4C: 0047         bx r0
