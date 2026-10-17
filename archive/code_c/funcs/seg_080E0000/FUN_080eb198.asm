; undefined FUN_080eb198(void)
; entry 0x80eb198  size 20 bytes

080EB198: 00b5         push {lr}
080EB19A: 011c         add r1,r0,#0x0
080EB19C: 487a         ldrb r0,[r1,#0x9]
080EB19E: 0328         cmp r0,#0x3
080EB1A0: 02d1         bne 0x080eb1a8
080EB1A2: ba31         add r1,#0xba
080EB1A4: 0148         ldr r0,[0x080eb1ac]
080EB1A6: 0880         strh r0,[r1,#0x0]
080EB1A8: 01bc         pop {r0}
080EB1AA: 0047         bx r0
