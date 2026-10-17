; undefined FUN_080cb55c(void)
; entry 0x80cb55c  size 64 bytes

080CB55C: 00b5         push {lr}
080CB55E: 021c         add r2,r0,#0x0
080CB560: 8c30         add r0,#0x8c
080CB562: 0068         ldr r0,[r0,#0x0]
080CB564: 8021         mov r1,#0x80
080CB566: 8900         lsl r1,r1,#0x2
080CB568: 0840         and r0,r1
080CB56A: 0028         cmp r0,#0x0
080CB56C: 0ed0         beq 0x080cb58c
080CB56E: 0649         ldr r1,[0x080cb588]
080CB570: 507a         ldrb r0,[r2,#0x9]
080CB572: 8000         lsl r0,r0,#0x2
080CB574: 4018         add r0,r0,r1
080CB576: 0221         mov r1,#0x2
080CB578: d160         str r1,[r2,#0xc]
080CB57A: 0068         ldr r0,[r0,#0x0]
080CB57C: 8068         ldr r0,[r0,#0x8]
080CB57E: 5061         str r0,[r2,#0x14]
080CB580: 101c         add r0,r2,#0x0
080CB582: 00f00ff8     bl 0x080cb5a4
080CB586: 09e0         b 0x080cb59c
080CB58C: 0448         ldr r0,[0x080cb5a0]
080CB58E: 117c         ldrb r1,[r2,#0x10]
080CB590: 8900         lsl r1,r1,#0x2
080CB592: 0918         add r1,r1,r0
080CB594: 0968         ldr r1,[r1,#0x0]
080CB596: 101c         add r0,r2,#0x0
080CB598: 5df0f2fc     bl 0x08128f80
080CB59C: 01bc         pop {r0}
080CB59E: 0047         bx r0
