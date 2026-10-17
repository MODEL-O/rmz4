; undefined FUN_080af84c(void)
; entry 0x80af84c  size 24 bytes

080AF84C: 00b5         push {lr}
080AF84E: 011c         add r1,r0,#0x0
080AF850: 887c         ldrb r0,[r1,#0x12]
080AF852: 0028         cmp r0,#0x0
080AF854: 03d0         beq 0x080af85e
080AF856: 0138         sub r0,#0x1
080AF858: 8874         strb r0,[r1,#0x12]
080AF85A: 0020         mov r0,#0x0
080AF85C: 00e0         b 0x080af860
080AF85E: 0120         mov r0,#0x1
080AF860: 02bc         pop {r1}
080AF862: 0847         bx r1
