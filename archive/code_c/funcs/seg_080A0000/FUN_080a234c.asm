; undefined FUN_080a234c(void)
; entry 0x80a234c  size 46 bytes

080A234C: 10b5         push {r4,lr}
080A234E: 041c         add r4,r0,#0x0
080A2350: 211c         add r1,r4,#0x0
080A2352: 5431         add r1,#0x54
080A2354: 0320         mov r0,#0x3
080A2356: 2ef097fc     bl 0x080d0c88
080A235A: 211c         add r1,r4,#0x0
080A235C: 2231         add r1,#0x22
080A235E: 0020         mov r0,#0x0
080A2360: 0870         strb r0,[r1,#0x0]
080A2362: 0649         ldr r1,[0x080a237c]
080A2364: 607a         ldrb r0,[r4,#0x9]
080A2366: 8000         lsl r0,r0,#0x2
080A2368: 4018         add r0,r0,r1
080A236A: 0421         mov r1,#0x4
080A236C: e160         str r1,[r4,#0xc]
080A236E: 0068         ldr r0,[r0,#0x0]
080A2370: 0069         ldr r0,[r0,#0x10]
080A2372: 6061         str r0,[r4,#0x14]
080A2374: 10bc         pop {r4}
080A2376: 01bc         pop {r0}
080A2378: 0047         bx r0
