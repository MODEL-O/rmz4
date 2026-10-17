; undefined FUN_08043484(void)
; entry 0x8043484  size 48 bytes

08043484: 021c         add r2,r0,#0x0
08043486: 8c30         add r0,#0x8c
08043488: 0021         mov r1,#0x0
0804348A: 0160         str r1,[r0,#0x0]
0804348C: 0430         add r0,#0x4
0804348E: 0160         str r1,[r0,#0x0]
08043490: 0430         add r0,#0x4
08043492: 0170         strb r1,[r0,#0x0]
08043494: 917a         ldrb r1,[r2,#0xa]
08043496: fb20         mov r0,#0xfb
08043498: 0840         and r0,r1
0804349A: fe21         mov r1,#0xfe
0804349C: 0840         and r0,r1
0804349E: 9072         strb r0,[r2,#0xa]
080434A0: 0449         ldr r1,[0x080434b4]
080434A2: 507a         ldrb r0,[r2,#0x9]
080434A4: 8000         lsl r0,r0,#0x2
080434A6: 4018         add r0,r0,r1
080434A8: 0421         mov r1,#0x4
080434AA: d160         str r1,[r2,#0xc]
080434AC: 0068         ldr r0,[r0,#0x0]
080434AE: 0069         ldr r0,[r0,#0x10]
080434B0: 5061         str r0,[r2,#0x14]
080434B2: 7047         bx lr
