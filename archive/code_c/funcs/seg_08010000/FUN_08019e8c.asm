; undefined FUN_08019e8c(void)
; entry 0x8019e8c  size 50 bytes

08019E8C: 00b5         push {lr}
08019E8E: 031c         add r3,r0,#0x0
08019E90: 987b         ldrb r0,[r3,#0xe]
08019E92: 0028         cmp r0,#0x0
08019E94: 11d1         bne 0x08019eba
08019E96: d96d         ldr r1,[r3,#0x5c]
08019E98: 0909         lsr r1,r1,#0x4
08019E9A: 4900         lsl r1,r1,#0x1
08019E9C: 0848         ldr r0,[0x08019ec0]
08019E9E: 0918         add r1,r1,r0
08019EA0: 0a88         ldrh r2,[r1,#0x0]
08019EA2: 0848         ldr r0,[0x08019ec4]
08019EA4: 1040         and r0,r2
08019EA6: 0322         mov r2,#0x3
08019EA8: 1043         orr r0,r2
08019EAA: 0880         strh r0,[r1,#0x0]
08019EAC: 7820         mov r0,#0x78
08019EAE: 1865         str r0,[r3,#0x50]
08019EB0: c020         mov r0,#0xc0
08019EB2: 9864         str r0,[r3,#0x48]
08019EB4: 987b         ldrb r0,[r3,#0xe]
08019EB6: 0130         add r0,#0x1
08019EB8: 9873         strb r0,[r3,#0xe]
08019EBA: 01bc         pop {r0}
08019EBC: 0047         bx r0
