; undefined FUN_08098bb0(void)
; entry 0x8098bb0  size 48 bytes

08098BB0: 021c         add r2,r0,#0x0
08098BB2: 8c30         add r0,#0x8c
08098BB4: 0021         mov r1,#0x0
08098BB6: 0160         str r1,[r0,#0x0]
08098BB8: 0430         add r0,#0x4
08098BBA: 0160         str r1,[r0,#0x0]
08098BBC: 0430         add r0,#0x4
08098BBE: 0170         strb r1,[r0,#0x0]
08098BC0: 917a         ldrb r1,[r2,#0xa]
08098BC2: fb20         mov r0,#0xfb
08098BC4: 0840         and r0,r1
08098BC6: fe21         mov r1,#0xfe
08098BC8: 0840         and r0,r1
08098BCA: 9072         strb r0,[r2,#0xa]
08098BCC: 0449         ldr r1,[0x08098be0]
08098BCE: 507a         ldrb r0,[r2,#0x9]
08098BD0: 8000         lsl r0,r0,#0x2
08098BD2: 4018         add r0,r0,r1
08098BD4: 0421         mov r1,#0x4
08098BD6: d160         str r1,[r2,#0xc]
08098BD8: 0068         ldr r0,[r0,#0x0]
08098BDA: 0069         ldr r0,[r0,#0x10]
08098BDC: 5061         str r0,[r2,#0x14]
08098BDE: 7047         bx lr
