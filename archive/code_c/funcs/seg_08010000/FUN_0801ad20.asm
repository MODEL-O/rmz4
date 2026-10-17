; undefined FUN_0801ad20(void)
; entry 0x801ad20  size 66 bytes

0801AD20: 10b5         push {r4,lr}
0801AD22: 031c         add r3,r0,#0x0
0801AD24: 9c7b         ldrb r4,[r3,#0xe]
0801AD26: 002c         cmp r4,#0x0
0801AD28: 18d1         bne 0x0801ad5c
0801AD2A: 0e49         ldr r1,[0x0801ad64]
0801AD2C: 0e48         ldr r0,[0x0801ad68]
0801AD2E: 0880         strh r0,[r1,#0x0]
0801AD30: d96d         ldr r1,[r3,#0x5c]
0801AD32: 0909         lsr r1,r1,#0x4
0801AD34: 4900         lsl r1,r1,#0x1
0801AD36: 0d48         ldr r0,[0x0801ad6c]
0801AD38: 0918         add r1,r1,r0
0801AD3A: 0a88         ldrh r2,[r1,#0x0]
0801AD3C: 0c48         ldr r0,[0x0801ad70]
0801AD3E: 1040         and r0,r2
0801AD40: 0322         mov r2,#0x3
0801AD42: 1043         orr r0,r2
0801AD44: 0880         strh r0,[r1,#0x0]
0801AD46: f020         mov r0,#0xf0
0801AD48: 8000         lsl r0,r0,#0x2
0801AD4A: d864         str r0,[r3,#0x4c]
0801AD4C: a020         mov r0,#0xa0
0801AD4E: 4000         lsl r0,r0,#0x1
0801AD50: 1865         str r0,[r3,#0x50]
0801AD52: 5c64         str r4,[r3,#0x44]
0801AD54: 9c64         str r4,[r3,#0x48]
0801AD56: 987b         ldrb r0,[r3,#0xe]
0801AD58: 0130         add r0,#0x1
0801AD5A: 9873         strb r0,[r3,#0xe]
0801AD5C: 10bc         pop {r4}
0801AD5E: 01bc         pop {r0}
0801AD60: 0047         bx r0
