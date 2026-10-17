; undefined FUN_080fe028(void)
; entry 0x80fe028  size 20 bytes

080FE028: 00b5         push {lr}
080FE02A: 044a         ldr r2,[0x080fe03c]
080FE02C: 017c         ldrb r1,[r0,#0x10]
080FE02E: 8900         lsl r1,r1,#0x2
080FE030: 8918         add r1,r1,r2
080FE032: 0968         ldr r1,[r1,#0x0]
080FE034: 2af0a4ff     bl 0x08128f80
080FE038: 01bc         pop {r0}
080FE03A: 0047         bx r0
