; undefined FUN_080415d4(void)
; entry 0x80415d4  size 48 bytes

080415D4: 021c         add r2,r0,#0x0
080415D6: 8c30         add r0,#0x8c
080415D8: 0021         mov r1,#0x0
080415DA: 0160         str r1,[r0,#0x0]
080415DC: 0430         add r0,#0x4
080415DE: 0160         str r1,[r0,#0x0]
080415E0: 0430         add r0,#0x4
080415E2: 0170         strb r1,[r0,#0x0]
080415E4: 917a         ldrb r1,[r2,#0xa]
080415E6: fb20         mov r0,#0xfb
080415E8: 0840         and r0,r1
080415EA: fe21         mov r1,#0xfe
080415EC: 0840         and r0,r1
080415EE: 9072         strb r0,[r2,#0xa]
080415F0: 0449         ldr r1,[0x08041604]
080415F2: 507a         ldrb r0,[r2,#0x9]
080415F4: 8000         lsl r0,r0,#0x2
080415F6: 4018         add r0,r0,r1
080415F8: 0421         mov r1,#0x4
080415FA: d160         str r1,[r2,#0xc]
080415FC: 0068         ldr r0,[r0,#0x0]
080415FE: 0069         ldr r0,[r0,#0x10]
08041600: 5061         str r0,[r2,#0x14]
08041602: 7047         bx lr
