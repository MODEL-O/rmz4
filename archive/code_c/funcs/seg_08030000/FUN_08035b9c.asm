; undefined FUN_08035b9c(void)
; entry 0x8035b9c  size 24 bytes

08035B9C: 00b5         push {lr}
08035B9E: 054a         ldr r2,[0x08035bb4]
08035BA0: 054b         ldr r3,[0x08035bb8]
08035BA2: c118         add r1,r0,r3
08035BA4: 0978         ldrb r1,[r1,#0x0]
08035BA6: 8900         lsl r1,r1,#0x2
08035BA8: 8918         add r1,r1,r2
08035BAA: 0968         ldr r1,[r1,#0x0]
08035BAC: f3f0e8f9     bl 0x08128f80
08035BB0: 01bc         pop {r0}
08035BB2: 0047         bx r0
