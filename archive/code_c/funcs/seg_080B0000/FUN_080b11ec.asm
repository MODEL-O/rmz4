; undefined FUN_080b11ec(void)
; entry 0x80b11ec  size 38 bytes

080B11EC: 00b5         push {lr}
080B11EE: 094a         ldr r2,[0x080b1214]
080B11F0: 417a         ldrb r1,[r0,#0x9]
080B11F2: 8900         lsl r1,r1,#0x2
080B11F4: 8918         add r1,r1,r2
080B11F6: 0122         mov r2,#0x1
080B11F8: c260         str r2,[r0,#0xc]
080B11FA: 0968         ldr r1,[r1,#0x0]
080B11FC: 4968         ldr r1,[r1,#0x4]
080B11FE: 4161         str r1,[r0,#0x14]
080B1200: 021c         add r2,r0,#0x0
080B1202: c232         add r2,#0xc2
080B1204: 0021         mov r1,#0x0
080B1206: 1170         strb r1,[r2,#0x0]
080B1208: 8174         strb r1,[r0,#0x12]
080B120A: fff73fff     bl 0x080b108c
080B120E: 01bc         pop {r0}
080B1210: 0047         bx r0
