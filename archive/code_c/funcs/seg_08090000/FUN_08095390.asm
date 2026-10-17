; undefined FUN_08095390(void)
; entry 0x8095390  size 20 bytes

08095390: 00b5         push {lr}
08095392: 044a         ldr r2,[0x080953a4]
08095394: 017c         ldrb r1,[r0,#0x10]
08095396: 8900         lsl r1,r1,#0x2
08095398: 8918         add r1,r1,r2
0809539A: 0968         ldr r1,[r1,#0x0]
0809539C: 93f0f0fd     bl 0x08128f80
080953A0: 01bc         pop {r0}
080953A2: 0047         bx r0
