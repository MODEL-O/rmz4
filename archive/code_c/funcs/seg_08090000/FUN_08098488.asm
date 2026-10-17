; undefined FUN_08098488(void)
; entry 0x8098488  size 48 bytes

08098488: 021c         add r2,r0,#0x0
0809848A: 8c30         add r0,#0x8c
0809848C: 0021         mov r1,#0x0
0809848E: 0160         str r1,[r0,#0x0]
08098490: 0430         add r0,#0x4
08098492: 0160         str r1,[r0,#0x0]
08098494: 0430         add r0,#0x4
08098496: 0170         strb r1,[r0,#0x0]
08098498: 917a         ldrb r1,[r2,#0xa]
0809849A: fb20         mov r0,#0xfb
0809849C: 0840         and r0,r1
0809849E: fe21         mov r1,#0xfe
080984A0: 0840         and r0,r1
080984A2: 9072         strb r0,[r2,#0xa]
080984A4: 0449         ldr r1,[0x080984b8]
080984A6: 507a         ldrb r0,[r2,#0x9]
080984A8: 8000         lsl r0,r0,#0x2
080984AA: 4018         add r0,r0,r1
080984AC: 0421         mov r1,#0x4
080984AE: d160         str r1,[r2,#0xc]
080984B0: 0068         ldr r0,[r0,#0x0]
080984B2: 0069         ldr r0,[r0,#0x10]
080984B4: 5061         str r0,[r2,#0x14]
080984B6: 7047         bx lr
