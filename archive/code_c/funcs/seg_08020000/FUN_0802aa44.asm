; undefined FUN_0802aa44(void)
; entry 0x802aa44  size 70 bytes

0802AA44: 70b5         push {r4,r5,r6,lr}
0802AA46: 114c         ldr r4,[0x0802aa8c]
0802AA48: f020         mov r0,#0xf0
0802AA4A: c001         lsl r0,r0,#0x7
0802AA4C: 2060         str r0,[r4,#0x0]
0802AA4E: a020         mov r0,#0xa0
0802AA50: c001         lsl r0,r0,#0x7
0802AA52: 6060         str r0,[r4,#0x4]
0802AA54: 261c         add r6,r4,#0x0
0802AA56: 0c3e         sub r6,#0xc
0802AA58: 301c         add r0,r6,#0x0
0802AA5A: 211c         add r1,r4,#0x0
0802AA5C: 0022         mov r2,#0x0
0802AA5E: 0023         mov r3,#0x0
0802AA60: d8f7d4f8     bl 0x08002c0c
0802AA64: 0a48         ldr r0,[0x0802aa90]
0802AA66: 2518         add r5,r4,r0
0802AA68: 281c         add r0,r5,#0x0
0802AA6A: d8f78bfc     bl 0x08003384
0802AA6E: 281c         add r0,r5,#0x0
0802AA70: 311c         add r1,r6,#0x0
0802AA72: d8f7a3fc     bl 0x080033bc
0802AA76: 0748         ldr r0,[0x0802aa94]
0802AA78: 2418         add r4,r4,r0
0802AA7A: 0749         ldr r1,[0x0802aa98]
0802AA7C: 201c         add r0,r4,#0x0
0802AA7E: 4022         mov r2,#0x40
0802AA80: dff098fb     bl 0x0810a1b4
0802AA84: 70bc         pop {r4,r5,r6}
0802AA86: 01bc         pop {r0}
0802AA88: 0047         bx r0
