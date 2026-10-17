; undefined FUN_0801978c(void)
; entry 0x801978c  size 58 bytes

0801978C: 30b5         push {r4,r5,lr}
0801978E: 0e49         ldr r1,[0x080197c8]
08019790: 0e4a         ldr r2,[0x080197cc]
08019792: 8818         add r0,r1,r2
08019794: 0024         mov r4,#0x0
08019796: 0022         mov r2,#0x0
08019798: 0280         strh r2,[r0,#0x0]
0801979A: 0d4b         ldr r3,[0x080197d0]
0801979C: c818         add r0,r1,r3
0801979E: 1023         mov r3,#0x10
080197A0: 0370         strb r3,[r0,#0x0]
080197A2: 0c4d         ldr r5,[0x080197d4]
080197A4: 4819         add r0,r1,r5
080197A6: 0260         str r2,[r0,#0x0]
080197A8: 0435         add r5,#0x4
080197AA: 4819         add r0,r1,r5
080197AC: 0260         str r2,[r0,#0x0]
080197AE: 0435         add r5,#0x4
080197B0: 4819         add r0,r1,r5
080197B2: 0470         strb r4,[r0,#0x0]
080197B4: 084c         ldr r4,[0x080197d8]
080197B6: 0819         add r0,r1,r4
080197B8: 0370         strb r3,[r0,#0x0]
080197BA: 0235         add r5,#0x2
080197BC: 4919         add r1,r1,r5
080197BE: 0a80         strh r2,[r1,#0x0]
080197C0: 30bc         pop {r4,r5}
080197C2: 01bc         pop {r0}
080197C4: 0047         bx r0
