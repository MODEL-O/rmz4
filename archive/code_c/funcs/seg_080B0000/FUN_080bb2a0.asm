; undefined FUN_080bb2a0(void)
; entry 0x80bb2a0  size 76 bytes

080BB2A0: 10b5         push {r4,lr}
080BB2A2: 041c         add r4,r0,#0x0
080BB2A4: e07b         ldrb r0,[r4,#0xf]
080BB2A6: 0028         cmp r0,#0x0
080BB2A8: 0dd1         bne 0x080bb2c6
080BB2AA: 201c         add r0,r4,#0x0
080BB2AC: 7430         add r0,#0x74
080BB2AE: 0f49         ldr r1,[0x080bb2ec]
080BB2B0: 4af768fa     bl 0x08005784
080BB2B4: 0e49         ldr r1,[0x080bb2f0]
080BB2B6: 201c         add r0,r4,#0x0
080BB2B8: 61f722fe     bl 0x0801cf00
080BB2BC: 1020         mov r0,#0x10
080BB2BE: a074         strb r0,[r4,#0x12]
080BB2C0: e07b         ldrb r0,[r4,#0xf]
080BB2C2: 0130         add r0,#0x1
080BB2C4: e073         strb r0,[r4,#0xf]
080BB2C6: 201c         add r0,r4,#0x0
080BB2C8: 61f792fe     bl 0x0801cff0
080BB2CC: a07c         ldrb r0,[r4,#0x12]
080BB2CE: 0028         cmp r0,#0x0
080BB2D0: 04d0         beq 0x080bb2dc
080BB2D2: 0138         sub r0,#0x1
080BB2D4: a074         strb r0,[r4,#0x12]
080BB2D6: 0006         lsl r0,r0,#0x18
080BB2D8: 0028         cmp r0,#0x0
080BB2DA: 04d1         bne 0x080bb2e6
080BB2DC: 0021         mov r1,#0x0
080BB2DE: 0220         mov r0,#0x2
080BB2E0: 6073         strb r0,[r4,#0xd]
080BB2E2: a173         strb r1,[r4,#0xe]
080BB2E4: e173         strb r1,[r4,#0xf]
080BB2E6: 10bc         pop {r4}
080BB2E8: 01bc         pop {r0}
080BB2EA: 0047         bx r0
