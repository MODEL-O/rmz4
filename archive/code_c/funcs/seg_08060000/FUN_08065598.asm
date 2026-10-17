; undefined FUN_08065598(void)
; entry 0x8065598  size 20 bytes

08065598: 00b5         push {lr}
0806559A: 044a         ldr r2,[0x080655ac]
0806559C: 417b         ldrb r1,[r0,#0xd]
0806559E: 8900         lsl r1,r1,#0x2
080655A0: 8918         add r1,r1,r2
080655A2: 0968         ldr r1,[r1,#0x0]
080655A4: c3f0ecfc     bl 0x08128f80
080655A8: 01bc         pop {r0}
080655AA: 0047         bx r0
