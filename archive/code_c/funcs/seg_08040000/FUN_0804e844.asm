; undefined FUN_0804e844(void)
; entry 0x804e844  size 48 bytes

0804E844: 021c         add r2,r0,#0x0
0804E846: 8c30         add r0,#0x8c
0804E848: 0021         mov r1,#0x0
0804E84A: 0160         str r1,[r0,#0x0]
0804E84C: 0430         add r0,#0x4
0804E84E: 0160         str r1,[r0,#0x0]
0804E850: 0430         add r0,#0x4
0804E852: 0170         strb r1,[r0,#0x0]
0804E854: 917a         ldrb r1,[r2,#0xa]
0804E856: fb20         mov r0,#0xfb
0804E858: 0840         and r0,r1
0804E85A: fe21         mov r1,#0xfe
0804E85C: 0840         and r0,r1
0804E85E: 9072         strb r0,[r2,#0xa]
0804E860: 0449         ldr r1,[0x0804e874]
0804E862: 507a         ldrb r0,[r2,#0x9]
0804E864: 8000         lsl r0,r0,#0x2
0804E866: 4018         add r0,r0,r1
0804E868: 0421         mov r1,#0x4
0804E86A: d160         str r1,[r2,#0xc]
0804E86C: 0068         ldr r0,[r0,#0x0]
0804E86E: 0069         ldr r0,[r0,#0x10]
0804E870: 5061         str r0,[r2,#0x14]
0804E872: 7047         bx lr
