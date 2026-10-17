@ FUN_080c7080  entry 0x080c7080  size 80
.thumb
.org 0xc7080
FUN_080c7080:
	push {r4, lr}	@ 000c7080 10b5
.org 0xc7082
	adds r4, r0, #0	@ 000c7082 041c
.org 0xc7084
	ldrb r0, [r4, #13]	@ 000c7084 607b
.org 0xc7086
	cmp r0, #0	@ 000c7086 0028
.org 0xc7088
	bne.n 0xc70ac	@ 000c7088 10d1
.org 0xc708a
	ldrb r0, [r4, #18]	@ 000c708a a07c
.org 0xc708c
	subs r0, #1	@ 000c708c 0138
.org 0xc708e
	strb r0, [r4, #18]	@ 000c708e a074
.org 0xc7090
	lsls r0, r0, #24	@ 000c7090 0006
.org 0xc7092
	lsrs r0, r0, #24	@ 000c7092 000e
.org 0xc7094
	cmp r0, #255	@ 000c7094 ff28
.org 0xc7096
	bne.n 0xc70c8	@ 000c7096 17d1
.org 0xc7098
	ldr r1, [pc, #12]	@ 000c7098 0349
.org 0xc709a
	adds r0, r4, #0	@ 000c709a 201c
.org 0xc709c
	bl 0x1cf00	@ 000c709c 55f730ff
.org 0xc70a0
	ldrb r0, [r4, #13]	@ 000c70a0 607b
.org 0xc70a2
	adds r0, #1	@ 000c70a2 0130
.org 0xc70a4
	strb r0, [r4, #13]	@ 000c70a4 6073
.org 0xc70a6
	b.n 0xc70c8	@ 000c70a6 0fe0
.org 0xc70a8
	.byte 0x01,0x62,0x00,0x00	@ 000c70a8 data
.org 0xc70ac
	adds r0, r4, #0	@ 000c70ac 201c
.org 0xc70ae
	adds r0, #115	@ 000c70ae 7330
.org 0xc70b0
	ldrb r0, [r0, #0]	@ 000c70b0 0078
.org 0xc70b2
	cmp r0, #3	@ 000c70b2 0328
.org 0xc70b4
	bne.n 0xc70c8	@ 000c70b4 08d1
.org 0xc70b6
	ldr r1, [pc, #28]	@ 000c70b6 0749
.org 0xc70b8
	ldrb r0, [r4, #9]	@ 000c70b8 607a
.org 0xc70ba
	lsls r0, r0, #2	@ 000c70ba 8000
.org 0xc70bc
	adds r0, r0, r1	@ 000c70bc 4018
.org 0xc70be
	movs r1, #2	@ 000c70be 0221
.org 0xc70c0
	str r1, [r4, #12]	@ 000c70c0 e160
.org 0xc70c2
	ldr r0, [r0, #0]	@ 000c70c2 0068
.org 0xc70c4
	ldr r0, [r0, #8]	@ 000c70c4 8068
.org 0xc70c6
	str r0, [r4, #20]	@ 000c70c6 6061
.org 0xc70c8
	adds r0, r4, #0	@ 000c70c8 201c
.org 0xc70ca
	bl 0x1cff0	@ 000c70ca 55f791ff
.org 0xc70ce
	pop {r4}	@ 000c70ce 10bc
