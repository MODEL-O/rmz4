; undefined FUN_080c0858(void)
; entry 0x80c0858  size 62 bytes

080C0858: 10b5         push {r4,lr}
080C085A: 041c         add r4,r0,#0x0
080C085C: e07b         ldrb r0,[r4,#0xf]
080C085E: 0028         cmp r0,#0x0
080C0860: 0ad1         bne 0x080c0878
080C0862: a17a         ldrb r1,[r4,#0xa]
080C0864: 0120         mov r0,#0x1
080C0866: 0843         orr r0,r1
080C0868: a072         strb r0,[r4,#0xa]
080C086A: 0b49         ldr r1,[0x080c0898]
080C086C: 201c         add r0,r4,#0x0
080C086E: 5cf747fb     bl 0x0801cf00
080C0872: e07b         ldrb r0,[r4,#0xf]
080C0874: 0130         add r0,#0x1
080C0876: e073         strb r0,[r4,#0xf]
080C0878: 201c         add r0,r4,#0x0
080C087A: 5cf7b9fb     bl 0x0801cff0
080C087E: 201c         add r0,r4,#0x0
080C0880: 7330         add r0,#0x73
080C0882: 0078         ldrb r0,[r0,#0x0]
080C0884: 0328         cmp r0,#0x3
080C0886: 03d1         bne 0x080c0890
080C0888: 0021         mov r1,#0x0
080C088A: 0120         mov r0,#0x1
080C088C: a073         strb r0,[r4,#0xe]
080C088E: e173         strb r1,[r4,#0xf]
080C0890: 10bc         pop {r4}
080C0892: 01bc         pop {r0}
080C0894: 0047         bx r0
