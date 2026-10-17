; undefined FUN_080ee190(void)
; entry 0x80ee190  size 70 bytes

080EE190: 10b5         push {r4,lr}
080EE192: 041c         add r4,r0,#0x0
080EE194: a17a         ldrb r1,[r4,#0xa]
080EE196: 0120         mov r0,#0x1
080EE198: 0843         orr r0,r1
080EE19A: 0221         mov r1,#0x2
080EE19C: 0843         orr r0,r1
080EE19E: a072         strb r0,[r4,#0xa]
080EE1A0: 201c         add r0,r4,#0x0
080EE1A2: 2ef77bfd     bl 0x0801cc9c
080EE1A6: e17a         ldrb r1,[r4,#0xb]
080EE1A8: 0820         mov r0,#0x8
080EE1AA: 0843         orr r0,r1
080EE1AC: e072         strb r0,[r4,#0xb]
080EE1AE: 0a48         ldr r0,[0x080ee1d8]
080EE1B0: 2063         str r0,[r4,#0x30]
080EE1B2: 0122         mov r2,#0x1
080EE1B4: e284         strh r2,[r4,#0x26]
080EE1B6: 0949         ldr r1,[0x080ee1dc]
080EE1B8: 607a         ldrb r0,[r4,#0x9]
080EE1BA: 8000         lsl r0,r0,#0x2
080EE1BC: 4018         add r0,r0,r1
080EE1BE: e260         str r2,[r4,#0xc]
080EE1C0: 0068         ldr r0,[r0,#0x0]
080EE1C2: 4068         ldr r0,[r0,#0x4]
080EE1C4: 6061         str r0,[r4,#0x14]
080EE1C6: 607c         ldrb r0,[r4,#0x11]
080EE1C8: 6073         strb r0,[r4,#0xd]
080EE1CA: 201c         add r0,r4,#0x0
080EE1CC: fff7fcfa     bl 0x080ed7c8
080EE1D0: 10bc         pop {r4}
080EE1D2: 01bc         pop {r0}
080EE1D4: 0047         bx r0
