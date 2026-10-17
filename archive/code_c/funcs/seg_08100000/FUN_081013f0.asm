; undefined FUN_081013f0(void)
; entry 0x81013f0  size 46 bytes

081013F0: 10b5         push {r4,lr}
081013F2: 041c         add r4,r0,#0x0
081013F4: 5430         add r0,#0x54
081013F6: 8021         mov r1,#0x80
081013F8: 4900         lsl r1,r1,#0x1
081013FA: a27a         ldrb r2,[r4,#0xa]
081013FC: 1209         lsr r2,r2,#0x4
081013FE: 0123         mov r3,#0x1
08101400: 1a40         and r2,r3
08101402: e5f7d3f9     bl 0x080e67ac
08101406: 0649         ldr r1,[0x08101420]
08101408: 607a         ldrb r0,[r4,#0x9]
0810140A: 8000         lsl r0,r0,#0x2
0810140C: 4018         add r0,r0,r1
0810140E: 0421         mov r1,#0x4
08101410: e160         str r1,[r4,#0xc]
08101412: 0068         ldr r0,[r0,#0x0]
08101414: 0069         ldr r0,[r0,#0x10]
08101416: 6061         str r0,[r4,#0x14]
08101418: 10bc         pop {r4}
0810141A: 01bc         pop {r0}
0810141C: 0047         bx r0
