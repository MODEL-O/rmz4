; undefined FUN_0808c910(void)
; entry 0x808c910  size 20 bytes

0808C910: 00b5         push {lr}
0808C912: 044a         ldr r2,[0x0808c924]
0808C914: 417b         ldrb r1,[r0,#0xd]
0808C916: 8900         lsl r1,r1,#0x2
0808C918: 8918         add r1,r1,r2
0808C91A: 0968         ldr r1,[r1,#0x0]
0808C91C: 9cf030fb     bl 0x08128f80
0808C920: 01bc         pop {r0}
0808C922: 0047         bx r0
