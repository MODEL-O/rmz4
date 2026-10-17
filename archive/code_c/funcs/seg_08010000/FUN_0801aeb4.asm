; undefined FUN_0801aeb4(void)
; entry 0x801aeb4  size 58 bytes

0801AEB4: 00b5         push {lr}
0801AEB6: 031c         add r3,r0,#0x0
0801AEB8: 987b         ldrb r0,[r3,#0xe]
0801AEBA: 0028         cmp r0,#0x0
0801AEBC: 15d1         bne 0x0801aeea
0801AEBE: d96d         ldr r1,[r3,#0x5c]
0801AEC0: 0909         lsr r1,r1,#0x4
0801AEC2: 4900         lsl r1,r1,#0x1
0801AEC4: 0a48         ldr r0,[0x0801aef0]
0801AEC6: 0918         add r1,r1,r0
0801AEC8: 0a88         ldrh r2,[r1,#0x0]
0801AECA: 0a48         ldr r0,[0x0801aef4]
0801AECC: 1040         and r0,r2
0801AECE: 0322         mov r2,#0x3
0801AED0: 1043         orr r0,r2
0801AED2: 0880         strh r0,[r1,#0x0]
0801AED4: 8720         mov r0,#0x87
0801AED6: 0001         lsl r0,r0,#0x4
0801AED8: d864         str r0,[r3,#0x4c]
0801AEDA: a020         mov r0,#0xa0
0801AEDC: 1865         str r0,[r3,#0x50]
0801AEDE: 8020         mov r0,#0x80
0801AEE0: 5864         str r0,[r3,#0x44]
0801AEE2: 9864         str r0,[r3,#0x48]
0801AEE4: 987b         ldrb r0,[r3,#0xe]
0801AEE6: 0130         add r0,#0x1
0801AEE8: 9873         strb r0,[r3,#0xe]
0801AEEA: 01bc         pop {r0}
0801AEEC: 0047         bx r0
