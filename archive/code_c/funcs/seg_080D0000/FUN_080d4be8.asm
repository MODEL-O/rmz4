; undefined FUN_080d4be8(void)
; entry 0x80d4be8  size 54 bytes

080D4BE8: 00b5         push {lr}
080D4BEA: 827a         ldrb r2,[r0,#0xa]
080D4BEC: 0121         mov r1,#0x1
080D4BEE: 1143         orr r1,r2
080D4BF0: 8172         strb r1,[r0,#0xa]
080D4BF2: 031c         add r3,r0,#0x0
080D4BF4: 4933         add r3,#0x49
080D4BF6: 1a78         ldrb r2,[r3,#0x0]
080D4BF8: 0d21         mov r1,#0xd
080D4BFA: 4942         rsb r1,r1
080D4BFC: 1140         and r1,r2
080D4BFE: 1970         strb r1,[r3,#0x0]
080D4C00: 3c21         mov r1,#0x3c
080D4C02: 8174         strb r1,[r0,#0x12]
080D4C04: 064a         ldr r2,[0x080d4c20]
080D4C06: 417a         ldrb r1,[r0,#0x9]
080D4C08: 8900         lsl r1,r1,#0x2
080D4C0A: 8918         add r1,r1,r2
080D4C0C: 0122         mov r2,#0x1
080D4C0E: c260         str r2,[r0,#0xc]
080D4C10: 0968         ldr r1,[r1,#0x0]
080D4C12: 4968         ldr r1,[r1,#0x4]
080D4C14: 4161         str r1,[r0,#0x14]
080D4C16: 00f005f8     bl 0x080d4c24
080D4C1A: 01bc         pop {r0}
080D4C1C: 0047         bx r0
