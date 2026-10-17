; undefined FUN_08086db8(void)
; entry 0x8086db8  size 44 bytes

08086DB8: 021c         add r2,r0,#0x0
08086DBA: 8c30         add r0,#0x8c
08086DBC: 0021         mov r1,#0x0
08086DBE: 0160         str r1,[r0,#0x0]
08086DC0: 0430         add r0,#0x4
08086DC2: 0160         str r1,[r0,#0x0]
08086DC4: 0430         add r0,#0x4
08086DC6: 0170         strb r1,[r0,#0x0]
08086DC8: 917a         ldrb r1,[r2,#0xa]
08086DCA: fb20         mov r0,#0xfb
08086DCC: 0840         and r0,r1
08086DCE: 9072         strb r0,[r2,#0xa]
08086DD0: 0449         ldr r1,[0x08086de4]
08086DD2: 507a         ldrb r0,[r2,#0x9]
08086DD4: 8000         lsl r0,r0,#0x2
08086DD6: 4018         add r0,r0,r1
08086DD8: 0421         mov r1,#0x4
08086DDA: d160         str r1,[r2,#0xc]
08086DDC: 0068         ldr r0,[r0,#0x0]
08086DDE: 0069         ldr r0,[r0,#0x10]
08086DE0: 5061         str r0,[r2,#0x14]
08086DE2: 7047         bx lr
