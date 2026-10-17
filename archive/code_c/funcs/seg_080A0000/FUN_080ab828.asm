; undefined FUN_080ab828(void)
; entry 0x80ab828  size 28 bytes

080AB828: 827a         ldrb r2,[r0,#0xa]
080AB82A: fe21         mov r1,#0xfe
080AB82C: 1140         and r1,r2
080AB82E: 8172         strb r1,[r0,#0xa]
080AB830: 044a         ldr r2,[0x080ab844]
080AB832: 417a         ldrb r1,[r0,#0x9]
080AB834: 8900         lsl r1,r1,#0x2
080AB836: 8918         add r1,r1,r2
080AB838: 0422         mov r2,#0x4
080AB83A: c260         str r2,[r0,#0xc]
080AB83C: 0968         ldr r1,[r1,#0x0]
080AB83E: 0969         ldr r1,[r1,#0x10]
080AB840: 4161         str r1,[r0,#0x14]
080AB842: 7047         bx lr
