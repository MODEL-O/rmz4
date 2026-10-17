; undefined FUN_080cde10(void)
; entry 0x80cde10  size 28 bytes

080CDE10: 00b5         push {lr}
080CDE12: 816a         ldr r1,[r0,#0x28]
080CDE14: d731         add r1,#0xd7
080CDE16: 0122         mov r2,#0x1
080CDE18: 0a70         strb r2,[r1,#0x0]
080CDE1A: 044a         ldr r2,[0x080cde2c]
080CDE1C: 017c         ldrb r1,[r0,#0x10]
080CDE1E: 8900         lsl r1,r1,#0x2
080CDE20: 8918         add r1,r1,r2
080CDE22: 0968         ldr r1,[r1,#0x0]
080CDE24: 5bf0acf8     bl 0x08128f80
080CDE28: 01bc         pop {r0}
080CDE2A: 0047         bx r0
