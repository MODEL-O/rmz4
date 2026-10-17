; undefined FUN_0811f20c(void)
; entry 0x811f20c  size 72 bytes

0811F20C: 70b5         push {r4,r5,r6,lr}
0811F20E: 051c         add r5,r0,#0x0
0811F210: 1048         ldr r0,[0x0811f254]
0811F212: 2918         add r1,r5,r0
0811F214: f020         mov r0,#0xf0
0811F216: c001         lsl r0,r0,#0x7
0811F218: 0860         str r0,[r1,#0x0]
0811F21A: a020         mov r0,#0xa0
0811F21C: c001         lsl r0,r0,#0x7
0811F21E: 4860         str r0,[r1,#0x4]
0811F220: 0d48         ldr r0,[0x0811f258]
0811F222: 2e18         add r6,r5,r0
0811F224: 301c         add r0,r6,#0x0
0811F226: 0022         mov r2,#0x0
0811F228: 0023         mov r3,#0x0
0811F22A: e3f6effc     bl 0x08002c0c
0811F22E: 0b48         ldr r0,[0x0811f25c]
0811F230: 2c18         add r4,r5,r0
0811F232: 201c         add r0,r4,#0x0
0811F234: e4f6a6f8     bl 0x08003384
0811F238: 201c         add r0,r4,#0x0
0811F23A: 311c         add r1,r6,#0x0
0811F23C: e4f6bef8     bl 0x080033bc
0811F240: 0748         ldr r0,[0x0811f260]
0811F242: 2d18         add r5,r5,r0
0811F244: 0749         ldr r1,[0x0811f264]
0811F246: 281c         add r0,r5,#0x0
0811F248: 4022         mov r2,#0x40
0811F24A: eaf7b3ff     bl 0x0810a1b4
0811F24E: 70bc         pop {r4,r5,r6}
0811F250: 01bc         pop {r0}
0811F252: 0047         bx r0
