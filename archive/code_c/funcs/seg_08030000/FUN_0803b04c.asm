; undefined FUN_0803b04c(void)
; entry 0x803b04c  size 48 bytes

0803B04C: 00b5         push {lr}
0803B04E: 021c         add r2,r0,#0x0
0803B050: 0b1c         add r3,r1,#0x0
0803B052: 917a         ldrb r1,[r2,#0xa]
0803B054: 1020         mov r0,#0x10
0803B056: 0840         and r0,r1
0803B058: 0028         cmp r0,#0x0
0803B05A: 03d0         beq 0x0803b064
0803B05C: 506d         ldr r0,[r2,#0x54]
0803B05E: b021         mov r1,#0xb0
0803B060: 0901         lsl r1,r1,#0x4
0803B062: 01e0         b 0x0803b068
0803B064: 506d         ldr r0,[r2,#0x54]
0803B066: 0549         ldr r1,[0x0803b07c]
0803B068: 4018         add r0,r0,r1
0803B06A: 1860         str r0,[r3,#0x0]
0803B06C: 906d         ldr r0,[r2,#0x58]
0803B06E: 8021         mov r1,#0x80
0803B070: c900         lsl r1,r1,#0x3
0803B072: 4018         add r0,r0,r1
0803B074: 5860         str r0,[r3,#0x4]
0803B076: 0120         mov r0,#0x1
0803B078: 02bc         pop {r1}
0803B07A: 0847         bx r1
