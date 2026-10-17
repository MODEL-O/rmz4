; undefined FUN_08119d40(void)
; entry 0x8119d40  size 26 bytes

08119D40: 00b5         push {lr}
08119D42: 064a         ldr r2,[0x08119d5c]
08119D44: c178         ldrb r1,[r0,#0x3]
08119D46: 8900         lsl r1,r1,#0x2
08119D48: 8918         add r1,r1,r2
08119D4A: 0968         ldr r1,[r1,#0x0]
08119D4C: 0ff018f9     bl 0x08128f80
08119D50: 4320         mov r0,#0x43
08119D52: e8f641fc     bl 0x080025d8
08119D56: 01bc         pop {r0}
08119D58: 0047         bx r0
