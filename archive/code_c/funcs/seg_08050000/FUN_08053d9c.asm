; undefined FUN_08053d9c(void)
; entry 0x8053d9c  size 70 bytes

08053D9C: 10b5         push {r4,lr}
08053D9E: 041c         add r4,r0,#0x0
08053DA0: e07b         ldrb r0,[r4,#0xf]
08053DA2: 0028         cmp r0,#0x0
08053DA4: 0dd1         bne 0x08053dc2
08053DA6: b021         mov r1,#0xb0
08053DA8: 8901         lsl r1,r1,#0x6
08053DAA: 201c         add r0,r4,#0x0
08053DAC: c9f7a8f8     bl 0x0801cf00
08053DB0: 201c         add r0,r4,#0x0
08053DB2: bc30         add r0,#0xbc
08053DB4: 0068         ldr r0,[r0,#0x0]
08053DB6: 0b49         ldr r1,[0x08053de4]
08053DB8: 4018         add r0,r0,r1
08053DBA: a065         str r0,[r4,#0x58]
08053DBC: e07b         ldrb r0,[r4,#0xf]
08053DBE: 0130         add r0,#0x1
08053DC0: e073         strb r0,[r4,#0xf]
08053DC2: 201c         add r0,r4,#0x0
08053DC4: c9f714f9     bl 0x0801cff0
08053DC8: a069         ldr r0,[r4,#0x18]
08053DCA: 417a         ldrb r1,[r0,#0x9]
08053DCC: 0122         mov r2,#0x1
08053DCE: 101c         add r0,r2,#0x0
08053DD0: 0840         and r0,r1
08053DD2: 0028         cmp r0,#0x0
08053DD4: 02d0         beq 0x08053ddc
08053DD6: 0020         mov r0,#0x0
08053DD8: a273         strb r2,[r4,#0xe]
08053DDA: e073         strb r0,[r4,#0xf]
08053DDC: 10bc         pop {r4}
08053DDE: 01bc         pop {r0}
08053DE0: 0047         bx r0
