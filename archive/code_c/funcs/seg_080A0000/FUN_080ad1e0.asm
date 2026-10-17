; undefined FUN_080ad1e0(void)
; entry 0x80ad1e0  size 20 bytes

080AD1E0: 00b5         push {lr}
080AD1E2: 044a         ldr r2,[0x080ad1f4]
080AD1E4: 817b         ldrb r1,[r0,#0xe]
080AD1E6: 8900         lsl r1,r1,#0x2
080AD1E8: 8918         add r1,r1,r2
080AD1EA: 0968         ldr r1,[r1,#0x0]
080AD1EC: 7bf0c8fe     bl 0x08128f80
080AD1F0: 01bc         pop {r0}
080AD1F2: 0047         bx r0
