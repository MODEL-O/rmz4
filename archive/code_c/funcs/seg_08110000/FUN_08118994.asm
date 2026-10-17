; undefined FUN_08118994(void)
; entry 0x8118994  size 20 bytes

08118994: 00b5         push {lr}
08118996: 044a         ldr r2,[0x081189a8]
08118998: c178         ldrb r1,[r0,#0x3]
0811899A: 8900         lsl r1,r1,#0x2
0811899C: 8918         add r1,r1,r2
0811899E: 0968         ldr r1,[r1,#0x0]
081189A0: 10f0eefa     bl 0x08128f80
081189A4: 01bc         pop {r0}
081189A6: 0047         bx r0
