; undefined FUN_080cb130(void)
; entry 0x80cb130  size 64 bytes

080CB130: 00b5         push {lr}
080CB132: 021c         add r2,r0,#0x0
080CB134: 8c30         add r0,#0x8c
080CB136: 0068         ldr r0,[r0,#0x0]
080CB138: 8021         mov r1,#0x80
080CB13A: 8900         lsl r1,r1,#0x2
080CB13C: 0840         and r0,r1
080CB13E: 0028         cmp r0,#0x0
080CB140: 0ed0         beq 0x080cb160
080CB142: 0649         ldr r1,[0x080cb15c]
080CB144: 507a         ldrb r0,[r2,#0x9]
080CB146: 8000         lsl r0,r0,#0x2
080CB148: 4018         add r0,r0,r1
080CB14A: 0221         mov r1,#0x2
080CB14C: d160         str r1,[r2,#0xc]
080CB14E: 0068         ldr r0,[r0,#0x0]
080CB150: 8068         ldr r0,[r0,#0x8]
080CB152: 5061         str r0,[r2,#0x14]
080CB154: 101c         add r0,r2,#0x0
080CB156: 00f00ff8     bl 0x080cb178
080CB15A: 09e0         b 0x080cb170
080CB160: 0448         ldr r0,[0x080cb174]
080CB162: 117c         ldrb r1,[r2,#0x10]
080CB164: 8900         lsl r1,r1,#0x2
080CB166: 0918         add r1,r1,r0
080CB168: 0968         ldr r1,[r1,#0x0]
080CB16A: 101c         add r0,r2,#0x0
080CB16C: 5df008ff     bl 0x08128f80
080CB170: 01bc         pop {r0}
080CB172: 0047         bx r0
