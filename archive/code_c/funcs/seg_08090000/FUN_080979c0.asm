; undefined FUN_080979c0(void)
; entry 0x80979c0  size 58 bytes

080979C0: 30b5         push {r4,r5,lr}
080979C2: 041c         add r4,r0,#0x0
080979C4: a57b         ldrb r5,[r4,#0xe]
080979C6: 002d         cmp r5,#0x0
080979C8: 08d1         bne 0x080979dc
080979CA: a021         mov r1,#0xa0
080979CC: c901         lsl r1,r1,#0x7
080979CE: 85f797fa     bl 0x0801cf00
080979D2: a574         strb r5,[r4,#0x12]
080979D4: e573         strb r5,[r4,#0xf]
080979D6: a07b         ldrb r0,[r4,#0xe]
080979D8: 0130         add r0,#0x1
080979DA: a073         strb r0,[r4,#0xe]
080979DC: e07b         ldrb r0,[r4,#0xf]
080979DE: 0428         cmp r0,#0x4
080979E0: 00d9         bls 0x080979e4
080979E2: 82e0         b 0x08097aea
080979E4: 8000         lsl r0,r0,#0x2
080979E6: 0249         ldr r1,[0x080979f0]
080979E8: 4018         add r0,r0,r1
080979EA: 0068         ldr r0,[r0,#0x0]
080979EC: 8746         mov pc,r0
08097AEA: 201c         add r0,r4,#0x0
08097AEC: 85f780fa     bl 0x0801cff0
08097AF0: 30bc         pop {r4,r5}
08097AF2: 01bc         pop {r0}
08097AF4: 0047         bx r0
