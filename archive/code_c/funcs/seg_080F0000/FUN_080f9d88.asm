; undefined FUN_080f9d88(void)
; entry 0x80f9d88  size 30 bytes

080F9D88: 00b5         push {lr}
080F9D8A: 021c         add r2,r0,#0x0
080F9D8C: 0648         ldr r0,[0x080f9da8]
080F9D8E: 011c         add r1,r0,#0x0
080F9D90: 2631         add r1,#0x26
080F9D92: 0878         ldrb r0,[r1,#0x0]
080F9D94: 0028         cmp r0,#0x0
080F9D96: 01d0         beq 0x080f9d9c
080F9D98: ff30         add r0,#0xff
080F9D9A: 0870         strb r0,[r1,#0x0]
080F9D9C: 101c         add r0,r2,#0x0
080F9D9E: eff7d5fb     bl 0x080e954c
080F9DA2: 01bc         pop {r0}
080F9DA4: 0047         bx r0
