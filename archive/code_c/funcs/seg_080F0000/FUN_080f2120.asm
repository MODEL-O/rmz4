; undefined FUN_080f2120(void)
; entry 0x80f2120  size 70 bytes

080F2120: 70b5         push {r4,r5,r6,lr}
080F2122: 041c         add r4,r0,#0x0
080F2124: a17a         ldrb r1,[r4,#0xa]
080F2126: 0220         mov r0,#0x2
080F2128: 0026         mov r6,#0x0
080F212A: 0843         orr r0,r1
080F212C: 0421         mov r1,#0x4
080F212E: 0843         orr r0,r1
080F2130: a072         strb r0,[r4,#0xa]
080F2132: 251c         add r5,r4,#0x0
080F2134: 7435         add r5,#0x74
080F2136: 0c49         ldr r1,[0x080f2168]
080F2138: 221c         add r2,r4,#0x0
080F213A: 5432         add r2,#0x54
080F213C: 281c         add r0,r5,#0x0
080F213E: 0023         mov r3,#0x0
080F2140: 13f70efb     bl 0x08005760
080F2144: ec62         str r4,[r5,#0x2c]
080F2146: 6e62         str r6,[r5,#0x24]
080F2148: 0849         ldr r1,[0x080f216c]
080F214A: 607a         ldrb r0,[r4,#0x9]
080F214C: 8000         lsl r0,r0,#0x2
080F214E: 4018         add r0,r0,r1
080F2150: 0121         mov r1,#0x1
080F2152: e160         str r1,[r4,#0xc]
080F2154: 0068         ldr r0,[r0,#0x0]
080F2156: 4068         ldr r0,[r0,#0x4]
080F2158: 6061         str r0,[r4,#0x14]
080F215A: 201c         add r0,r4,#0x0
080F215C: 00f008f8     bl 0x080f2170
080F2160: 70bc         pop {r4,r5,r6}
080F2162: 01bc         pop {r0}
080F2164: 0047         bx r0
