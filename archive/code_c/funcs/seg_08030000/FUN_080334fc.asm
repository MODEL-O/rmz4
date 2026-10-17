; undefined FUN_080334fc(void)
; entry 0x80334fc  size 24 bytes

080334FC: 00b5         push {lr}
080334FE: 054a         ldr r2,[0x08033514]
08033500: 054b         ldr r3,[0x08033518]
08033502: c118         add r1,r0,r3
08033504: 0978         ldrb r1,[r1,#0x0]
08033506: 8900         lsl r1,r1,#0x2
08033508: 8918         add r1,r1,r2
0803350A: 0968         ldr r1,[r1,#0x0]
0803350C: f5f038fd     bl 0x08128f80
08033510: 01bc         pop {r0}
08033512: 0047         bx r0
