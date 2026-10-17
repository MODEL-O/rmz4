; undefined FUN_08063ce4(void)
; entry 0x8063ce4  size 20 bytes

08063CE4: 00b5         push {lr}
08063CE6: 044a         ldr r2,[0x08063cf8]
08063CE8: 817b         ldrb r1,[r0,#0xe]
08063CEA: 8900         lsl r1,r1,#0x2
08063CEC: 8918         add r1,r1,r2
08063CEE: 0968         ldr r1,[r1,#0x0]
08063CF0: c5f046f9     bl 0x08128f80
08063CF4: 01bc         pop {r0}
08063CF6: 0047         bx r0
