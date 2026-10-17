; undefined FUN_080a19c4(void)
; entry 0x80a19c4  size 30 bytes

080A19C4: 00b5         push {lr}
080A19C6: 021c         add r2,r0,#0x0
080A19C8: 0648         ldr r0,[0x080a19e4]
080A19CA: 011c         add r1,r0,#0x0
080A19CC: 2631         add r1,#0x26
080A19CE: 0878         ldrb r0,[r1,#0x0]
080A19D0: 0028         cmp r0,#0x0
080A19D2: 01d0         beq 0x080a19d8
080A19D4: ff30         add r0,#0xff
080A19D6: 0870         strb r0,[r1,#0x0]
080A19D8: 101c         add r0,r2,#0x0
080A19DA: ddf787ff     bl 0x0807f8ec
080A19DE: 01bc         pop {r0}
080A19E0: 0047         bx r0
