; undefined FUN_08095ecc(void)
; entry 0x8095ecc  size 20 bytes

08095ECC: 00b5         push {lr}
08095ECE: 044a         ldr r2,[0x08095ee0]
08095ED0: 017c         ldrb r1,[r0,#0x10]
08095ED2: 8900         lsl r1,r1,#0x2
08095ED4: 8918         add r1,r1,r2
08095ED6: 0968         ldr r1,[r1,#0x0]
08095ED8: 93f052f8     bl 0x08128f80
08095EDC: 01bc         pop {r0}
08095EDE: 0047         bx r0
