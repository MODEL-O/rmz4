; undefined FUN_08080a3c(void)
; entry 0x8080a3c  size 32 bytes

08080A3C: 10b5         push {r4,lr}
08080A3E: 041c         add r4,r0,#0x0
08080A40: 0649         ldr r1,[0x08080a5c]
08080A42: a07b         ldrb r0,[r4,#0xe]
08080A44: 8000         lsl r0,r0,#0x2
08080A46: 4018         add r0,r0,r1
08080A48: 0168         ldr r1,[r0,#0x0]
08080A4A: 201c         add r0,r4,#0x0
08080A4C: a8f098fa     bl 0x08128f80
08080A50: 201c         add r0,r4,#0x0
08080A52: 00f097fb     bl 0x08081184
08080A56: 10bc         pop {r4}
08080A58: 01bc         pop {r0}
08080A5A: 0047         bx r0
