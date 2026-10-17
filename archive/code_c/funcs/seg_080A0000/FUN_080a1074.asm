; undefined FUN_080a1074(void)
; entry 0x80a1074  size 30 bytes

080A1074: 00b5         push {lr}
080A1076: 021c         add r2,r0,#0x0
080A1078: 0648         ldr r0,[0x080a1094]
080A107A: 011c         add r1,r0,#0x0
080A107C: 2631         add r1,#0x26
080A107E: 0878         ldrb r0,[r1,#0x0]
080A1080: 0028         cmp r0,#0x0
080A1082: 01d0         beq 0x080a1088
080A1084: ff30         add r0,#0xff
080A1086: 0870         strb r0,[r1,#0x0]
080A1088: 101c         add r0,r2,#0x0
080A108A: def72ffc     bl 0x0807f8ec
080A108E: 01bc         pop {r0}
080A1090: 0047         bx r0
