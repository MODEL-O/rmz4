; undefined FUN_080befc0(void)
; entry 0x80befc0  size 54 bytes

080BEFC0: 021c         add r2,r0,#0x0
080BEFC2: 917a         ldrb r1,[r2,#0xa]
080BEFC4: fe20         mov r0,#0xfe
080BEFC6: 0840         and r0,r1
080BEFC8: 0021         mov r1,#0x0
080BEFCA: 9072         strb r0,[r2,#0xa]
080BEFCC: 101c         add r0,r2,#0x0
080BEFCE: 8c30         add r0,#0x8c
080BEFD0: 0160         str r1,[r0,#0x0]
080BEFD2: 0430         add r0,#0x4
080BEFD4: 0160         str r1,[r0,#0x0]
080BEFD6: 0430         add r0,#0x4
080BEFD8: 0170         strb r1,[r0,#0x0]
080BEFDA: 917a         ldrb r1,[r2,#0xa]
080BEFDC: fb20         mov r0,#0xfb
080BEFDE: 0840         and r0,r1
080BEFE0: 9072         strb r0,[r2,#0xa]
080BEFE2: 0549         ldr r1,[0x080beff8]
080BEFE4: 507a         ldrb r0,[r2,#0x9]
080BEFE6: 8000         lsl r0,r0,#0x2
080BEFE8: 4018         add r0,r0,r1
080BEFEA: 0421         mov r1,#0x4
080BEFEC: d160         str r1,[r2,#0xc]
080BEFEE: 0068         ldr r0,[r0,#0x0]
080BEFF0: 0069         ldr r0,[r0,#0x10]
080BEFF2: 5061         str r0,[r2,#0x14]
080BEFF4: 7047         bx lr
