; undefined FUN_080eb368(void)
; entry 0x80eb368  size 20 bytes

080EB368: 00b5         push {lr}
080EB36A: 044a         ldr r2,[0x080eb37c]
080EB36C: 417b         ldrb r1,[r0,#0xd]
080EB36E: 8900         lsl r1,r1,#0x2
080EB370: 8918         add r1,r1,r2
080EB372: 0968         ldr r1,[r1,#0x0]
080EB374: 3df004fe     bl 0x08128f80
080EB378: 01bc         pop {r0}
080EB37A: 0047         bx r0
