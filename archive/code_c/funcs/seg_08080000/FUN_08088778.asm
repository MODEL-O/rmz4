; undefined FUN_08088778(void)
; entry 0x8088778  size 20 bytes

08088778: 00b5         push {lr}
0808877A: 044a         ldr r2,[0x0808878c]
0808877C: 817b         ldrb r1,[r0,#0xe]
0808877E: 8900         lsl r1,r1,#0x2
08088780: 8918         add r1,r1,r2
08088782: 0968         ldr r1,[r1,#0x0]
08088784: a0f0fcfb     bl 0x08128f80
08088788: 01bc         pop {r0}
0808878A: 0047         bx r0
