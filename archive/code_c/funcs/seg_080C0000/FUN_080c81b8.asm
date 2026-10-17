; undefined FUN_080c81b8(void)
; entry 0x80c81b8  size 58 bytes

080C81B8: 00b5         push {lr}
080C81BA: 021c         add r2,r0,#0x0
080C81BC: 906a         ldr r0,[r2,#0x28]
080C81BE: 007b         ldrb r0,[r0,#0xc]
080C81C0: 0128         cmp r0,#0x1
080C81C2: 0fd9         bls 0x080c81e4
080C81C4: 0649         ldr r1,[0x080c81e0]
080C81C6: 507a         ldrb r0,[r2,#0x9]
080C81C8: 8000         lsl r0,r0,#0x2
080C81CA: 4018         add r0,r0,r1
080C81CC: 0221         mov r1,#0x2
080C81CE: d160         str r1,[r2,#0xc]
080C81D0: 0068         ldr r0,[r0,#0x0]
080C81D2: 8068         ldr r0,[r0,#0x8]
080C81D4: 5061         str r0,[r2,#0x14]
080C81D6: 101c         add r0,r2,#0x0
080C81D8: 00f066f8     bl 0x080c82a8
080C81DC: 0ae0         b 0x080c81f4
080C81E4: 0448         ldr r0,[0x080c81f8]
080C81E6: 517b         ldrb r1,[r2,#0xd]
080C81E8: 8900         lsl r1,r1,#0x2
080C81EA: 0918         add r1,r1,r0
080C81EC: 0968         ldr r1,[r1,#0x0]
080C81EE: 101c         add r0,r2,#0x0
080C81F0: 60f0c6fe     bl 0x08128f80
080C81F4: 01bc         pop {r0}
080C81F6: 0047         bx r0
