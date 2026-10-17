; undefined FUN_0801a6f4(void)
; entry 0x801a6f4  size 42 bytes

0801A6F4: 00b5         push {lr}
0801A6F6: 031c         add r3,r0,#0x0
0801A6F8: 987b         ldrb r0,[r3,#0xe]
0801A6FA: 0028         cmp r0,#0x0
0801A6FC: 0dd1         bne 0x0801a71a
0801A6FE: d96d         ldr r1,[r3,#0x5c]
0801A700: 0909         lsr r1,r1,#0x4
0801A702: 4900         lsl r1,r1,#0x1
0801A704: 0648         ldr r0,[0x0801a720]
0801A706: 0918         add r1,r1,r0
0801A708: 0a88         ldrh r2,[r1,#0x0]
0801A70A: 0648         ldr r0,[0x0801a724]
0801A70C: 1040         and r0,r2
0801A70E: 0322         mov r2,#0x3
0801A710: 1043         orr r0,r2
0801A712: 0880         strh r0,[r1,#0x0]
0801A714: 987b         ldrb r0,[r3,#0xe]
0801A716: 0130         add r0,#0x1
0801A718: 9873         strb r0,[r3,#0xe]
0801A71A: 01bc         pop {r0}
0801A71C: 0047         bx r0
