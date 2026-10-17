; undefined FUN_0804e47c(void)
; entry 0x804e47c  size 48 bytes

0804E47C: 021c         add r2,r0,#0x0
0804E47E: 8c30         add r0,#0x8c
0804E480: 0021         mov r1,#0x0
0804E482: 0160         str r1,[r0,#0x0]
0804E484: 0430         add r0,#0x4
0804E486: 0160         str r1,[r0,#0x0]
0804E488: 0430         add r0,#0x4
0804E48A: 0170         strb r1,[r0,#0x0]
0804E48C: 917a         ldrb r1,[r2,#0xa]
0804E48E: fb20         mov r0,#0xfb
0804E490: 0840         and r0,r1
0804E492: fe21         mov r1,#0xfe
0804E494: 0840         and r0,r1
0804E496: 9072         strb r0,[r2,#0xa]
0804E498: 0449         ldr r1,[0x0804e4ac]
0804E49A: 507a         ldrb r0,[r2,#0x9]
0804E49C: 8000         lsl r0,r0,#0x2
0804E49E: 4018         add r0,r0,r1
0804E4A0: 0421         mov r1,#0x4
0804E4A2: d160         str r1,[r2,#0xc]
0804E4A4: 0068         ldr r0,[r0,#0x0]
0804E4A6: 0069         ldr r0,[r0,#0x10]
0804E4A8: 5061         str r0,[r2,#0x14]
0804E4AA: 7047         bx lr
