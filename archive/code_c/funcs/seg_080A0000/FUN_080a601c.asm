; undefined FUN_080a601c(void)
; entry 0x80a601c  size 64 bytes

080A601C: 10b5         push {r4,lr}
080A601E: 041c         add r4,r0,#0x0
080A6020: e07b         ldrb r0,[r4,#0xf]
080A6022: 0028         cmp r0,#0x0
080A6024: 0ad1         bne 0x080a603c
080A6026: 0d49         ldr r1,[0x080a605c]
080A6028: 201c         add r0,r4,#0x0
080A602A: 76f769ff     bl 0x0801cf00
080A602E: 201c         add r0,r4,#0x0
080A6030: 0521         mov r1,#0x5
080A6032: 77f7cdf9     bl 0x0801d3d0
080A6036: e07b         ldrb r0,[r4,#0xf]
080A6038: 0130         add r0,#0x1
080A603A: e073         strb r0,[r4,#0xf]
080A603C: 201c         add r0,r4,#0x0
080A603E: 76f7d7ff     bl 0x0801cff0
080A6042: 201c         add r0,r4,#0x0
080A6044: 7330         add r0,#0x73
080A6046: 0078         ldrb r0,[r0,#0x0]
080A6048: 0328         cmp r0,#0x3
080A604A: 04d1         bne 0x080a6056
080A604C: 0021         mov r1,#0x0
080A604E: 0220         mov r0,#0x2
080A6050: 6073         strb r0,[r4,#0xd]
080A6052: a173         strb r1,[r4,#0xe]
080A6054: e173         strb r1,[r4,#0xf]
080A6056: 10bc         pop {r4}
080A6058: 01bc         pop {r0}
080A605A: 0047         bx r0
