; undefined FUN_080627bc(void)
; entry 0x80627bc  size 20 bytes

080627BC: 00b5         push {lr}
080627BE: 044a         ldr r2,[0x080627d0]
080627C0: 817b         ldrb r1,[r0,#0xe]
080627C2: 8900         lsl r1,r1,#0x2
080627C4: 8918         add r1,r1,r2
080627C6: 0968         ldr r1,[r1,#0x0]
080627C8: c6f0dafb     bl 0x08128f80
080627CC: 01bc         pop {r0}
080627CE: 0047         bx r0
