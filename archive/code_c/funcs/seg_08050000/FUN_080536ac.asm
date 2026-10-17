; undefined FUN_080536ac(void)
; entry 0x80536ac  size 20 bytes

080536AC: 00b5         push {lr}
080536AE: 044a         ldr r2,[0x080536c0]
080536B0: 817b         ldrb r1,[r0,#0xe]
080536B2: 8900         lsl r1,r1,#0x2
080536B4: 8918         add r1,r1,r2
080536B6: 0968         ldr r1,[r1,#0x0]
080536B8: d5f062fc     bl 0x08128f80
080536BC: 01bc         pop {r0}
080536BE: 0047         bx r0
