; undefined FUN_080c42bc(void)
; entry 0x80c42bc  size 20 bytes

080C42BC: 00b5         push {lr}
080C42BE: 044a         ldr r2,[0x080c42d0]
080C42C0: 417b         ldrb r1,[r0,#0xd]
080C42C2: 8900         lsl r1,r1,#0x2
080C42C4: 8918         add r1,r1,r2
080C42C6: 0968         ldr r1,[r1,#0x0]
080C42C8: 64f05afe     bl 0x08128f80
080C42CC: 01bc         pop {r0}
080C42CE: 0047         bx r0
