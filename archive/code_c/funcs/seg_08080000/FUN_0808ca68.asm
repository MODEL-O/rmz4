; undefined FUN_0808ca68(void)
; entry 0x808ca68  size 20 bytes

0808CA68: 00b5         push {lr}
0808CA6A: 044a         ldr r2,[0x0808ca7c]
0808CA6C: 417b         ldrb r1,[r0,#0xd]
0808CA6E: 8900         lsl r1,r1,#0x2
0808CA70: 8918         add r1,r1,r2
0808CA72: 0968         ldr r1,[r1,#0x0]
0808CA74: 9cf084fa     bl 0x08128f80
0808CA78: 01bc         pop {r0}
0808CA7A: 0047         bx r0
