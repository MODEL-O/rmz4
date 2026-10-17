; undefined FUN_080c9724(void)
; entry 0x80c9724  size 38 bytes

080C9724: 10b5         push {r4,lr}
080C9726: 041c         add r4,r0,#0x0
080C9728: 211c         add r1,r4,#0x0
080C972A: 5431         add r1,#0x54
080C972C: 0320         mov r0,#0x3
080C972E: 07f0abfa     bl 0x080d0c88
080C9732: 0649         ldr r1,[0x080c974c]
080C9734: 607a         ldrb r0,[r4,#0x9]
080C9736: 8000         lsl r0,r0,#0x2
080C9738: 4018         add r0,r0,r1
080C973A: 0421         mov r1,#0x4
080C973C: e160         str r1,[r4,#0xc]
080C973E: 0068         ldr r0,[r0,#0x0]
080C9740: 0069         ldr r0,[r0,#0x10]
080C9742: 6061         str r0,[r4,#0x14]
080C9744: 10bc         pop {r4}
080C9746: 01bc         pop {r0}
080C9748: 0047         bx r0
