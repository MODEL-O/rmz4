; undefined FUN_08088380(void)
; entry 0x8088380  size 20 bytes

08088380: 00b5         push {lr}
08088382: 044a         ldr r2,[0x08088394]
08088384: 817b         ldrb r1,[r0,#0xe]
08088386: 8900         lsl r1,r1,#0x2
08088388: 8918         add r1,r1,r2
0808838A: 0968         ldr r1,[r1,#0x0]
0808838C: a0f0f8fd     bl 0x08128f80
08088390: 01bc         pop {r0}
08088392: 0047         bx r0
