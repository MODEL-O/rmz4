; undefined FUN_08092360(void)
; entry 0x8092360  size 32 bytes

08092360: 10b5         push {r4,lr}
08092362: 041c         add r4,r0,#0x0
08092364: a07b         ldrb r0,[r4,#0xe]
08092366: 0028         cmp r0,#0x0
08092368: 07d1         bne 0x0809237a
0809236A: 201c         add r0,r4,#0x0
0809236C: 7430         add r0,#0x74
0809236E: 0449         ldr r1,[0x08092380]
08092370: 73f708fa     bl 0x08005784
08092374: a07b         ldrb r0,[r4,#0xe]
08092376: 0130         add r0,#0x1
08092378: a073         strb r0,[r4,#0xe]
0809237A: 10bc         pop {r4}
0809237C: 01bc         pop {r0}
0809237E: 0047         bx r0
