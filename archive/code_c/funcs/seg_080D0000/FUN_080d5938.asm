; undefined FUN_080d5938(void)
; entry 0x80d5938  size 40 bytes

080D5938: 00b5         push {lr}
080D593A: 021c         add r2,r0,#0x0
080D593C: 0023         mov r3,#0x0
080D593E: 0021         mov r1,#0x0
080D5940: 1078         ldrb r0,[r2,#0x0]
080D5942: 0028         cmp r0,#0x0
080D5944: 09d0         beq 0x080d595a
080D5946: 481c         add r0,r1,#0x1
080D5948: 0006         lsl r0,r0,#0x18
080D594A: 010e         lsr r1,r0,#0x18
080D594C: 0f29         cmp r1,#0xf
080D594E: 04d8         bhi 0x080d595a
080D5950: 5018         add r0,r2,r1
080D5952: 0078         ldrb r0,[r0,#0x0]
080D5954: 0028         cmp r0,#0x0
080D5956: f6d1         bne 0x080d5946
080D5958: 0b1c         add r3,r1,#0x0
080D595A: 181c         add r0,r3,#0x0
080D595C: 02bc         pop {r1}
080D595E: 0847         bx r1
