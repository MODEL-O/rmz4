; undefined FUN_080a2ac4(void)
; entry 0x80a2ac4  size 20 bytes

080A2AC4: 00b5         push {lr}
080A2AC6: 044a         ldr r2,[0x080a2ad8]
080A2AC8: 417b         ldrb r1,[r0,#0xd]
080A2ACA: 8900         lsl r1,r1,#0x2
080A2ACC: 8918         add r1,r1,r2
080A2ACE: 0968         ldr r1,[r1,#0x0]
080A2AD0: 86f056fa     bl 0x08128f80
080A2AD4: 01bc         pop {r0}
080A2AD6: 0047         bx r0
