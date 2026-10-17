; undefined FUN_08095820(void)
; entry 0x8095820  size 20 bytes

08095820: 00b5         push {lr}
08095822: 044a         ldr r2,[0x08095834]
08095824: 417c         ldrb r1,[r0,#0x11]
08095826: 8900         lsl r1,r1,#0x2
08095828: 8918         add r1,r1,r2
0809582A: 0968         ldr r1,[r1,#0x0]
0809582C: 93f0a8fb     bl 0x08128f80
08095830: 01bc         pop {r0}
08095832: 0047         bx r0
