; undefined FUN_080c1b90(void)
; entry 0x80c1b90  size 64 bytes

080C1B90: 00b5         push {lr}
080C1B92: 021c         add r2,r0,#0x0
080C1B94: 8c30         add r0,#0x8c
080C1B96: 0068         ldr r0,[r0,#0x0]
080C1B98: 8021         mov r1,#0x80
080C1B9A: 8900         lsl r1,r1,#0x2
080C1B9C: 0840         and r0,r1
080C1B9E: 0028         cmp r0,#0x0
080C1BA0: 0ed0         beq 0x080c1bc0
080C1BA2: 0649         ldr r1,[0x080c1bbc]
080C1BA4: 507a         ldrb r0,[r2,#0x9]
080C1BA6: 8000         lsl r0,r0,#0x2
080C1BA8: 4018         add r0,r0,r1
080C1BAA: 0221         mov r1,#0x2
080C1BAC: d160         str r1,[r2,#0xc]
080C1BAE: 0068         ldr r0,[r0,#0x0]
080C1BB0: 8068         ldr r0,[r0,#0x8]
080C1BB2: 5061         str r0,[r2,#0x14]
080C1BB4: 101c         add r0,r2,#0x0
080C1BB6: 00f00ff8     bl 0x080c1bd8
080C1BBA: 09e0         b 0x080c1bd0
080C1BC0: 0448         ldr r0,[0x080c1bd4]
080C1BC2: 117c         ldrb r1,[r2,#0x10]
080C1BC4: 8900         lsl r1,r1,#0x2
080C1BC6: 0918         add r1,r1,r0
080C1BC8: 0968         ldr r1,[r1,#0x0]
080C1BCA: 101c         add r0,r2,#0x0
080C1BCC: 67f0d8f9     bl 0x08128f80
080C1BD0: 01bc         pop {r0}
080C1BD2: 0047         bx r0
