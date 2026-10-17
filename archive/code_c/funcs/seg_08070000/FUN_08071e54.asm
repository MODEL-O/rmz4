; undefined FUN_08071e54(void)
; entry 0x8071e54  size 28 bytes

08071E54: 00b5         push {lr}
08071E56: 0022         mov r2,#0x0
08071E58: 1921         mov r1,#0x19
08071E5A: 8173         strb r1,[r0,#0xe]
08071E5C: c273         strb r2,[r0,#0xf]
08071E5E: 044a         ldr r2,[0x08071e70]
08071E60: 417b         ldrb r1,[r0,#0xd]
08071E62: 8900         lsl r1,r1,#0x2
08071E64: 8918         add r1,r1,r2
08071E66: 0968         ldr r1,[r1,#0x0]
08071E68: b7f08af8     bl 0x08128f80
08071E6C: 01bc         pop {r0}
08071E6E: 0047         bx r0
