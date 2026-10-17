; undefined FUN_080be300(void)
; entry 0x80be300  size 50 bytes

080BE300: 10b5         push {r4,lr}
080BE302: 041c         add r4,r0,#0x0
080BE304: 5ef7cafc     bl 0x0801cc9c
080BE308: a17a         ldrb r1,[r4,#0xa]
080BE30A: 0120         mov r0,#0x1
080BE30C: 0843         orr r0,r1
080BE30E: 0221         mov r1,#0x2
080BE310: 0843         orr r0,r1
080BE312: a072         strb r0,[r4,#0xa]
080BE314: 0749         ldr r1,[0x080be334]
080BE316: 607a         ldrb r0,[r4,#0x9]
080BE318: 8000         lsl r0,r0,#0x2
080BE31A: 4018         add r0,r0,r1
080BE31C: 0121         mov r1,#0x1
080BE31E: e160         str r1,[r4,#0xc]
080BE320: 0068         ldr r0,[r0,#0x0]
080BE322: 4068         ldr r0,[r0,#0x4]
080BE324: 6061         str r0,[r4,#0x14]
080BE326: 201c         add r0,r4,#0x0
080BE328: 00f006f8     bl 0x080be338
080BE32C: 10bc         pop {r4}
080BE32E: 01bc         pop {r0}
080BE330: 0047         bx r0
