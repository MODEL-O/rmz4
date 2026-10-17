; undefined FUN_08042a08(void)
; entry 0x8042a08  size 50 bytes

08042A08: 10b5         push {r4,lr}
08042A0A: 041c         add r4,r0,#0x0
08042A0C: 0b49         ldr r1,[0x08042a3c]
08042A0E: 607a         ldrb r0,[r4,#0x9]
08042A10: 8000         lsl r0,r0,#0x2
08042A12: 4018         add r0,r0,r1
08042A14: 0121         mov r1,#0x1
08042A16: e160         str r1,[r4,#0xc]
08042A18: 0068         ldr r0,[r0,#0x0]
08042A1A: 4068         ldr r0,[r0,#0x4]
08042A1C: 6061         str r0,[r4,#0x14]
08042A1E: 0849         ldr r1,[0x08042a40]
08042A20: 207c         ldrb r0,[r4,#0x10]
08042A22: 8000         lsl r0,r0,#0x2
08042A24: 4018         add r0,r0,r1
08042A26: 0168         ldr r1,[r0,#0x0]
08042A28: 201c         add r0,r4,#0x0
08042A2A: e6f0a9fa     bl 0x08128f80
08042A2E: 201c         add r0,r4,#0x0
08042A30: 00f008f8     bl 0x08042a44
08042A34: 10bc         pop {r4}
08042A36: 01bc         pop {r0}
08042A38: 0047         bx r0
