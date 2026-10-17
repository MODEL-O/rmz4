; undefined FUN_08071ebc(void)
; entry 0x8071ebc  size 28 bytes

08071EBC: 00b5         push {lr}
08071EBE: 0022         mov r2,#0x0
08071EC0: 1921         mov r1,#0x19
08071EC2: 8173         strb r1,[r0,#0xe]
08071EC4: c273         strb r2,[r0,#0xf]
08071EC6: 044a         ldr r2,[0x08071ed8]
08071EC8: 417b         ldrb r1,[r0,#0xd]
08071ECA: 8900         lsl r1,r1,#0x2
08071ECC: 8918         add r1,r1,r2
08071ECE: 0968         ldr r1,[r1,#0x0]
08071ED0: b7f056f8     bl 0x08128f80
08071ED4: 01bc         pop {r0}
08071ED6: 0047         bx r0
