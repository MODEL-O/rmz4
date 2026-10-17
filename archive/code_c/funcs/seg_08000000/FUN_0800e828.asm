; undefined FUN_0800e828(void)
; entry 0x800e828  size 42 bytes

0800E828: 00b5         push {lr}
0800E82A: 031c         add r3,r0,#0x0
0800E82C: 987b         ldrb r0,[r3,#0xe]
0800E82E: 0028         cmp r0,#0x0
0800E830: 0dd1         bne 0x0800e84e
0800E832: d96d         ldr r1,[r3,#0x5c]
0800E834: 0909         lsr r1,r1,#0x4
0800E836: 4900         lsl r1,r1,#0x1
0800E838: 0648         ldr r0,[0x0800e854]
0800E83A: 0918         add r1,r1,r0
0800E83C: 0a88         ldrh r2,[r1,#0x0]
0800E83E: 0648         ldr r0,[0x0800e858]
0800E840: 1040         and r0,r2
0800E842: 0122         mov r2,#0x1
0800E844: 1043         orr r0,r2
0800E846: 0880         strh r0,[r1,#0x0]
0800E848: 987b         ldrb r0,[r3,#0xe]
0800E84A: 0130         add r0,#0x1
0800E84C: 9873         strb r0,[r3,#0xe]
0800E84E: 01bc         pop {r0}
0800E850: 0047         bx r0
