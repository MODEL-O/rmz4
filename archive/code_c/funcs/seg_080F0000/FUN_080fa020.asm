; undefined FUN_080fa020(void)
; entry 0x80fa020  size 20 bytes

080FA020: 00b5         push {lr}
080FA022: 044a         ldr r2,[0x080fa034]
080FA024: 017c         ldrb r1,[r0,#0x10]
080FA026: 8900         lsl r1,r1,#0x2
080FA028: 8918         add r1,r1,r2
080FA02A: 0968         ldr r1,[r1,#0x0]
080FA02C: 2ef0a8ff     bl 0x08128f80
080FA030: 01bc         pop {r0}
080FA032: 0047         bx r0
