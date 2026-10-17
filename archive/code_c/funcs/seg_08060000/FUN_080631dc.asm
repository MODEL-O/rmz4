; undefined FUN_080631dc(void)
; entry 0x80631dc  size 20 bytes

080631DC: 00b5         push {lr}
080631DE: 044a         ldr r2,[0x080631f0]
080631E0: 817b         ldrb r1,[r0,#0xe]
080631E2: 8900         lsl r1,r1,#0x2
080631E4: 8918         add r1,r1,r2
080631E6: 0968         ldr r1,[r1,#0x0]
080631E8: c5f0cafe     bl 0x08128f80
080631EC: 01bc         pop {r0}
080631EE: 0047         bx r0
