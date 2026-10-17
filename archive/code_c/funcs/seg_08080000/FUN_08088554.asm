; undefined FUN_08088554(void)
; entry 0x8088554  size 20 bytes

08088554: 00b5         push {lr}
08088556: 044a         ldr r2,[0x08088568]
08088558: 817b         ldrb r1,[r0,#0xe]
0808855A: 8900         lsl r1,r1,#0x2
0808855C: 8918         add r1,r1,r2
0808855E: 0968         ldr r1,[r1,#0x0]
08088560: a0f00efd     bl 0x08128f80
08088564: 01bc         pop {r0}
08088566: 0047         bx r0
