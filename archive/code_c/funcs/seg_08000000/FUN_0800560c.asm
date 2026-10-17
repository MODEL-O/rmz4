; undefined FUN_0800560c(void)
; entry 0x800560c  size 48 bytes

0800560C: 30b5         push {r4,r5,lr}
0800560E: 82b0         sub sp,#0x8
08005610: 0a4d         ldr r5,[0x0800563c]
08005612: 0024         mov r4,#0x0
08005614: ec70         strb r4,[r5,#0x3]
08005616: 0a48         ldr r0,[0x08005640]
08005618: 2918         add r1,r5,r0
0800561A: 0094         str r4,[sp,#0x0]
0800561C: 094a         ldr r2,[0x08005644]
0800561E: 6846         mov r0,sp
08005620: 23f1defa     bl 0x08128be0
08005624: 0194         str r4,[sp,#0x4]
08005626: 01a8         add r0,sp,#0x4
08005628: 0749         ldr r1,[0x08005648]
0800562A: 6d18         add r5,r5,r1
0800562C: 074a         ldr r2,[0x0800564c]
0800562E: 291c         add r1,r5,#0x0
08005630: 23f1d8fa     bl 0x08128be4
08005634: 02b0         add sp,#0x8
08005636: 30bc         pop {r4,r5}
08005638: 01bc         pop {r0}
0800563A: 0047         bx r0
