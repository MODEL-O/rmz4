; undefined FUN_08108e3c(void)
; entry 0x8108e3c  size 46 bytes

08108E3C: 30b5         push {r4,r5,lr}
08108E3E: 82b0         sub sp,#0x8
08108E40: 041c         add r4,r0,#0x0
08108E42: 0a48         ldr r0,[0x08108e6c]
08108E44: 0460         str r4,[r0,#0x0]
08108E46: 0025         mov r5,#0x0
08108E48: 0095         str r5,[sp,#0x0]
08108E4A: 8022         mov r2,#0x80
08108E4C: 5204         lsl r2,r2,#0x11
08108E4E: 6846         mov r0,sp
08108E50: 211c         add r1,r4,#0x0
08108E52: 1ff0c5fe     bl 0x08128be0
08108E56: 0195         str r5,[sp,#0x4]
08108E58: 01a8         add r0,sp,#0x4
08108E5A: 054a         ldr r2,[0x08108e70]
08108E5C: 211c         add r1,r4,#0x0
08108E5E: 1ff0c1fe     bl 0x08128be4
08108E62: 02b0         add sp,#0x8
08108E64: 30bc         pop {r4,r5}
08108E66: 01bc         pop {r0}
08108E68: 0047         bx r0
