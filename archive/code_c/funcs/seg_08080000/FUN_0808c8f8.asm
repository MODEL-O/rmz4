; undefined FUN_0808c8f8(void)
; entry 0x808c8f8  size 20 bytes

0808C8F8: 00b5         push {lr}
0808C8FA: 044a         ldr r2,[0x0808c90c]
0808C8FC: 017c         ldrb r1,[r0,#0x10]
0808C8FE: 8900         lsl r1,r1,#0x2
0808C900: 8918         add r1,r1,r2
0808C902: 0968         ldr r1,[r1,#0x0]
0808C904: 9cf03cfb     bl 0x08128f80
0808C908: 01bc         pop {r0}
0808C90A: 0047         bx r0
