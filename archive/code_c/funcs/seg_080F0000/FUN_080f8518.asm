; undefined FUN_080f8518(void)
; entry 0x80f8518  size 40 bytes

080F8518: 10b5         push {r4,lr}
080F851A: 041c         add r4,r0,#0x0
080F851C: 0848         ldr r0,[0x080f8540]
080F851E: 227c         ldrb r2,[r4,#0x10]
080F8520: 9200         lsl r2,r2,#0x2
080F8522: 1218         add r2,r2,r0
080F8524: 201c         add r0,r4,#0x0
080F8526: 5430         add r0,#0x54
080F8528: 211c         add r1,r4,#0x0
080F852A: b931         add r1,#0xb9
080F852C: 1368         ldr r3,[r2,#0x0]
080F852E: 0122         mov r2,#0x1
080F8530: 30f02afd     bl 0x08128f88
080F8534: 201c         add r0,r4,#0x0
080F8536: 24f75bfd     bl 0x0801cff0
080F853A: 10bc         pop {r4}
080F853C: 01bc         pop {r0}
080F853E: 0047         bx r0
