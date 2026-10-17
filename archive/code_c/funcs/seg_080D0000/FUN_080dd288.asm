; undefined FUN_080dd288(void)
; entry 0x80dd288  size 48 bytes

080DD288: 10b5         push {r4,lr}
080DD28A: 041c         add r4,r0,#0x0
080DD28C: 3ff7b0fe     bl 0x0801cff0
080DD290: 201c         add r0,r4,#0x0
080DD292: 7330         add r0,#0x73
080DD294: 0078         ldrb r0,[r0,#0x0]
080DD296: 0328         cmp r0,#0x3
080DD298: 0bd1         bne 0x080dd2b2
080DD29A: 0749         ldr r1,[0x080dd2b8]
080DD29C: 607a         ldrb r0,[r4,#0x9]
080DD29E: 8000         lsl r0,r0,#0x2
080DD2A0: 4018         add r0,r0,r1
080DD2A2: 0221         mov r1,#0x2
080DD2A4: e160         str r1,[r4,#0xc]
080DD2A6: 0068         ldr r0,[r0,#0x0]
080DD2A8: 8068         ldr r0,[r0,#0x8]
080DD2AA: 6061         str r0,[r4,#0x14]
080DD2AC: 201c         add r0,r4,#0x0
080DD2AE: fff79ffd     bl 0x080dcdf0
080DD2B2: 10bc         pop {r4}
080DD2B4: 01bc         pop {r0}
080DD2B6: 0047         bx r0
