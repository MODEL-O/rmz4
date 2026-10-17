; undefined FUN_0811fb7c(void)
; entry 0x811fb7c  size 72 bytes

0811FB7C: 70b5         push {r4,r5,r6,lr}
0811FB7E: 051c         add r5,r0,#0x0
0811FB80: 1048         ldr r0,[0x0811fbc4]
0811FB82: 2918         add r1,r5,r0
0811FB84: f020         mov r0,#0xf0
0811FB86: c001         lsl r0,r0,#0x7
0811FB88: 0860         str r0,[r1,#0x0]
0811FB8A: a020         mov r0,#0xa0
0811FB8C: c001         lsl r0,r0,#0x7
0811FB8E: 4860         str r0,[r1,#0x4]
0811FB90: 0d48         ldr r0,[0x0811fbc8]
0811FB92: 2e18         add r6,r5,r0
0811FB94: 301c         add r0,r6,#0x0
0811FB96: 0022         mov r2,#0x0
0811FB98: 0023         mov r3,#0x0
0811FB9A: e3f637f8     bl 0x08002c0c
0811FB9E: 0b48         ldr r0,[0x0811fbcc]
0811FBA0: 2c18         add r4,r5,r0
0811FBA2: 201c         add r0,r4,#0x0
0811FBA4: e3f6eefb     bl 0x08003384
0811FBA8: 201c         add r0,r4,#0x0
0811FBAA: 311c         add r1,r6,#0x0
0811FBAC: e3f606fc     bl 0x080033bc
0811FBB0: 0748         ldr r0,[0x0811fbd0]
0811FBB2: 2d18         add r5,r5,r0
0811FBB4: 0749         ldr r1,[0x0811fbd4]
0811FBB6: 281c         add r0,r5,#0x0
0811FBB8: 4022         mov r2,#0x40
0811FBBA: eaf7fbfa     bl 0x0810a1b4
0811FBBE: 70bc         pop {r4,r5,r6}
0811FBC0: 01bc         pop {r0}
0811FBC2: 0047         bx r0
