; undefined FUN_0808ec10(void)
; entry 0x808ec10  size 20 bytes

0808EC10: 00b5         push {lr}
0808EC12: 044a         ldr r2,[0x0808ec24]
0808EC14: 817b         ldrb r1,[r0,#0xe]
0808EC16: 8900         lsl r1,r1,#0x2
0808EC18: 8918         add r1,r1,r2
0808EC1A: 0968         ldr r1,[r1,#0x0]
0808EC1C: 9af0b0f9     bl 0x08128f80
0808EC20: 01bc         pop {r0}
0808EC22: 0047         bx r0
