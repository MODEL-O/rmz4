; undefined FUN_08001430(void)
; entry 0x8001430  size 34 bytes

08001430: 10b5         push {r4,lr}
08001432: 0022         mov r2,#0x0
08001434: 041c         add r4,r0,#0x0
08001436: 0c34         add r4,#0xc
08001438: 0023         mov r3,#0x0
0800143A: 011c         add r1,r0,#0x0
0800143C: 1031         add r1,#0x10
0800143E: a018         add r0,r4,r2
08001440: 0370         strb r3,[r0,#0x0]
08001442: 0b80         strh r3,[r1,#0x0]
08001444: 0231         add r1,#0x2
08001446: 0132         add r2,#0x1
08001448: 032a         cmp r2,#0x3
0800144A: f8dd         ble 0x0800143e
0800144C: 10bc         pop {r4}
0800144E: 01bc         pop {r0}
08001450: 0047         bx r0
