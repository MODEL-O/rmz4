@ FUN_080abe80  entry 0x080abe80  size 36
.thumb
.org 0xabe80
FUN_080abe80:
	.byte 0x10,0xb5	@ 000abe80 (raw)
.org 0xabe82
	.byte 0x83,0x68	@ 000abe82 (raw)
.org 0xabe84
	.byte 0x1c,0x1c	@ 000abe84 (raw)
.org 0xabe86
	adds r4, #190	@ 000abe86 be34
.org 0xabe88
	ldrb r2, [r4, #0]	@ 000abe88 2278
.org 0xabe8a
	adds r2, #1	@ 000abe8a 0132
.org 0xabe8c
	strb r2, [r4, #0]	@ 000abe8c 2270
.org 0xabe8e
	ldr r4, [pc, #20]	@ 000abe8e 054c
.org 0xabe90
	adds r3, #188	@ 000abe90 bc33
.org 0xabe92
	ldrb r2, [r3, #0]	@ 000abe92 1a78
.org 0xabe94
	lsls r2, r2, #2	@ 000abe94 9200
.org 0xabe96
	adds r2, r2, r4	@ 000abe96 1219
.org 0xabe98
	ldr r2, [r2, #0]	@ 000abe98 1268
.org 0xabe9a
	bl 0x128f84	@ 000abe9a 7df073f8
.org 0xabe9e
	pop {r4}	@ 000abe9e 10bc
.org 0xabea0
	pop {r0}	@ 000abea0 01bc
.org 0xabea2
	bx r0	@ 000abea2 0047
