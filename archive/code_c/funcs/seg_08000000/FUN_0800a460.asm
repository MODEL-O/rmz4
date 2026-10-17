; undefined FUN_0800a460(void)
; entry 0x800a460  size 50 bytes

0800A460: 00b5         push {lr}
0800A462: 82b0         sub sp,#0x8
0800A464: 0013         asr r0,r0,#0xc
0800A466: 0138         sub r0,#0x1
0800A468: 0913         asr r1,r1,#0xc
0800A46A: 0139         sub r1,#0x1
0800A46C: 0004         lsl r0,r0,#0x10
0800A46E: 0214         asr r2,r0,#0x10
0800A470: f023         mov r3,#0xf0
0800A472: 9b03         lsl r3,r3,#0xe
0800A474: c018         add r0,r0,r3
0800A476: 0904         lsl r1,r1,#0x10
0800A478: 000c         lsr r0,r0,#0x10
0800A47A: 0843         orr r0,r1
0800A47C: 0090         str r0,[sp,#0x0]
0800A47E: 0548         ldr r0,[0x0800a494]
0800A480: 0190         str r0,[sp,#0x4]
0800A482: 0914         asr r1,r1,#0x10
0800A484: 101c         add r0,r2,#0x0
0800A486: 6a46         mov r2,sp
0800A488: fcf770ff     bl 0x0800736c
0800A48C: 02b0         add sp,#0x8
0800A48E: 01bc         pop {r0}
0800A490: 0047         bx r0
