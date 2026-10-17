; undefined FUN_0808d060(void)
; entry 0x808d060  size 20 bytes

0808D060: 00b5         push {lr}
0808D062: 044a         ldr r2,[0x0808d074]
0808D064: 417b         ldrb r1,[r0,#0xd]
0808D066: 8900         lsl r1,r1,#0x2
0808D068: 8918         add r1,r1,r2
0808D06A: 0968         ldr r1,[r1,#0x0]
0808D06C: 9bf088ff     bl 0x08128f80
0808D070: 01bc         pop {r0}
0808D072: 0047         bx r0
