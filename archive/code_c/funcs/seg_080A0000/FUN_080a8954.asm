; undefined FUN_080a8954(void)
; entry 0x80a8954  size 20 bytes

080A8954: 00b5         push {lr}
080A8956: 044a         ldr r2,[0x080a8968]
080A8958: 017c         ldrb r1,[r0,#0x10]
080A895A: 8900         lsl r1,r1,#0x2
080A895C: 8918         add r1,r1,r2
080A895E: 0968         ldr r1,[r1,#0x0]
080A8960: 80f00efb     bl 0x08128f80
080A8964: 01bc         pop {r0}
080A8966: 0047         bx r0
