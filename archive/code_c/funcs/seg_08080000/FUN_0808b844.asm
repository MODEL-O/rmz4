; undefined FUN_0808b844(void)
; entry 0x808b844  size 20 bytes

0808B844: 00b5         push {lr}
0808B846: 044a         ldr r2,[0x0808b858]
0808B848: 417b         ldrb r1,[r0,#0xd]
0808B84A: 8900         lsl r1,r1,#0x2
0808B84C: 8918         add r1,r1,r2
0808B84E: 0968         ldr r1,[r1,#0x0]
0808B850: 9df096fb     bl 0x08128f80
0808B854: 01bc         pop {r0}
0808B856: 0047         bx r0
