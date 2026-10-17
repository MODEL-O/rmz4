; undefined FUN_0811c768(void)
; entry 0x811c768  size 64 bytes

0811C768: 30b5         push {r4,r5,lr}
0811C76A: 051c         add r5,r0,#0x0
0811C76C: 0e48         ldr r0,[0x0811c7a8]
0811C76E: 2a18         add r2,r5,r0
0811C770: 0e48         ldr r0,[0x0811c7ac]
0811C772: 0188         ldrh r1,[r0,#0x0]
0811C774: 0e48         ldr r0,[0x0811c7b0]
0811C776: 0840         and r0,r1
0811C778: 0002         lsl r0,r0,#0x8
0811C77A: f021         mov r1,#0xf0
0811C77C: c901         lsl r1,r1,#0x7
0811C77E: 4018         add r0,r0,r1
0811C780: 1060         str r0,[r2,#0x0]
0811C782: 0c48         ldr r0,[0x0811c7b4]
0811C784: 2d18         add r5,r5,r0
0811C786: 281c         add r0,r5,#0x0
0811C788: e6f672fe     bl 0x08003470
0811C78C: 0a4c         ldr r4,[0x0811c7b8]
0811C78E: 2068         ldr r0,[r4,#0x0]
0811C790: 00f704f8     bl 0x0801c79c
0811C794: 2068         ldr r0,[r4,#0x0]
0811C796: 291c         add r1,r5,#0x0
0811C798: 00f7c4f8     bl 0x0801c924
0811C79C: 281c         add r0,r5,#0x0
0811C79E: e6f63ffe     bl 0x08003420
0811C7A2: 30bc         pop {r4,r5}
0811C7A4: 01bc         pop {r0}
0811C7A6: 0047         bx r0
