; undefined FUN_08117ff4(void)
; entry 0x8117ff4  size 64 bytes

08117FF4: 30b5         push {r4,r5,lr}
08117FF6: 051c         add r5,r0,#0x0
08117FF8: 0e48         ldr r0,[0x08118034]
08117FFA: 2a18         add r2,r5,r0
08117FFC: 0e48         ldr r0,[0x08118038]
08117FFE: 0188         ldrh r1,[r0,#0x0]
08118000: 0e48         ldr r0,[0x0811803c]
08118002: 0840         and r0,r1
08118004: 0002         lsl r0,r0,#0x8
08118006: f021         mov r1,#0xf0
08118008: c901         lsl r1,r1,#0x7
0811800A: 4018         add r0,r0,r1
0811800C: 1060         str r0,[r2,#0x0]
0811800E: 0c48         ldr r0,[0x08118040]
08118010: 2d18         add r5,r5,r0
08118012: 281c         add r0,r5,#0x0
08118014: ebf62cfa     bl 0x08003470
08118018: 0a4c         ldr r4,[0x08118044]
0811801A: 2068         ldr r0,[r4,#0x0]
0811801C: 04f7befb     bl 0x0801c79c
08118020: 2068         ldr r0,[r4,#0x0]
08118022: 291c         add r1,r5,#0x0
08118024: 04f77efc     bl 0x0801c924
08118028: 281c         add r0,r5,#0x0
0811802A: ebf6f9f9     bl 0x08003420
0811802E: 30bc         pop {r4,r5}
08118030: 01bc         pop {r0}
08118032: 0047         bx r0
