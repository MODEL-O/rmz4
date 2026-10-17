; undefined FUN_08087920(void)
; entry 0x8087920  size 20 bytes

08087920: 00b5         push {lr}
08087922: 044a         ldr r2,[0x08087934]
08087924: 817b         ldrb r1,[r0,#0xe]
08087926: 8900         lsl r1,r1,#0x2
08087928: 8918         add r1,r1,r2
0808792A: 0968         ldr r1,[r1,#0x0]
0808792C: a1f028fb     bl 0x08128f80
08087930: 01bc         pop {r0}
08087932: 0047         bx r0
