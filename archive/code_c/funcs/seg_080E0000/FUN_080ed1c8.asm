; undefined FUN_080ed1c8(void)
; entry 0x80ed1c8  size 32 bytes

080ED1C8: 10b5         push {r4,lr}
080ED1CA: 041c         add r4,r0,#0x0
080ED1CC: 0649         ldr r1,[0x080ed1e8]
080ED1CE: 207c         ldrb r0,[r4,#0x10]
080ED1D0: 8000         lsl r0,r0,#0x2
080ED1D2: 4018         add r0,r0,r1
080ED1D4: 0168         ldr r1,[r0,#0x0]
080ED1D6: 201c         add r0,r4,#0x0
080ED1D8: 3bf0d2fe     bl 0x08128f80
080ED1DC: bc34         add r4,#0xbc
080ED1DE: 0020         mov r0,#0x0
080ED1E0: 2060         str r0,[r4,#0x0]
080ED1E2: 10bc         pop {r4}
080ED1E4: 01bc         pop {r0}
080ED1E6: 0047         bx r0
