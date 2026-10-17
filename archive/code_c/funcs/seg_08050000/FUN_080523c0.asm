; undefined FUN_080523c0(void)
; entry 0x80523c0  size 54 bytes

080523C0: 10b5         push {r4,lr}
080523C2: 041c         add r4,r0,#0x0
080523C4: a07b         ldrb r0,[r4,#0xe]
080523C6: 0028         cmp r0,#0x0
080523C8: 06d1         bne 0x080523d8
080523CA: 0b49         ldr r1,[0x080523f8]
080523CC: 201c         add r0,r4,#0x0
080523CE: caf797fd     bl 0x0801cf00
080523D2: a07b         ldrb r0,[r4,#0xe]
080523D4: 0130         add r0,#0x1
080523D6: a073         strb r0,[r4,#0xe]
080523D8: 201c         add r0,r4,#0x0
080523DA: caf709fe     bl 0x0801cff0
080523DE: 201c         add r0,r4,#0x0
080523E0: 7330         add r0,#0x73
080523E2: 0078         ldrb r0,[r0,#0x0]
080523E4: 0328         cmp r0,#0x3
080523E6: 03d1         bne 0x080523f0
080523E8: 0021         mov r1,#0x0
080523EA: 1620         mov r0,#0x16
080523EC: 6073         strb r0,[r4,#0xd]
080523EE: a173         strb r1,[r4,#0xe]
080523F0: 10bc         pop {r4}
080523F2: 01bc         pop {r0}
080523F4: 0047         bx r0
