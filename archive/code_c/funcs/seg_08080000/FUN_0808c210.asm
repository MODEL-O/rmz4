; undefined FUN_0808c210(void)
; entry 0x808c210  size 20 bytes

0808C210: 00b5         push {lr}
0808C212: 044a         ldr r2,[0x0808c224]
0808C214: 017c         ldrb r1,[r0,#0x10]
0808C216: 8900         lsl r1,r1,#0x2
0808C218: 8918         add r1,r1,r2
0808C21A: 0968         ldr r1,[r1,#0x0]
0808C21C: 9cf0b0fe     bl 0x08128f80
0808C220: 01bc         pop {r0}
0808C222: 0047         bx r0
