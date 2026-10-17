; undefined FUN_081226ec(void)
; entry 0x81226ec  size 64 bytes

081226EC: 30b5         push {r4,r5,lr}
081226EE: 051c         add r5,r0,#0x0
081226F0: 0e48         ldr r0,[0x0812272c]
081226F2: 2a18         add r2,r5,r0
081226F4: 0e48         ldr r0,[0x08122730]
081226F6: 0188         ldrh r1,[r0,#0x0]
081226F8: 0e48         ldr r0,[0x08122734]
081226FA: 0840         and r0,r1
081226FC: 0002         lsl r0,r0,#0x8
081226FE: f021         mov r1,#0xf0
08122700: c901         lsl r1,r1,#0x7
08122702: 4018         add r0,r0,r1
08122704: 1060         str r0,[r2,#0x0]
08122706: 0c48         ldr r0,[0x08122738]
08122708: 2d18         add r5,r5,r0
0812270A: 281c         add r0,r5,#0x0
0812270C: e0f6b0fe     bl 0x08003470
08122710: 0a4c         ldr r4,[0x0812273c]
08122712: 2068         ldr r0,[r4,#0x0]
08122714: faf642f8     bl 0x0801c79c
08122718: 2068         ldr r0,[r4,#0x0]
0812271A: 291c         add r1,r5,#0x0
0812271C: faf602f9     bl 0x0801c924
08122720: 281c         add r0,r5,#0x0
08122722: e0f67dfe     bl 0x08003420
08122726: 30bc         pop {r4,r5}
08122728: 01bc         pop {r0}
0812272A: 0047         bx r0
