@ FUN_08067e78  entry 0x08067e78  size 64
.thumb
.org 0x67e78
FUN_08067e78:
	push {r4, lr}	@ 00067e78 10b5
.org 0x67e7a
	adds r4, r0, #0	@ 00067e7a 041c
.org 0x67e7c
	ldrb r0, [r4, #14]	@ 00067e7c a07b
.org 0x67e7e
	cmp r0, #0	@ 00067e7e 0028
.org 0x67e80
	bne.n 0x67e96	@ 00067e80 09d1
.org 0x67e82
	ldr r1, [pc, #52]	@ 00067e82 0d49
.org 0x67e84
	adds r0, r4, #0	@ 00067e84 201c
.org 0x67e86
	bl 0x1cf00	@ 00067e86 b5f73bf8
.org 0x67e8a
	movs r0, #101	@ 00067e8a 6520
.org 0x67e8c
	bl 0x2b10	@ 00067e8c 9af740fe
.org 0x67e90
	ldrb r0, [r4, #14]	@ 00067e90 a07b
.org 0x67e92
	adds r0, #1	@ 00067e92 0130
.org 0x67e94
	strb r0, [r4, #14]	@ 00067e94 a073
.org 0x67e96
	adds r0, r4, #0	@ 00067e96 201c
.org 0x67e98
	bl 0x1cff0	@ 00067e98 b5f7aaf8
.org 0x67e9c
	adds r0, r4, #0	@ 00067e9c 201c
.org 0x67e9e
	adds r0, #113	@ 00067e9e 7130
.org 0x67ea0
	ldrb r0, [r0, #0]	@ 00067ea0 0078
.org 0x67ea2
	lsls r0, r0, #24	@ 00067ea2 0006
.org 0x67ea4
	asrs r0, r0, #24	@ 00067ea4 0016
.org 0x67ea6
	cmp r0, #3	@ 00067ea6 0328
.org 0x67ea8
	ble.n 0x67eb2	@ 00067ea8 03dd
.org 0x67eaa
	movs r1, #0	@ 00067eaa 0021
.org 0x67eac
	movs r0, #24	@ 00067eac 1820
.org 0x67eae
	strb r0, [r4, #13]	@ 00067eae 6073
.org 0x67eb0
	strb r1, [r4, #14]	@ 00067eb0 a173
.org 0x67eb2
	pop {r4}	@ 00067eb2 10bc
.org 0x67eb4
	pop {r0}	@ 00067eb4 01bc
.org 0x67eb6
	bx r0	@ 00067eb6 0047
