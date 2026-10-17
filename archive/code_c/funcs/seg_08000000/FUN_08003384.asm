; undefined FUN_08003384(void)
; entry 0x8003384  size 50 bytes

08003384: 30b5         push {r4,r5,lr}
08003386: 82b0         sub sp,#0x8
08003388: 041c         add r4,r0,#0x0
0800338A: 0025         mov r5,#0x0
0800338C: 0095         str r5,[sp,#0x0]
0800338E: 0a4a         ldr r2,[0x080033b8]
08003390: 6846         mov r0,sp
08003392: 211c         add r1,r4,#0x0
08003394: 25f124fc     bl 0x08128be0
08003398: 8021         mov r1,#0x80
0800339A: 8900         lsl r1,r1,#0x2
0800339C: 6018         add r0,r4,r1
0800339E: 0460         str r4,[r0,#0x0]
080033A0: 0431         add r1,#0x4
080033A2: 6018         add r0,r4,r1
080033A4: 0560         str r5,[r0,#0x0]
080033A6: 8220         mov r0,#0x82
080033A8: 8000         lsl r0,r0,#0x2
080033AA: 2418         add r4,r4,r0
080033AC: 2560         str r5,[r4,#0x0]
080033AE: 02b0         add sp,#0x8
080033B0: 30bc         pop {r4,r5}
080033B2: 01bc         pop {r0}
080033B4: 0047         bx r0
