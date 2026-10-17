; undefined FUN_080d319c(void)
; entry 0x80d319c  size 48 bytes

080D319C: 70b5         push {r4,r5,r6,lr}
080D319E: 0e1c         add r6,r1,#0x0
080D31A0: 1206         lsl r2,r2,#0x18
080D31A2: 002a         cmp r2,#0x0
080D31A4: 02d0         beq 0x080d31ac
080D31A6: 8021         mov r1,#0x80
080D31A8: 8901         lsl r1,r1,#0x6
080D31AA: 00e0         b 0x080d31ae
080D31AC: 0749         ldr r1,[0x080d31cc]
080D31AE: 4418         add r4,r0,r1
080D31B0: 201c         add r0,r4,#0x0
080D31B2: 311c         add r1,r6,#0x0
080D31B4: 35f7bef9     bl 0x08008534
080D31B8: 051c         add r5,r0,#0x0
080D31BA: a91b         sub r1,r5,r6
080D31BC: 0029         cmp r1,#0x0
080D31BE: 00da         bge 0x080d31c2
080D31C0: 4942         rsb r1,r1
080D31C2: f020         mov r0,#0xf0
080D31C4: 0001         lsl r0,r0,#0x4
080D31C6: 70bc         pop {r4,r5,r6}
080D31C8: 01bc         pop {r0}
080D31CA: 0047         bx r0
