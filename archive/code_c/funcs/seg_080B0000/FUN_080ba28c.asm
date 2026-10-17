; undefined FUN_080ba28c(void)
; entry 0x80ba28c  size 62 bytes

080BA28C: f0b5         push {r4,r5,r6,r7,lr}
080BA28E: 87b0         sub sp,#0x1c
080BA290: 051c         add r5,r0,#0x0
080BA292: 6946         mov r1,sp
080BA294: 0b48         ldr r0,[0x080ba2c4]
080BA296: 1cc8         ldmia r0!,{r2,r3,r4}
080BA298: 1cc1         stmia r1!,{r2,r3,r4}
080BA29A: 03ac         add r4,sp,#0xc
080BA29C: 0a49         ldr r1,[0x080ba2c8]
080BA29E: 201c         add r0,r4,#0x0
080BA2A0: 0722         mov r2,#0x7
080BA2A2: 6ef0d9ff     bl 0x08129258
080BA2A6: af6a         ldr r7,[r5,#0x28]
080BA2A8: a87a         ldrb r0,[r5,#0xa]
080BA2AA: 0609         lsr r6,r0,#0x4
080BA2AC: 0120         mov r0,#0x1
080BA2AE: 0640         and r6,r0
080BA2B0: e87b         ldrb r0,[r5,#0xf]
080BA2B2: 0428         cmp r0,#0x4
080BA2B4: 00d9         bls 0x080ba2b8
080BA2B6: 95e0         b 0x080ba3e4
080BA2B8: 8000         lsl r0,r0,#0x2
080BA2BA: 0449         ldr r1,[0x080ba2cc]
080BA2BC: 4018         add r0,r0,r1
080BA2BE: 0068         ldr r0,[r0,#0x0]
080BA2C0: 8746         mov pc,r0
080BA3E4: 07b0         add sp,#0x1c
080BA3E6: f0bc         pop {r4,r5,r6,r7}
080BA3E8: 01bc         pop {r0}
080BA3EA: 0047         bx r0
