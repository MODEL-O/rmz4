; undefined FUN_08032e24(void)
; entry 0x8032e24  size 30 bytes

08032E24: 00b5         push {lr}
08032E26: ba21         mov r1,#0xba
08032E28: 4900         lsl r1,r1,#0x1
08032E2A: 4218         add r2,r0,r1
08032E2C: 0421         mov r1,#0x4
08032E2E: 1170         strb r1,[r2,#0x0]
08032E30: 044a         ldr r2,[0x08032e44]
08032E32: 817b         ldrb r1,[r0,#0xe]
08032E34: 8900         lsl r1,r1,#0x2
08032E36: 8918         add r1,r1,r2
08032E38: 0968         ldr r1,[r1,#0x0]
08032E3A: f6f0a1f8     bl 0x08128f80
08032E3E: 01bc         pop {r0}
08032E40: 0047         bx r0
