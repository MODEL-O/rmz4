; undefined FUN_080edb2c(void)
; entry 0x80edb2c  size 58 bytes

080EDB2C: 10b5         push {r4,lr}
080EDB2E: 041c         add r4,r0,#0x0
080EDB30: a17a         ldrb r1,[r4,#0xa]
080EDB32: 0120         mov r0,#0x1
080EDB34: 0843         orr r0,r1
080EDB36: 0221         mov r1,#0x2
080EDB38: 0843         orr r0,r1
080EDB3A: a072         strb r0,[r4,#0xa]
080EDB3C: 201c         add r0,r4,#0x0
080EDB3E: 2ff7adf8     bl 0x0801cc9c
080EDB42: 201c         add r0,r4,#0x0
080EDB44: 2ff7d2f9     bl 0x0801ceec
080EDB48: 0749         ldr r1,[0x080edb68]
080EDB4A: 607a         ldrb r0,[r4,#0x9]
080EDB4C: 8000         lsl r0,r0,#0x2
080EDB4E: 4018         add r0,r0,r1
080EDB50: 0121         mov r1,#0x1
080EDB52: e160         str r1,[r4,#0xc]
080EDB54: 0068         ldr r0,[r0,#0x0]
080EDB56: 4068         ldr r0,[r0,#0x4]
080EDB58: 6061         str r0,[r4,#0x14]
080EDB5A: 201c         add r0,r4,#0x0
080EDB5C: fff734fe     bl 0x080ed7c8
080EDB60: 10bc         pop {r4}
080EDB62: 01bc         pop {r0}
080EDB64: 0047         bx r0
