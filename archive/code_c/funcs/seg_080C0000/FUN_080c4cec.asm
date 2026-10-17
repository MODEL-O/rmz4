; undefined FUN_080c4cec(void)
; entry 0x80c4cec  size 60 bytes

080C4CEC: 10b5         push {r4,lr}
080C4CEE: 041c         add r4,r0,#0x0
080C4CF0: 0d49         ldr r1,[0x080c4d28]
080C4CF2: 607a         ldrb r0,[r4,#0x9]
080C4CF4: 8000         lsl r0,r0,#0x2
080C4CF6: 4018         add r0,r0,r1
080C4CF8: 0121         mov r1,#0x1
080C4CFA: e160         str r1,[r4,#0xc]
080C4CFC: 0068         ldr r0,[r0,#0x0]
080C4CFE: 4068         ldr r0,[r0,#0x4]
080C4D00: 6061         str r0,[r4,#0x14]
080C4D02: a17a         ldrb r1,[r4,#0xa]
080C4D04: fe20         mov r0,#0xfe
080C4D06: 0840         and r0,r1
080C4D08: 0022         mov r2,#0x0
080C4D0A: 0221         mov r1,#0x2
080C4D0C: 0843         orr r0,r1
080C4D0E: a072         strb r0,[r4,#0xa]
080C4D10: 201c         add r0,r4,#0x0
080C4D12: b430         add r0,#0xb4
080C4D14: 0270         strb r2,[r0,#0x0]
080C4D16: 201c         add r0,r4,#0x0
080C4D18: 57f7c0ff     bl 0x0801cc9c
080C4D1C: 201c         add r0,r4,#0x0
080C4D1E: 00f0c5f8     bl 0x080c4eac
080C4D22: 10bc         pop {r4}
080C4D24: 01bc         pop {r0}
080C4D26: 0047         bx r0
