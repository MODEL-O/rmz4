; undefined FUN_080b8924(void)
; entry 0x80b8924  size 76 bytes

080B8924: 10b5         push {r4,lr}
080B8926: 041c         add r4,r0,#0x0
080B8928: e07b         ldrb r0,[r4,#0xf]
080B892A: 0028         cmp r0,#0x0
080B892C: 0dd1         bne 0x080b894a
080B892E: 201c         add r0,r4,#0x0
080B8930: 7430         add r0,#0x74
080B8932: 0f49         ldr r1,[0x080b8970]
080B8934: 4cf726ff     bl 0x08005784
080B8938: 0e49         ldr r1,[0x080b8974]
080B893A: 201c         add r0,r4,#0x0
080B893C: 64f7e0fa     bl 0x0801cf00
080B8940: 1020         mov r0,#0x10
080B8942: a074         strb r0,[r4,#0x12]
080B8944: e07b         ldrb r0,[r4,#0xf]
080B8946: 0130         add r0,#0x1
080B8948: e073         strb r0,[r4,#0xf]
080B894A: 201c         add r0,r4,#0x0
080B894C: 64f750fb     bl 0x0801cff0
080B8950: a07c         ldrb r0,[r4,#0x12]
080B8952: 0028         cmp r0,#0x0
080B8954: 04d0         beq 0x080b8960
080B8956: 0138         sub r0,#0x1
080B8958: a074         strb r0,[r4,#0x12]
080B895A: 0006         lsl r0,r0,#0x18
080B895C: 0028         cmp r0,#0x0
080B895E: 04d1         bne 0x080b896a
080B8960: 0021         mov r1,#0x0
080B8962: 0220         mov r0,#0x2
080B8964: 6073         strb r0,[r4,#0xd]
080B8966: a173         strb r1,[r4,#0xe]
080B8968: e173         strb r1,[r4,#0xf]
080B896A: 10bc         pop {r4}
080B896C: 01bc         pop {r0}
080B896E: 0047         bx r0
