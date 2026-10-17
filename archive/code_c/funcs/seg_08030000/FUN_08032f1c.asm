; undefined FUN_08032f1c(void)
; entry 0x8032f1c  size 30 bytes

08032F1C: 00b5         push {lr}
08032F1E: ba21         mov r1,#0xba
08032F20: 4900         lsl r1,r1,#0x1
08032F22: 4218         add r2,r0,r1
08032F24: 0521         mov r1,#0x5
08032F26: 1170         strb r1,[r2,#0x0]
08032F28: 044a         ldr r2,[0x08032f3c]
08032F2A: 817b         ldrb r1,[r0,#0xe]
08032F2C: 8900         lsl r1,r1,#0x2
08032F2E: 8918         add r1,r1,r2
08032F30: 0968         ldr r1,[r1,#0x0]
08032F32: f6f025f8     bl 0x08128f80
08032F36: 01bc         pop {r0}
08032F38: 0047         bx r0
