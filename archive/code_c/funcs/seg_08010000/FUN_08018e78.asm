; undefined FUN_08018e78(void)
; entry 0x8018e78  size 44 bytes

08018E78: 00b5         push {lr}
08018E7A: 031c         add r3,r0,#0x0
08018E7C: d86d         ldr r0,[r3,#0x5c]
08018E7E: 0204         lsl r2,r0,#0x10
08018E80: 987b         ldrb r0,[r3,#0xe]
08018E82: 0028         cmp r0,#0x0
08018E84: 0cd1         bne 0x08018ea0
08018E86: 120d         lsr r2,r2,#0x14
08018E88: 5200         lsl r2,r2,#0x1
08018E8A: 0648         ldr r0,[0x08018ea4]
08018E8C: 1218         add r2,r2,r0
08018E8E: 1188         ldrh r1,[r2,#0x0]
08018E90: 0548         ldr r0,[0x08018ea8]
08018E92: 0840         and r0,r1
08018E94: 0221         mov r1,#0x2
08018E96: 0843         orr r0,r1
08018E98: 1080         strh r0,[r2,#0x0]
08018E9A: 987b         ldrb r0,[r3,#0xe]
08018E9C: 0130         add r0,#0x1
08018E9E: 9873         strb r0,[r3,#0xe]
08018EA0: 01bc         pop {r0}
08018EA2: 0047         bx r0
