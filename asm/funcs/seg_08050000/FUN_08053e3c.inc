@ FUN_08053e3c  entry 0x08053e3c  size 96
.thumb
.org 0x53e3c
FUN_08053e3c:
	push {r4, lr}	@ 00053e3c 10b5
.org 0x53e3e
	adds r4, r0, #0	@ 00053e3e 041c
.org 0x53e40
	ldrb r0, [r4, #15]	@ 00053e40 e07b
.org 0x53e42
	cmp r0, #0	@ 00053e42 0028
.org 0x53e44
	bne.n 0x53e68	@ 00053e44 10d1
.org 0x53e46
	movs r0, #87	@ 00053e46 5720
.org 0x53e48
	bl 0x2b10	@ 00053e48 aef762fe
.org 0x53e4c
	movs r1, #176	@ 00053e4c b021
.org 0x53e4e
	lsls r1, r1, #6	@ 00053e4e 8901
.org 0x53e50
	adds r0, r4, #0	@ 00053e50 201c
.org 0x53e52
	bl 0x1cf00	@ 00053e52 c9f755f8
.org 0x53e56
	movs r0, #128	@ 00053e56 8020
.org 0x53e58
	lsls r0, r0, #4	@ 00053e58 0001
.org 0x53e5a
	str r0, [r4, #96]	@ 00053e5a 2066
.org 0x53e5c
	movs r0, #64	@ 00053e5c 4020
.org 0x53e5e
	negs r0, r0	@ 00053e5e 4042
.org 0x53e60
	str r0, [r4, #104]	@ 00053e60 a066
.org 0x53e62
	ldrb r0, [r4, #15]	@ 00053e62 e07b
.org 0x53e64
	adds r0, #1	@ 00053e64 0130
.org 0x53e66
	strb r0, [r4, #15]	@ 00053e66 e073
.org 0x53e68
	adds r0, r4, #0	@ 00053e68 201c
.org 0x53e6a
	bl 0x1cff0	@ 00053e6a c9f7c1f8
.org 0x53e6e
	ldr r2, [r4, #88]	@ 00053e6e a26d
.org 0x53e70
	ldr r0, [r4, #96]	@ 00053e70 206e
.org 0x53e72
	adds r2, r2, r0	@ 00053e72 1218
.org 0x53e74
	str r2, [r4, #88]	@ 00053e74 a265
.org 0x53e76
	ldr r1, [r4, #104]	@ 00053e76 a16e
.org 0x53e78
	adds r0, r0, r1	@ 00053e78 4018
.org 0x53e7a
	str r0, [r4, #96]	@ 00053e7a 2066
.org 0x53e7c
	adds r0, r4, #0	@ 00053e7c 201c
.org 0x53e7e
	adds r0, #184	@ 00053e7e b830
.org 0x53e80
	ldr r0, [r0, #0]	@ 00053e80 0068
.org 0x53e82
	cmp r2, r0	@ 00053e82 8242
.org 0x53e84
	blt.n 0x53e96	@ 00053e84 07db
.org 0x53e86
	str r0, [r4, #88]	@ 00053e86 a065
.org 0x53e88
	adds r0, r4, #0	@ 00053e88 201c
.org 0x53e8a
	adds r0, #183	@ 00053e8a b730
.org 0x53e8c
	movs r1, #0	@ 00053e8c 0021
.org 0x53e8e
	strb r1, [r0, #0]	@ 00053e8e 0170
.org 0x53e90
	movs r0, #3	@ 00053e90 0320
.org 0x53e92
	strb r0, [r4, #14]	@ 00053e92 a073
.org 0x53e94
	strb r1, [r4, #15]	@ 00053e94 e173
.org 0x53e96
	pop {r4}	@ 00053e96 10bc
.org 0x53e98
	pop {r0}	@ 00053e98 01bc
.org 0x53e9a
	bx r0	@ 00053e9a 0047
