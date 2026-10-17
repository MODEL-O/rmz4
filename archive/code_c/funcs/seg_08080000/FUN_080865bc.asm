; undefined FUN_080865bc(void)
; entry 0x80865bc  size 20 bytes

080865BC: 00b5         push {lr}
080865BE: 044a         ldr r2,[0x080865d0]
080865C0: 817b         ldrb r1,[r0,#0xe]
080865C2: 8900         lsl r1,r1,#0x2
080865C4: 8918         add r1,r1,r2
080865C6: 0968         ldr r1,[r1,#0x0]
080865C8: a2f0dafc     bl 0x08128f80
080865CC: 01bc         pop {r0}
080865CE: 0047         bx r0
