; undefined FUN_080a896c(void)
; entry 0x80a896c  size 58 bytes

080A896C: 00b5         push {lr}
080A896E: 021c         add r2,r0,#0x0
080A8970: 906a         ldr r0,[r2,#0x28]
080A8972: 007b         ldrb r0,[r0,#0xc]
080A8974: 0128         cmp r0,#0x1
080A8976: 0fd9         bls 0x080a8998
080A8978: 0649         ldr r1,[0x080a8994]
080A897A: 507a         ldrb r0,[r2,#0x9]
080A897C: 8000         lsl r0,r0,#0x2
080A897E: 4018         add r0,r0,r1
080A8980: 0221         mov r1,#0x2
080A8982: d160         str r1,[r2,#0xc]
080A8984: 0068         ldr r0,[r0,#0x0]
080A8986: 8068         ldr r0,[r0,#0x8]
080A8988: 5061         str r0,[r2,#0x14]
080A898A: 101c         add r0,r2,#0x0
080A898C: 00f010f8     bl 0x080a89b0
080A8990: 0ae0         b 0x080a89a8
080A8998: 0448         ldr r0,[0x080a89ac]
080A899A: 117c         ldrb r1,[r2,#0x10]
080A899C: 8900         lsl r1,r1,#0x2
080A899E: 0918         add r1,r1,r0
080A89A0: 0968         ldr r1,[r1,#0x0]
080A89A2: 101c         add r0,r2,#0x0
080A89A4: 80f0ecfa     bl 0x08128f80
080A89A8: 01bc         pop {r0}
080A89AA: 0047         bx r0
