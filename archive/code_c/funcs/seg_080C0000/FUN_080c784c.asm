; undefined FUN_080c784c(void)
; entry 0x80c784c  size 58 bytes

080C784C: 00b5         push {lr}
080C784E: 021c         add r2,r0,#0x0
080C7850: 906a         ldr r0,[r2,#0x28]
080C7852: 007b         ldrb r0,[r0,#0xc]
080C7854: 0128         cmp r0,#0x1
080C7856: 0fd9         bls 0x080c7878
080C7858: 0649         ldr r1,[0x080c7874]
080C785A: 507a         ldrb r0,[r2,#0x9]
080C785C: 8000         lsl r0,r0,#0x2
080C785E: 4018         add r0,r0,r1
080C7860: 0221         mov r1,#0x2
080C7862: d160         str r1,[r2,#0xc]
080C7864: 0068         ldr r0,[r0,#0x0]
080C7866: 8068         ldr r0,[r0,#0x8]
080C7868: 5061         str r0,[r2,#0x14]
080C786A: 101c         add r0,r2,#0x0
080C786C: 00f068fa     bl 0x080c7d40
080C7870: 0ae0         b 0x080c7888
080C7878: 0448         ldr r0,[0x080c788c]
080C787A: 517b         ldrb r1,[r2,#0xd]
080C787C: 8900         lsl r1,r1,#0x2
080C787E: 0918         add r1,r1,r0
080C7880: 0968         ldr r1,[r1,#0x0]
080C7882: 101c         add r0,r2,#0x0
080C7884: 61f07cfb     bl 0x08128f80
080C7888: 01bc         pop {r0}
080C788A: 0047         bx r0
