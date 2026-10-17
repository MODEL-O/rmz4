; undefined FUN_0802aa9c(void)
; entry 0x802aa9c  size 60 bytes

0802AA9C: 30b5         push {r4,r5,lr}
0802AA9E: 0e4d         ldr r5,[0x0802aad8]
0802AAA0: 0e48         ldr r0,[0x0802aadc]
0802AAA2: 0188         ldrh r1,[r0,#0x0]
0802AAA4: 0e48         ldr r0,[0x0802aae0]
0802AAA6: 0840         and r0,r1
0802AAA8: 0002         lsl r0,r0,#0x8
0802AAAA: f021         mov r1,#0xf0
0802AAAC: c901         lsl r1,r1,#0x7
0802AAAE: 4018         add r0,r0,r1
0802AAB0: 2860         str r0,[r5,#0x0]
0802AAB2: 0c48         ldr r0,[0x0802aae4]
0802AAB4: 2d18         add r5,r5,r0
0802AAB6: 281c         add r0,r5,#0x0
0802AAB8: d8f7dafc     bl 0x08003470
0802AABC: 0a4c         ldr r4,[0x0802aae8]
0802AABE: 2068         ldr r0,[r4,#0x0]
0802AAC0: f1f76cfe     bl 0x0801c79c
0802AAC4: 2068         ldr r0,[r4,#0x0]
0802AAC6: 291c         add r1,r5,#0x0
0802AAC8: f1f72cff     bl 0x0801c924
0802AACC: 281c         add r0,r5,#0x0
0802AACE: d8f7a7fc     bl 0x08003420
0802AAD2: 30bc         pop {r4,r5}
0802AAD4: 01bc         pop {r0}
0802AAD6: 0047         bx r0
