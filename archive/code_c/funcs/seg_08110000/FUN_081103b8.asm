; undefined FUN_081103b8(void)
; entry 0x81103b8  size 20 bytes

081103B8: 00b5         push {lr}
081103BA: 044a         ldr r2,[0x081103cc]
081103BC: 8179         ldrb r1,[r0,#0x6]
081103BE: 8900         lsl r1,r1,#0x2
081103C0: 8918         add r1,r1,r2
081103C2: 0968         ldr r1,[r1,#0x0]
081103C4: 18f0dcfd     bl 0x08128f80
081103C8: 01bc         pop {r0}
081103CA: 0047         bx r0
