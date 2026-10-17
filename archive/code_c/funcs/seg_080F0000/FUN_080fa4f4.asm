; undefined FUN_080fa4f4(void)
; entry 0x80fa4f4  size 64 bytes

080FA4F4: 10b5         push {r4,lr}
080FA4F6: 041c         add r4,r0,#0x0
080FA4F8: a07b         ldrb r0,[r4,#0xe]
080FA4FA: 0028         cmp r0,#0x0
080FA4FC: 0bd1         bne 0x080fa516
080FA4FE: 8c21         mov r1,#0x8c
080FA500: 0902         lsl r1,r1,#0x8
080FA502: 201c         add r0,r4,#0x0
080FA504: 22f7fcfc     bl 0x0801cf00
080FA508: 211c         add r1,r4,#0x0
080FA50A: b831         add r1,#0xb8
080FA50C: a06d         ldr r0,[r4,#0x58]
080FA50E: 0860         str r0,[r1,#0x0]
080FA510: a07b         ldrb r0,[r4,#0xe]
080FA512: 0130         add r0,#0x1
080FA514: a073         strb r0,[r4,#0xe]
080FA516: 201c         add r0,r4,#0x0
080FA518: 22f76afd     bl 0x0801cff0
080FA51C: 201c         add r0,r4,#0x0
080FA51E: be30         add r0,#0xbe
080FA520: 0078         ldrb r0,[r0,#0x0]
080FA522: 0028         cmp r0,#0x0
080FA524: 03d0         beq 0x080fa52e
080FA526: 0021         mov r1,#0x0
080FA528: 0120         mov r0,#0x1
080FA52A: 6073         strb r0,[r4,#0xd]
080FA52C: a173         strb r1,[r4,#0xe]
080FA52E: 10bc         pop {r4}
080FA530: 01bc         pop {r0}
080FA532: 0047         bx r0
