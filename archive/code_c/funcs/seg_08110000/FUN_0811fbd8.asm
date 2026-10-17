; undefined FUN_0811fbd8(void)
; entry 0x811fbd8  size 64 bytes

0811FBD8: 30b5         push {r4,r5,lr}
0811FBDA: 051c         add r5,r0,#0x0
0811FBDC: 0e48         ldr r0,[0x0811fc18]
0811FBDE: 2a18         add r2,r5,r0
0811FBE0: 0e48         ldr r0,[0x0811fc1c]
0811FBE2: 0188         ldrh r1,[r0,#0x0]
0811FBE4: 0e48         ldr r0,[0x0811fc20]
0811FBE6: 0840         and r0,r1
0811FBE8: 0002         lsl r0,r0,#0x8
0811FBEA: f021         mov r1,#0xf0
0811FBEC: c901         lsl r1,r1,#0x7
0811FBEE: 4018         add r0,r0,r1
0811FBF0: 1060         str r0,[r2,#0x0]
0811FBF2: 0c48         ldr r0,[0x0811fc24]
0811FBF4: 2d18         add r5,r5,r0
0811FBF6: 281c         add r0,r5,#0x0
0811FBF8: e3f63afc     bl 0x08003470
0811FBFC: 0a4c         ldr r4,[0x0811fc28]
0811FBFE: 2068         ldr r0,[r4,#0x0]
0811FC00: fcf6ccfd     bl 0x0801c79c
0811FC04: 2068         ldr r0,[r4,#0x0]
0811FC06: 291c         add r1,r5,#0x0
0811FC08: fcf68cfe     bl 0x0801c924
0811FC0C: 281c         add r0,r5,#0x0
0811FC0E: e3f607fc     bl 0x08003420
0811FC12: 30bc         pop {r4,r5}
0811FC14: 01bc         pop {r0}
0811FC16: 0047         bx r0
