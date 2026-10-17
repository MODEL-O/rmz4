; undefined FUN_080a4758(void)
; entry 0x80a4758  size 70 bytes

080A4758: 10b5         push {r4,lr}
080A475A: 041c         add r4,r0,#0x0
080A475C: 211c         add r1,r4,#0x0
080A475E: 5431         add r1,#0x54
080A4760: 0220         mov r0,#0x2
080A4762: 2cf091fa     bl 0x080d0c88
080A4766: a17a         ldrb r1,[r4,#0xa]
080A4768: fe20         mov r0,#0xfe
080A476A: 0840         and r0,r1
080A476C: 0021         mov r1,#0x0
080A476E: a072         strb r0,[r4,#0xa]
080A4770: 201c         add r0,r4,#0x0
080A4772: 8c30         add r0,#0x8c
080A4774: 0160         str r1,[r0,#0x0]
080A4776: 0430         add r0,#0x4
080A4778: 0160         str r1,[r0,#0x0]
080A477A: 0430         add r0,#0x4
080A477C: 0170         strb r1,[r0,#0x0]
080A477E: a17a         ldrb r1,[r4,#0xa]
080A4780: fb20         mov r0,#0xfb
080A4782: 0840         and r0,r1
080A4784: a072         strb r0,[r4,#0xa]
080A4786: 0649         ldr r1,[0x080a47a0]
080A4788: 607a         ldrb r0,[r4,#0x9]
080A478A: 8000         lsl r0,r0,#0x2
080A478C: 4018         add r0,r0,r1
080A478E: 0421         mov r1,#0x4
080A4790: e160         str r1,[r4,#0xc]
080A4792: 0068         ldr r0,[r0,#0x0]
080A4794: 0069         ldr r0,[r0,#0x10]
080A4796: 6061         str r0,[r4,#0x14]
080A4798: 10bc         pop {r4}
080A479A: 01bc         pop {r0}
080A479C: 0047         bx r0
