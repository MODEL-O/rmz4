; undefined FUN_080353a0(void)
; entry 0x80353a0  size 26 bytes

080353A0: 00b5         push {lr}
080353A2: 064a         ldr r2,[0x080353bc]
080353A4: a223         mov r3,#0xa2
080353A6: 5b00         lsl r3,r3,#0x1
080353A8: c118         add r1,r0,r3
080353AA: 0978         ldrb r1,[r1,#0x0]
080353AC: 8900         lsl r1,r1,#0x2
080353AE: 8918         add r1,r1,r2
080353B0: 0968         ldr r1,[r1,#0x0]
080353B2: f3f0e5fd     bl 0x08128f80
080353B6: 01bc         pop {r0}
080353B8: 0047         bx r0
