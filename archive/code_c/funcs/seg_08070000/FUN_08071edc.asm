; undefined FUN_08071edc(void)
; entry 0x8071edc  size 30 bytes

08071EDC: 00b5         push {lr}
08071EDE: 817b         ldrb r1,[r0,#0xe]
08071EE0: 0131         add r1,#0x1
08071EE2: 0022         mov r2,#0x0
08071EE4: 8173         strb r1,[r0,#0xe]
08071EE6: c273         strb r2,[r0,#0xf]
08071EE8: 044a         ldr r2,[0x08071efc]
08071EEA: 417b         ldrb r1,[r0,#0xd]
08071EEC: 8900         lsl r1,r1,#0x2
08071EEE: 8918         add r1,r1,r2
08071EF0: 0968         ldr r1,[r1,#0x0]
08071EF2: b7f045f8     bl 0x08128f80
08071EF6: 01bc         pop {r0}
08071EF8: 0047         bx r0
