; undefined FUN_08085798(void)
; entry 0x8085798  size 20 bytes

08085798: 00b5         push {lr}
0808579A: 044a         ldr r2,[0x080857ac]
0808579C: 417b         ldrb r1,[r0,#0xd]
0808579E: 8900         lsl r1,r1,#0x2
080857A0: 8918         add r1,r1,r2
080857A2: 0968         ldr r1,[r1,#0x0]
080857A4: a3f0ecfb     bl 0x08128f80
080857A8: 01bc         pop {r0}
080857AA: 0047         bx r0
