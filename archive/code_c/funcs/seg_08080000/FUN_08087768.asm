; undefined FUN_08087768(void)
; entry 0x8087768  size 20 bytes

08087768: 00b5         push {lr}
0808776A: 044a         ldr r2,[0x0808777c]
0808776C: 817b         ldrb r1,[r0,#0xe]
0808776E: 8900         lsl r1,r1,#0x2
08087770: 8918         add r1,r1,r2
08087772: 0968         ldr r1,[r1,#0x0]
08087774: a1f004fc     bl 0x08128f80
08087778: 01bc         pop {r0}
0808777A: 0047         bx r0
