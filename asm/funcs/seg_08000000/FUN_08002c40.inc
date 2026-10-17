@ FUN_08002c40  entry 0x08002c40  size 82
.thumb
.org 0x2c40
FUN_08002c40:
	push {r4, lr}	@ 00002c40 10b5
.org 0x2c42
	adds r4, r0, #0	@ 00002c42 041c
.org 0x2c44
	adds r3, r1, #0	@ 00002c44 0b1c
.org 0x2c46
	cmp r3, #0	@ 00002c46 002b
.org 0x2c48
	beq.n 0x2c80	@ 00002c48 1ad0
.org 0x2c4a
	ldr r2, [r3, #0]	@ 00002c4a 1a68
.org 0x2c4c
	ldr r0, [r2, #0]	@ 00002c4c 1068
.org 0x2c4e
	str r0, [r4, #0]	@ 00002c4e 2060
.org 0x2c50
	ldr r0, [r2, #4]	@ 00002c50 5068
.org 0x2c52
	str r0, [r4, #4]	@ 00002c52 6060
.org 0x2c54
	ldr r1, [r2, #0]	@ 00002c54 1168
.org 0x2c56
	asrs r1, r1, #8	@ 00002c56 0912
.org 0x2c58
	ldr r3, [r3, #4]	@ 00002c58 5b68
.org 0x2c5a
	ldr r0, [r3, #0]	@ 00002c5a 1868
.org 0x2c5c
	asrs r0, r0, #8	@ 00002c5c 0012
.org 0x2c5e
	adds r1, r1, r0	@ 00002c5e 0918
.org 0x2c60
	subs r1, #120	@ 00002c60 7839
.org 0x2c62
	lsls r1, r1, #8	@ 00002c62 0902
.org 0x2c64
	str r1, [r4, #8]	@ 00002c64 a160
.org 0x2c66
	ldr r0, [r2, #4]	@ 00002c66 5068
.org 0x2c68
	asrs r0, r0, #8	@ 00002c68 0012
.org 0x2c6a
	ldr r1, [r3, #4]	@ 00002c6a 5968
.org 0x2c6c
	asrs r1, r1, #8	@ 00002c6c 0912
.org 0x2c6e
	adds r0, r0, r1	@ 00002c6e 4018
.org 0x2c70
	subs r0, #80	@ 00002c70 5038
.org 0x2c72
	lsls r0, r0, #8	@ 00002c72 0002
.org 0x2c74
	str r0, [r4, #12]	@ 00002c74 e060
.org 0x2c76
	ldr r0, [r3, #0]	@ 00002c76 1868
.org 0x2c78
	str r0, [r4, #16]	@ 00002c78 2061
.org 0x2c7a
	ldr r0, [r3, #4]	@ 00002c7a 5868
.org 0x2c7c
	str r0, [r4, #20]	@ 00002c7c 6061
.org 0x2c7e
	b.n 0x2c8c	@ 00002c7e 05e0
.org 0x2c80
	str r3, [r4, #4]	@ 00002c80 6360
.org 0x2c82
	str r3, [r4, #0]	@ 00002c82 2360
.org 0x2c84
	str r3, [r4, #12]	@ 00002c84 e360
.org 0x2c86
	str r3, [r4, #8]	@ 00002c86 a360
.org 0x2c88
	str r3, [r4, #20]	@ 00002c88 6361
.org 0x2c8a
	str r3, [r4, #16]	@ 00002c8a 2361
.org 0x2c8c
	pop {r4}	@ 00002c8c 10bc
.org 0x2c8e
	pop {r0}	@ 00002c8e 01bc
.org 0x2c90
	bx r0	@ 00002c90 0047
