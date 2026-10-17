; undefined FUN_08046af0(void)
; entry 0x8046af0  size 48 bytes

08046AF0: 021c         add r2,r0,#0x0
08046AF2: 8c30         add r0,#0x8c
08046AF4: 0021         mov r1,#0x0
08046AF6: 0160         str r1,[r0,#0x0]
08046AF8: 0430         add r0,#0x4
08046AFA: 0160         str r1,[r0,#0x0]
08046AFC: 0430         add r0,#0x4
08046AFE: 0170         strb r1,[r0,#0x0]
08046B00: 917a         ldrb r1,[r2,#0xa]
08046B02: fb20         mov r0,#0xfb
08046B04: 0840         and r0,r1
08046B06: fe21         mov r1,#0xfe
08046B08: 0840         and r0,r1
08046B0A: 9072         strb r0,[r2,#0xa]
08046B0C: 0449         ldr r1,[0x08046b20]
08046B0E: 507a         ldrb r0,[r2,#0x9]
08046B10: 8000         lsl r0,r0,#0x2
08046B12: 4018         add r0,r0,r1
08046B14: 0421         mov r1,#0x4
08046B16: d160         str r1,[r2,#0xc]
08046B18: 0068         ldr r0,[r0,#0x0]
08046B1A: 0069         ldr r0,[r0,#0x10]
08046B1C: 5061         str r0,[r2,#0x14]
08046B1E: 7047         bx lr
