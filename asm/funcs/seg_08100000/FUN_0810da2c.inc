@ FUN_0810da2c  entry 0x0810da2c  size 74
.thumb
.org 0x10da2c
FUN_0810da2c:
	push {r4, lr}	@ 0010da2c 10b5
.org 0x10da2e
	adds r4, r0, #0	@ 0010da2e 041c
.org 0x10da30
	ldr r0, [pc, #16]	@ 0010da30 0448
.org 0x10da32
	ldr r3, [r0, #0]	@ 0010da32 0368
.org 0x10da34
	cmp r2, #31	@ 0010da34 1f2a
.org 0x10da36
	bhi.n 0x10da76	@ 0010da36 1ed8
.org 0x10da38
	lsls r0, r2, #5	@ 0010da38 5001
.org 0x10da3a
	adds r0, r1, r0	@ 0010da3a 0818
.org 0x10da3c
	lsls r0, r0, #1	@ 0010da3c 4000
.org 0x10da3e
	adds r3, r3, r0	@ 0010da3e 1b18
.org 0x10da40
	b.n 0x10da70	@ 0010da40 16e0
.org 0x10da42
	.byte 0x00	@ 0010da42 data
.org 0x10da43
	.byte 0x00	@ 0010da43 data
.org 0x10da44
	.byte 0xc0,0xed,0x02,0x02	@ 0010da44 data
.org 0x10da48
	cmp r1, #31	@ 0010da48 1f29
.org 0x10da4a
	bhi.n 0x10da76	@ 0010da4a 14d8
.org 0x10da4c
	cmp r0, #96	@ 0010da4c 6028
.org 0x10da4e
	bhi.n 0x10da56	@ 0010da4e 02d8
.org 0x10da50
	movs r2, #232	@ 0010da50 e822
.org 0x10da52
	lsls r2, r2, #2	@ 0010da52 9200
.org 0x10da54
	b.n 0x10da64	@ 0010da54 06e0
.org 0x10da56
	cmp r0, #159	@ 0010da56 9f28
.org 0x10da58
	bhi.n 0x10da60	@ 0010da58 02d8
.org 0x10da5a
	movs r2, #224	@ 0010da5a e022
.org 0x10da5c
	lsls r2, r2, #2	@ 0010da5c 9200
.org 0x10da5e
	b.n 0x10da64	@ 0010da5e 01e0
.org 0x10da60
	movs r2, #184	@ 0010da60 b822
.org 0x10da62
	lsls r2, r2, #2	@ 0010da62 9200
.org 0x10da64
	adds r0, r2, #0	@ 0010da64 101c
.org 0x10da66
	ldrb r2, [r4, #0]	@ 0010da66 2278
.org 0x10da68
	adds r0, r0, r2	@ 0010da68 8018
.org 0x10da6a
	strh r0, [r3, #0]	@ 0010da6a 1880
.org 0x10da6c
	adds r4, #1	@ 0010da6c 0134
.org 0x10da6e
	adds r3, #2	@ 0010da6e 0233
.org 0x10da70
	ldrb r0, [r4, #0]	@ 0010da70 2078
.org 0x10da72
	cmp r0, #0	@ 0010da72 0028
.org 0x10da74
	bne.n 0x10da48	@ 0010da74 e8d1
