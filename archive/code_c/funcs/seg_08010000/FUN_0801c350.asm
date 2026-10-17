; undefined FUN_0801c350(void)
; entry 0x801c350  size 42 bytes

0801C350: 00b5         push {lr}
0801C352: 031c         add r3,r0,#0x0
0801C354: 987b         ldrb r0,[r3,#0xe]
0801C356: 0028         cmp r0,#0x0
0801C358: 0dd1         bne 0x0801c376
0801C35A: d96d         ldr r1,[r3,#0x5c]
0801C35C: 0909         lsr r1,r1,#0x4
0801C35E: 4900         lsl r1,r1,#0x1
0801C360: 0648         ldr r0,[0x0801c37c]
0801C362: 0918         add r1,r1,r0
0801C364: 0a88         ldrh r2,[r1,#0x0]
0801C366: 0648         ldr r0,[0x0801c380]
0801C368: 1040         and r0,r2
0801C36A: 0222         mov r2,#0x2
0801C36C: 1043         orr r0,r2
0801C36E: 0880         strh r0,[r1,#0x0]
0801C370: 987b         ldrb r0,[r3,#0xe]
0801C372: 0130         add r0,#0x1
0801C374: 9873         strb r0,[r3,#0xe]
0801C376: 01bc         pop {r0}
0801C378: 0047         bx r0
