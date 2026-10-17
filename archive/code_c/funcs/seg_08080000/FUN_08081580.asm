; undefined FUN_08081580(void)
; entry 0x8081580  size 20 bytes

08081580: 00b5         push {lr}
08081582: 044a         ldr r2,[0x08081594]
08081584: 817b         ldrb r1,[r0,#0xe]
08081586: 8900         lsl r1,r1,#0x2
08081588: 8918         add r1,r1,r2
0808158A: 0968         ldr r1,[r1,#0x0]
0808158C: a7f0f8fc     bl 0x08128f80
08081590: 01bc         pop {r0}
08081592: 0047         bx r0
