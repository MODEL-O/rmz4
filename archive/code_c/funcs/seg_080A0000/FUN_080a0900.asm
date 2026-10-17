; undefined FUN_080a0900(void)
; entry 0x80a0900  size 30 bytes

080A0900: 00b5         push {lr}
080A0902: 021c         add r2,r0,#0x0
080A0904: 0648         ldr r0,[0x080a0920]
080A0906: 011c         add r1,r0,#0x0
080A0908: 2631         add r1,#0x26
080A090A: 0878         ldrb r0,[r1,#0x0]
080A090C: 0028         cmp r0,#0x0
080A090E: 01d0         beq 0x080a0914
080A0910: ff30         add r0,#0xff
080A0912: 0870         strb r0,[r1,#0x0]
080A0914: 101c         add r0,r2,#0x0
080A0916: def7e9ff     bl 0x0807f8ec
080A091A: 01bc         pop {r0}
080A091C: 0047         bx r0
