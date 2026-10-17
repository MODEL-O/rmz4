; undefined FUN_0808671c(void)
; entry 0x808671c  size 20 bytes

0808671C: 00b5         push {lr}
0808671E: 044a         ldr r2,[0x08086730]
08086720: 417b         ldrb r1,[r0,#0xd]
08086722: 8900         lsl r1,r1,#0x2
08086724: 8918         add r1,r1,r2
08086726: 0968         ldr r1,[r1,#0x0]
08086728: a2f02afc     bl 0x08128f80
0808672C: 01bc         pop {r0}
0808672E: 0047         bx r0
