; undefined FUN_08071e98(void)
; entry 0x8071e98  size 30 bytes

08071E98: 00b5         push {lr}
08071E9A: 817b         ldrb r1,[r0,#0xe]
08071E9C: 0131         add r1,#0x1
08071E9E: 0022         mov r2,#0x0
08071EA0: 8173         strb r1,[r0,#0xe]
08071EA2: c273         strb r2,[r0,#0xf]
08071EA4: 044a         ldr r2,[0x08071eb8]
08071EA6: 417b         ldrb r1,[r0,#0xd]
08071EA8: 8900         lsl r1,r1,#0x2
08071EAA: 8918         add r1,r1,r2
08071EAC: 0968         ldr r1,[r1,#0x0]
08071EAE: b7f067f8     bl 0x08128f80
08071EB2: 01bc         pop {r0}
08071EB4: 0047         bx r0
