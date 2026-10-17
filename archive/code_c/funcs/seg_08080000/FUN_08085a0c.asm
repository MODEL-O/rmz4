; undefined FUN_08085a0c(void)
; entry 0x8085a0c  size 52 bytes

08085A0C: 10b5         push {r4,lr}
08085A0E: 041c         add r4,r0,#0x0
08085A10: a07b         ldrb r0,[r4,#0xe]
08085A12: 0728         cmp r0,#0x7
08085A14: 64d8         bhi 0x08085ae0
08085A16: 8000         lsl r0,r0,#0x2
08085A18: 0149         ldr r1,[0x08085a20]
08085A1A: 4018         add r0,r0,r1
08085A1C: 0068         ldr r0,[r0,#0x0]
08085A1E: 8746         mov pc,r0
08085AE0: 606d         ldr r0,[r4,#0x54]
08085AE2: a16d         ldr r1,[r4,#0x58]
08085AE4: 8022         mov r2,#0x80
08085AE6: d200         lsl r2,r2,#0x3
08085AE8: 8918         add r1,r1,r2
08085AEA: 82f7dbff     bl 0x08008aa4
08085AEE: 011c         add r1,r0,#0x0
08085AF0: 8022         mov r2,#0x80
08085AF2: 1201         lsl r2,r2,#0x4
08085AF4: 201c         add r0,r4,#0x0
08085AF6: fff78ffc     bl 0x08085418
08085AFA: 10bc         pop {r4}
08085AFC: 01bc         pop {r0}
08085AFE: 0047         bx r0
