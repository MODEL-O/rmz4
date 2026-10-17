; undefined FUN_080b0858(void)
; entry 0x80b0858  size 72 bytes

080B0858: 10b5         push {r4,lr}
080B085A: 041c         add r4,r0,#0x0
080B085C: a07b         ldrb r0,[r4,#0xe]
080B085E: 0028         cmp r0,#0x0
080B0860: 08d1         bne 0x080b0874
080B0862: 0f49         ldr r1,[0x080b08a0]
080B0864: 201c         add r0,r4,#0x0
080B0866: 6cf74bfb     bl 0x0801cf00
080B086A: 6020         mov r0,#0x60
080B086C: a074         strb r0,[r4,#0x12]
080B086E: a07b         ldrb r0,[r4,#0xe]
080B0870: 0130         add r0,#0x1
080B0872: a073         strb r0,[r4,#0xe]
080B0874: a17c         ldrb r1,[r4,#0x12]
080B0876: 0029         cmp r1,#0x0
080B0878: 04d1         bne 0x080b0884
080B087A: 0320         mov r0,#0x3
080B087C: 6073         strb r0,[r4,#0xd]
080B087E: a173         strb r1,[r4,#0xe]
080B0880: 6020         mov r0,#0x60
080B0882: a074         strb r0,[r4,#0x12]
080B0884: 201c         add r0,r4,#0x0
080B0886: b730         add r0,#0xb7
080B0888: 211c         add r1,r4,#0x0
080B088A: b631         add r1,#0xb6
080B088C: 0078         ldrb r0,[r0,#0x0]
080B088E: 0978         ldrb r1,[r1,#0x0]
080B0890: 8842         cmp r0,r1
080B0892: 02d0         beq 0x080b089a
080B0894: a07c         ldrb r0,[r4,#0x12]
080B0896: 0138         sub r0,#0x1
080B0898: a074         strb r0,[r4,#0x12]
080B089A: 10bc         pop {r4}
080B089C: 01bc         pop {r0}
080B089E: 0047         bx r0
