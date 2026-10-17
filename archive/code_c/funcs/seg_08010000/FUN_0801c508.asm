; undefined FUN_0801c508(void)
; entry 0x801c508  size 42 bytes

0801C508: 00b5         push {lr}
0801C50A: 031c         add r3,r0,#0x0
0801C50C: 987b         ldrb r0,[r3,#0xe]
0801C50E: 0028         cmp r0,#0x0
0801C510: 0dd1         bne 0x0801c52e
0801C512: d96d         ldr r1,[r3,#0x5c]
0801C514: 0909         lsr r1,r1,#0x4
0801C516: 4900         lsl r1,r1,#0x1
0801C518: 0648         ldr r0,[0x0801c534]
0801C51A: 0918         add r1,r1,r0
0801C51C: 0a88         ldrh r2,[r1,#0x0]
0801C51E: 0648         ldr r0,[0x0801c538]
0801C520: 1040         and r0,r2
0801C522: 0322         mov r2,#0x3
0801C524: 1043         orr r0,r2
0801C526: 0880         strh r0,[r1,#0x0]
0801C528: 987b         ldrb r0,[r3,#0xe]
0801C52A: 0130         add r0,#0x1
0801C52C: 9873         strb r0,[r3,#0xe]
0801C52E: 01bc         pop {r0}
0801C530: 0047         bx r0
