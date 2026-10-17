; undefined FUN_080d9530(void)
; entry 0x80d9530  size 72 bytes

080D9530: 10b5         push {r4,lr}
080D9532: 041c         add r4,r0,#0x0
080D9534: 1049         ldr r1,[0x080d9578]
080D9536: 607a         ldrb r0,[r4,#0x9]
080D9538: 8000         lsl r0,r0,#0x2
080D953A: 4018         add r0,r0,r1
080D953C: 0121         mov r1,#0x1
080D953E: e160         str r1,[r4,#0xc]
080D9540: 0068         ldr r0,[r0,#0x0]
080D9542: 4068         ldr r0,[r0,#0x4]
080D9544: 6061         str r0,[r4,#0x14]
080D9546: 201c         add r0,r4,#0x0
080D9548: 43f7a8fb     bl 0x0801cc9c
080D954C: a17a         ldrb r1,[r4,#0xa]
080D954E: 0120         mov r0,#0x1
080D9550: 0843         orr r0,r1
080D9552: 0221         mov r1,#0x2
080D9554: 0843         orr r0,r1
080D9556: a072         strb r0,[r4,#0xa]
080D9558: 201c         add r0,r4,#0x0
080D955A: 43f7c7fc     bl 0x0801ceec
080D955E: 0749         ldr r1,[0x080d957c]
080D9560: 201c         add r0,r4,#0x0
080D9562: 43f7cdfc     bl 0x0801cf00
080D9566: 201c         add r0,r4,#0x0
080D9568: 43f742fd     bl 0x0801cff0
080D956C: 201c         add r0,r4,#0x0
080D956E: fff79fff     bl 0x080d94b0
080D9572: 10bc         pop {r4}
080D9574: 01bc         pop {r0}
080D9576: 0047         bx r0
