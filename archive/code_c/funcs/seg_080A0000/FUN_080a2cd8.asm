; undefined FUN_080a2cd8(void)
; entry 0x80a2cd8  size 30 bytes

080A2CD8: 00b5         push {lr}
080A2CDA: 021c         add r2,r0,#0x0
080A2CDC: 0648         ldr r0,[0x080a2cf8]
080A2CDE: 011c         add r1,r0,#0x0
080A2CE0: 2631         add r1,#0x26
080A2CE2: 0878         ldrb r0,[r1,#0x0]
080A2CE4: 0028         cmp r0,#0x0
080A2CE6: 01d0         beq 0x080a2cec
080A2CE8: ff30         add r0,#0xff
080A2CEA: 0870         strb r0,[r1,#0x0]
080A2CEC: 101c         add r0,r2,#0x0
080A2CEE: dcf7fdfd     bl 0x0807f8ec
080A2CF2: 01bc         pop {r0}
080A2CF4: 0047         bx r0
