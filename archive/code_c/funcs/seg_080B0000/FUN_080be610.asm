; undefined FUN_080be610(void)
; entry 0x80be610  size 48 bytes

080BE610: 10b5         push {r4,lr}
080BE612: 041c         add r4,r0,#0x0
080BE614: 0a49         ldr r1,[0x080be640]
080BE616: 607b         ldrb r0,[r4,#0xd]
080BE618: 8000         lsl r0,r0,#0x2
080BE61A: 4018         add r0,r0,r1
080BE61C: 0168         ldr r1,[r0,#0x0]
080BE61E: 201c         add r0,r4,#0x0
080BE620: 6af0aefc     bl 0x08128f80
080BE624: 0006         lsl r0,r0,#0x18
080BE626: 0028         cmp r0,#0x0
080BE628: 07d1         bne 0x080be63a
080BE62A: 0648         ldr r0,[0x080be644]
080BE62C: 617b         ldrb r1,[r4,#0xd]
080BE62E: 8900         lsl r1,r1,#0x2
080BE630: 0918         add r1,r1,r0
080BE632: 0968         ldr r1,[r1,#0x0]
080BE634: 201c         add r0,r4,#0x0
080BE636: 6af0a3fc     bl 0x08128f80
080BE63A: 10bc         pop {r4}
080BE63C: 01bc         pop {r0}
080BE63E: 0047         bx r0
