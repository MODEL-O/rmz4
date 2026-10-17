; undefined FUN_080a44d4(void)
; entry 0x80a44d4  size 64 bytes

080A44D4: 30b5         push {r4,r5,lr}
080A44D6: 041c         add r4,r0,#0x0
080A44D8: 251c         add r5,r4,#0x0
080A44DA: 5435         add r5,#0x54
080A44DC: 0020         mov r0,#0x0
080A44DE: 0f21         mov r1,#0xf
080A44E0: 2a1c         add r2,r5,#0x0
080A44E2: 86f751fb     bl 0x0802ab88
080A44E6: 0b4a         ldr r2,[0x080a4514]
080A44E8: 9189         ldrh r1,[r2,#0xc]
080A44EA: 0b48         ldr r0,[0x080a4518]
080A44EC: 8142         cmp r1,r0
080A44EE: 01d8         bhi 0x080a44f4
080A44F0: 481c         add r0,r1,#0x1
080A44F2: 9081         strh r0,[r2,#0xc]
080A44F4: 201c         add r0,r4,#0x0
080A44F6: 291c         add r1,r5,#0x0
080A44F8: 86f772fb     bl 0x0802abe0
080A44FC: 0749         ldr r1,[0x080a451c]
080A44FE: 607a         ldrb r0,[r4,#0x9]
080A4500: 8000         lsl r0,r0,#0x2
080A4502: 4018         add r0,r0,r1
080A4504: 0421         mov r1,#0x4
080A4506: e160         str r1,[r4,#0xc]
080A4508: 0068         ldr r0,[r0,#0x0]
080A450A: 0069         ldr r0,[r0,#0x10]
080A450C: 6061         str r0,[r4,#0x14]
080A450E: 30bc         pop {r4,r5}
080A4510: 01bc         pop {r0}
080A4512: 0047         bx r0
