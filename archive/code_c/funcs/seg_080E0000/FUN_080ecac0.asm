; undefined FUN_080ecac0(void)
; entry 0x80ecac0  size 58 bytes

080ECAC0: 00b5         push {lr}
080ECAC2: 021c         add r2,r0,#0x0
080ECAC4: 906a         ldr r0,[r2,#0x28]
080ECAC6: 007b         ldrb r0,[r0,#0xc]
080ECAC8: 0428         cmp r0,#0x4
080ECACA: 0fd1         bne 0x080ecaec
080ECACC: 0649         ldr r1,[0x080ecae8]
080ECACE: 507a         ldrb r0,[r2,#0x9]
080ECAD0: 8000         lsl r0,r0,#0x2
080ECAD2: 4018         add r0,r0,r1
080ECAD4: 0221         mov r1,#0x2
080ECAD6: d160         str r1,[r2,#0xc]
080ECAD8: 0068         ldr r0,[r0,#0x0]
080ECADA: 8068         ldr r0,[r0,#0x8]
080ECADC: 5061         str r0,[r2,#0x14]
080ECADE: 101c         add r0,r2,#0x0
080ECAE0: 00f07af8     bl 0x080ecbd8
080ECAE4: 0ae0         b 0x080ecafc
080ECAEC: 0448         ldr r0,[0x080ecb00]
080ECAEE: 517b         ldrb r1,[r2,#0xd]
080ECAF0: 8900         lsl r1,r1,#0x2
080ECAF2: 0918         add r1,r1,r0
080ECAF4: 0968         ldr r1,[r1,#0x0]
080ECAF6: 101c         add r0,r2,#0x0
080ECAF8: 3cf042fa     bl 0x08128f80
080ECAFC: 01bc         pop {r0}
080ECAFE: 0047         bx r0
