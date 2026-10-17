; undefined FUN_080bb95c(void)
; entry 0x80bb95c  size 76 bytes

080BB95C: 10b5         push {r4,lr}
080BB95E: 041c         add r4,r0,#0x0
080BB960: e07b         ldrb r0,[r4,#0xf]
080BB962: 0028         cmp r0,#0x0
080BB964: 0dd1         bne 0x080bb982
080BB966: 201c         add r0,r4,#0x0
080BB968: 7430         add r0,#0x74
080BB96A: 0f49         ldr r1,[0x080bb9a8]
080BB96C: 49f70aff     bl 0x08005784
080BB970: 0e49         ldr r1,[0x080bb9ac]
080BB972: 201c         add r0,r4,#0x0
080BB974: 61f7c4fa     bl 0x0801cf00
080BB978: 1020         mov r0,#0x10
080BB97A: a074         strb r0,[r4,#0x12]
080BB97C: e07b         ldrb r0,[r4,#0xf]
080BB97E: 0130         add r0,#0x1
080BB980: e073         strb r0,[r4,#0xf]
080BB982: 201c         add r0,r4,#0x0
080BB984: 61f734fb     bl 0x0801cff0
080BB988: a07c         ldrb r0,[r4,#0x12]
080BB98A: 0028         cmp r0,#0x0
080BB98C: 04d0         beq 0x080bb998
080BB98E: 0138         sub r0,#0x1
080BB990: a074         strb r0,[r4,#0x12]
080BB992: 0006         lsl r0,r0,#0x18
080BB994: 0028         cmp r0,#0x0
080BB996: 04d1         bne 0x080bb9a2
080BB998: 0021         mov r1,#0x0
080BB99A: 0220         mov r0,#0x2
080BB99C: 6073         strb r0,[r4,#0xd]
080BB99E: a173         strb r1,[r4,#0xe]
080BB9A0: e173         strb r1,[r4,#0xf]
080BB9A2: 10bc         pop {r4}
080BB9A4: 01bc         pop {r0}
080BB9A6: 0047         bx r0
