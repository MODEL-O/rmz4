; undefined FUN_0808f750(void)
; entry 0x808f750  size 20 bytes

0808F750: 00b5         push {lr}
0808F752: 044a         ldr r2,[0x0808f764]
0808F754: 417b         ldrb r1,[r0,#0xd]
0808F756: 8900         lsl r1,r1,#0x2
0808F758: 8918         add r1,r1,r2
0808F75A: 0968         ldr r1,[r1,#0x0]
0808F75C: 99f010fc     bl 0x08128f80
0808F760: 01bc         pop {r0}
0808F762: 0047         bx r0
