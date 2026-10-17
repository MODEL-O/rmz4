; undefined FUN_0801bd38(void)
; entry 0x801bd38  size 42 bytes

0801BD38: 00b5         push {lr}
0801BD3A: 031c         add r3,r0,#0x0
0801BD3C: 987b         ldrb r0,[r3,#0xe]
0801BD3E: 0028         cmp r0,#0x0
0801BD40: 0dd1         bne 0x0801bd5e
0801BD42: d96d         ldr r1,[r3,#0x5c]
0801BD44: 0909         lsr r1,r1,#0x4
0801BD46: 4900         lsl r1,r1,#0x1
0801BD48: 0648         ldr r0,[0x0801bd64]
0801BD4A: 0918         add r1,r1,r0
0801BD4C: 0a88         ldrh r2,[r1,#0x0]
0801BD4E: 0648         ldr r0,[0x0801bd68]
0801BD50: 1040         and r0,r2
0801BD52: 0222         mov r2,#0x2
0801BD54: 1043         orr r0,r2
0801BD56: 0880         strh r0,[r1,#0x0]
0801BD58: 987b         ldrb r0,[r3,#0xe]
0801BD5A: 0130         add r0,#0x1
0801BD5C: 9873         strb r0,[r3,#0xe]
0801BD5E: 01bc         pop {r0}
0801BD60: 0047         bx r0
