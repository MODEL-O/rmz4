; undefined FUN_0800b00c(void)
; entry 0x800b00c  size 36 bytes

0800B00C: 00b5         push {lr}
0800B00E: 011c         add r1,r0,#0x0
0800B010: 887b         ldrb r0,[r1,#0xe]
0800B012: 0028         cmp r0,#0x0
0800B014: 0ad1         bne 0x0800b02c
0800B016: c96d         ldr r1,[r1,#0x5c]
0800B018: 0909         lsr r1,r1,#0x4
0800B01A: 4900         lsl r1,r1,#0x1
0800B01C: 0448         ldr r0,[0x0800b030]
0800B01E: 0918         add r1,r1,r0
0800B020: 0a88         ldrh r2,[r1,#0x0]
0800B022: 0448         ldr r0,[0x0800b034]
0800B024: 1040         and r0,r2
0800B026: 0322         mov r2,#0x3
0800B028: 1043         orr r0,r2
0800B02A: 0880         strh r0,[r1,#0x0]
0800B02C: 01bc         pop {r0}
0800B02E: 0047         bx r0
