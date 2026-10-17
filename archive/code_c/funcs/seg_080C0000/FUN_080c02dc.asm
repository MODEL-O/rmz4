; undefined FUN_080c02dc(void)
; entry 0x80c02dc  size 54 bytes

080C02DC: 021c         add r2,r0,#0x0
080C02DE: 917a         ldrb r1,[r2,#0xa]
080C02E0: fe20         mov r0,#0xfe
080C02E2: 0840         and r0,r1
080C02E4: 0021         mov r1,#0x0
080C02E6: 9072         strb r0,[r2,#0xa]
080C02E8: 101c         add r0,r2,#0x0
080C02EA: 8c30         add r0,#0x8c
080C02EC: 0160         str r1,[r0,#0x0]
080C02EE: 0430         add r0,#0x4
080C02F0: 0160         str r1,[r0,#0x0]
080C02F2: 0430         add r0,#0x4
080C02F4: 0170         strb r1,[r0,#0x0]
080C02F6: 917a         ldrb r1,[r2,#0xa]
080C02F8: fb20         mov r0,#0xfb
080C02FA: 0840         and r0,r1
080C02FC: 9072         strb r0,[r2,#0xa]
080C02FE: 0549         ldr r1,[0x080c0314]
080C0300: 507a         ldrb r0,[r2,#0x9]
080C0302: 8000         lsl r0,r0,#0x2
080C0304: 4018         add r0,r0,r1
080C0306: 0421         mov r1,#0x4
080C0308: d160         str r1,[r2,#0xc]
080C030A: 0068         ldr r0,[r0,#0x0]
080C030C: 0069         ldr r0,[r0,#0x10]
080C030E: 5061         str r0,[r2,#0x14]
080C0310: 7047         bx lr
