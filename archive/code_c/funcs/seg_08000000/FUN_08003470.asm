; undefined FUN_08003470(void)
; entry 0x8003470  size 48 bytes

08003470: 30b5         push {r4,r5,lr}
08003472: 82b0         sub sp,#0x8
08003474: 051c         add r5,r0,#0x0
08003476: 8024         mov r4,#0x80
08003478: a400         lsl r4,r4,#0x2
0800347A: 201c         add r0,r4,#0x0
0800347C: fdf7f8fa     bl 0x08000a70
08003480: 2919         add r1,r5,r4
08003482: 0860         str r0,[r1,#0x0]
08003484: 0028         cmp r0,#0x0
08003486: 00d1         bne 0x0800348a
08003488: 0d60         str r5,[r1,#0x0]
0800348A: 0020         mov r0,#0x0
0800348C: 0968         ldr r1,[r1,#0x0]
0800348E: 0090         str r0,[sp,#0x0]
08003490: 034a         ldr r2,[0x080034a0]
08003492: 6846         mov r0,sp
08003494: 25f1a4fb     bl 0x08128be0
08003498: 02b0         add sp,#0x8
0800349A: 30bc         pop {r4,r5}
0800349C: 01bc         pop {r0}
0800349E: 0047         bx r0
