; undefined FUN_08018c4c(void)
; entry 0x8018c4c  size 44 bytes

08018C4C: 00b5         push {lr}
08018C4E: 031c         add r3,r0,#0x0
08018C50: 987b         ldrb r0,[r3,#0xe]
08018C52: 0028         cmp r0,#0x0
08018C54: 0ed1         bne 0x08018c74
08018C56: d86d         ldr r0,[r3,#0x5c]
08018C58: 0004         lsl r0,r0,#0x10
08018C5A: 000d         lsr r0,r0,#0x14
08018C5C: 4000         lsl r0,r0,#0x1
08018C5E: 0649         ldr r1,[0x08018c78]
08018C60: 4018         add r0,r0,r1
08018C62: 0288         ldrh r2,[r0,#0x0]
08018C64: 0549         ldr r1,[0x08018c7c]
08018C66: 1140         and r1,r2
08018C68: 0322         mov r2,#0x3
08018C6A: 1143         orr r1,r2
08018C6C: 0180         strh r1,[r0,#0x0]
08018C6E: 987b         ldrb r0,[r3,#0xe]
08018C70: 0130         add r0,#0x1
08018C72: 9873         strb r0,[r3,#0xe]
08018C74: 01bc         pop {r0}
08018C76: 0047         bx r0
