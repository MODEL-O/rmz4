; undefined FUN_080f5da0(void)
; entry 0x80f5da0  size 50 bytes

080F5DA0: 10b5         push {r4,lr}
080F5DA2: 041c         add r4,r0,#0x0
080F5DA4: 0b49         ldr r1,[0x080f5dd4]
080F5DA6: 207c         ldrb r0,[r4,#0x10]
080F5DA8: 8000         lsl r0,r0,#0x2
080F5DAA: 4018         add r0,r0,r1
080F5DAC: 0168         ldr r1,[r0,#0x0]
080F5DAE: 201c         add r0,r4,#0x0
080F5DB0: 33f0e6f8     bl 0x08128f80
080F5DB4: 0849         ldr r1,[0x080f5dd8]
080F5DB6: 607a         ldrb r0,[r4,#0x9]
080F5DB8: 8000         lsl r0,r0,#0x2
080F5DBA: 4018         add r0,r0,r1
080F5DBC: 0121         mov r1,#0x1
080F5DBE: e160         str r1,[r4,#0xc]
080F5DC0: 0068         ldr r0,[r0,#0x0]
080F5DC2: 4068         ldr r0,[r0,#0x4]
080F5DC4: 6061         str r0,[r4,#0x14]
080F5DC6: 201c         add r0,r4,#0x0
080F5DC8: 00f008f8     bl 0x080f5ddc
080F5DCC: 10bc         pop {r4}
080F5DCE: 01bc         pop {r0}
080F5DD0: 0047         bx r0
