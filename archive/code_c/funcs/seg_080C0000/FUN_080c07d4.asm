; undefined FUN_080c07d4(void)
; entry 0x80c07d4  size 62 bytes

080C07D4: 10b5         push {r4,lr}
080C07D6: 041c         add r4,r0,#0x0
080C07D8: e07b         ldrb r0,[r4,#0xf]
080C07DA: 0028         cmp r0,#0x0
080C07DC: 0ad1         bne 0x080c07f4
080C07DE: a17a         ldrb r1,[r4,#0xa]
080C07E0: 0120         mov r0,#0x1
080C07E2: 0843         orr r0,r1
080C07E4: a072         strb r0,[r4,#0xa]
080C07E6: 0b49         ldr r1,[0x080c0814]
080C07E8: 201c         add r0,r4,#0x0
080C07EA: 5cf789fb     bl 0x0801cf00
080C07EE: e07b         ldrb r0,[r4,#0xf]
080C07F0: 0130         add r0,#0x1
080C07F2: e073         strb r0,[r4,#0xf]
080C07F4: 201c         add r0,r4,#0x0
080C07F6: 5cf7fbfb     bl 0x0801cff0
080C07FA: 201c         add r0,r4,#0x0
080C07FC: 7330         add r0,#0x73
080C07FE: 0078         ldrb r0,[r0,#0x0]
080C0800: 0328         cmp r0,#0x3
080C0802: 03d1         bne 0x080c080c
080C0804: 0021         mov r1,#0x0
080C0806: 0120         mov r0,#0x1
080C0808: a073         strb r0,[r4,#0xe]
080C080A: e173         strb r1,[r4,#0xf]
080C080C: 10bc         pop {r4}
080C080E: 01bc         pop {r0}
080C0810: 0047         bx r0
