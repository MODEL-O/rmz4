; undefined FUN_08018c04(void)
; entry 0x8018c04  size 60 bytes

08018C04: 10b5         push {r4,lr}
08018C06: 031c         add r3,r0,#0x0
08018C08: 9c7b         ldrb r4,[r3,#0xe]
08018C0A: 002c         cmp r4,#0x0
08018C0C: 15d1         bne 0x08018c3a
08018C0E: d86d         ldr r0,[r3,#0x5c]
08018C10: 0004         lsl r0,r0,#0x10
08018C12: 000d         lsr r0,r0,#0x14
08018C14: 4000         lsl r0,r0,#0x1
08018C16: 0a49         ldr r1,[0x08018c40]
08018C18: 4018         add r0,r0,r1
08018C1A: 0288         ldrh r2,[r0,#0x0]
08018C1C: 0949         ldr r1,[0x08018c44]
08018C1E: 1140         and r1,r2
08018C20: 0322         mov r2,#0x3
08018C22: 1143         orr r1,r2
08018C24: 0180         strh r1,[r0,#0x0]
08018C26: 0848         ldr r0,[0x08018c48]
08018C28: d864         str r0,[r3,#0x4c]
08018C2A: 8c20         mov r0,#0x8c
08018C2C: c000         lsl r0,r0,#0x3
08018C2E: 1865         str r0,[r3,#0x50]
08018C30: 5c64         str r4,[r3,#0x44]
08018C32: 9c64         str r4,[r3,#0x48]
08018C34: 987b         ldrb r0,[r3,#0xe]
08018C36: 0130         add r0,#0x1
08018C38: 9873         strb r0,[r3,#0xe]
08018C3A: 10bc         pop {r4}
08018C3C: 01bc         pop {r0}
08018C3E: 0047         bx r0
