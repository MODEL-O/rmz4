; undefined FUN_08018c80(void)
; entry 0x8018c80  size 44 bytes

08018C80: 00b5         push {lr}
08018C82: 031c         add r3,r0,#0x0
08018C84: 987b         ldrb r0,[r3,#0xe]
08018C86: 0028         cmp r0,#0x0
08018C88: 0ed1         bne 0x08018ca8
08018C8A: d86d         ldr r0,[r3,#0x5c]
08018C8C: 0004         lsl r0,r0,#0x10
08018C8E: 000d         lsr r0,r0,#0x14
08018C90: 4000         lsl r0,r0,#0x1
08018C92: 0649         ldr r1,[0x08018cac]
08018C94: 4018         add r0,r0,r1
08018C96: 0288         ldrh r2,[r0,#0x0]
08018C98: 0549         ldr r1,[0x08018cb0]
08018C9A: 1140         and r1,r2
08018C9C: 0122         mov r2,#0x1
08018C9E: 1143         orr r1,r2
08018CA0: 0180         strh r1,[r0,#0x0]
08018CA2: 987b         ldrb r0,[r3,#0xe]
08018CA4: 0130         add r0,#0x1
08018CA6: 9873         strb r0,[r3,#0xe]
08018CA8: 01bc         pop {r0}
08018CAA: 0047         bx r0
