; undefined FUN_0811eacc(void)
; entry 0x811eacc  size 64 bytes

0811EACC: 30b5         push {r4,r5,lr}
0811EACE: 051c         add r5,r0,#0x0
0811EAD0: 0e48         ldr r0,[0x0811eb0c]
0811EAD2: 2a18         add r2,r5,r0
0811EAD4: 0e48         ldr r0,[0x0811eb10]
0811EAD6: 0188         ldrh r1,[r0,#0x0]
0811EAD8: 0e48         ldr r0,[0x0811eb14]
0811EADA: 0840         and r0,r1
0811EADC: 0002         lsl r0,r0,#0x8
0811EADE: f021         mov r1,#0xf0
0811EAE0: c901         lsl r1,r1,#0x7
0811EAE2: 4018         add r0,r0,r1
0811EAE4: 1060         str r0,[r2,#0x0]
0811EAE6: 0c48         ldr r0,[0x0811eb18]
0811EAE8: 2d18         add r5,r5,r0
0811EAEA: 281c         add r0,r5,#0x0
0811EAEC: e4f6c0fc     bl 0x08003470
0811EAF0: 0a4c         ldr r4,[0x0811eb1c]
0811EAF2: 2068         ldr r0,[r4,#0x0]
0811EAF4: fdf652fe     bl 0x0801c79c
0811EAF8: 2068         ldr r0,[r4,#0x0]
0811EAFA: 291c         add r1,r5,#0x0
0811EAFC: fdf612ff     bl 0x0801c924
0811EB00: 281c         add r0,r5,#0x0
0811EB02: e4f68dfc     bl 0x08003420
0811EB06: 30bc         pop {r4,r5}
0811EB08: 01bc         pop {r0}
0811EB0A: 0047         bx r0
