; undefined FUN_080583c4(void)
; entry 0x80583c4  size 20 bytes

080583C4: 00b5         push {lr}
080583C6: 044a         ldr r2,[0x080583d8]
080583C8: 817b         ldrb r1,[r0,#0xe]
080583CA: 8900         lsl r1,r1,#0x2
080583CC: 8918         add r1,r1,r2
080583CE: 0968         ldr r1,[r1,#0x0]
080583D0: d0f0d6fd     bl 0x08128f80
080583D4: 01bc         pop {r0}
080583D6: 0047         bx r0
