@ FUN_08053d40  entry 0x08053d40  size 62
.thumb
.org 0x53d40
FUN_08053d40:
	push {r4, lr}	@ 00053d40 10b5
.org 0x53d42
	adds r4, r0, #0	@ 00053d42 041c
.org 0x53d44
	ldrb r0, [r4, #15]	@ 00053d44 e07b
.org 0x53d46
	cmp r0, #0	@ 00053d46 0028
.org 0x53d48
	bne.n 0x53d5a	@ 00053d48 07d1
.org 0x53d4a
	movs r1, #176	@ 00053d4a b021
.org 0x53d4c
	lsls r1, r1, #6	@ 00053d4c 8901
.org 0x53d4e
	adds r0, r4, #0	@ 00053d4e 201c
.org 0x53d50
	bl 0x1cf00	@ 00053d50 c9f7d6f8
.org 0x53d54
	ldrb r0, [r4, #15]	@ 00053d54 e07b
.org 0x53d56
	adds r0, #1	@ 00053d56 0130
.org 0x53d58
	strb r0, [r4, #15]	@ 00053d58 e073
.org 0x53d5a
	adds r0, r4, #0	@ 00053d5a 201c
.org 0x53d5c
	bl 0x1cff0	@ 00053d5c c9f748f9
.org 0x53d60
	adds r0, r4, #0	@ 00053d60 201c
.org 0x53d62
	bl 0x54fb0	@ 00053d62 01f025f9
.org 0x53d66
	ldr r0, [pc, #24]	@ 00053d66 0648
.org 0x53d68
	ldrh r1, [r0, #8]	@ 00053d68 0189
.org 0x53d6a
	movs r0, #8	@ 00053d6a 0820
.org 0x53d6c
	ands r0, r1	@ 00053d6c 0840
.org 0x53d6e
	cmp r0, #0	@ 00053d6e 0028
.org 0x53d70
	bne.n 0x53d78	@ 00053d70 02d1
.org 0x53d72
	adds r0, r4, #0	@ 00053d72 201c
.org 0x53d74
	bl 0x54ff0	@ 00053d74 01f03cf9
.org 0x53d78
	pop {r4}	@ 00053d78 10bc
.org 0x53d7a
	pop {r0}	@ 00053d7a 01bc
.org 0x53d7c
	bx r0	@ 00053d7c 0047
