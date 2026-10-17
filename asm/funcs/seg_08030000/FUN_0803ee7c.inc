@ FUN_0803ee7c  entry 0x0803ee7c  size 186
.thumb
.org 0x3ee7c
FUN_0803ee7c:
	push {r4, r5, lr}	@ 0003ee7c 30b5
.org 0x3ee7e
	adds r4, r0, #0	@ 0003ee7e 041c
.org 0x3ee80
	adds r0, #180	@ 0003ee80 b430
.org 0x3ee82
	ldr r5, [r0, #0]	@ 0003ee82 0568
.org 0x3ee84
	ldrb r0, [r4, #13]	@ 0003ee84 607b
.org 0x3ee86
	cmp r0, #1	@ 0003ee86 0128
.org 0x3ee88
	beq.n 0x3eedc	@ 0003ee88 28d0
.org 0x3ee8a
	cmp r0, #1	@ 0003ee8a 0128
.org 0x3ee8c
	bgt.n 0x3ee94	@ 0003ee8c 02dc
.org 0x3ee8e
	cmp r0, #0	@ 0003ee8e 0028
.org 0x3ee90
	beq.n 0x3ee9e	@ 0003ee90 05d0
.org 0x3ee92
	b.n 0x3ef34	@ 0003ee92 4fe0
.org 0x3ee94
	cmp r0, #2	@ 0003ee94 0228
.org 0x3ee96
	beq.n 0x3eefc	@ 0003ee96 31d0
.org 0x3ee98
	cmp r0, #3	@ 0003ee98 0328
.org 0x3ee9a
	beq.n 0x3ef18	@ 0003ee9a 3dd0
.org 0x3ee9c
	b.n 0x3ef34	@ 0003ee9c 4ae0
.org 0x3ee9e
	ldr r1, [pc, #88]	@ 0003ee9e 1649
.org 0x3eea0
	adds r0, r4, #0	@ 0003eea0 201c
.org 0x3eea2
	bl 0x1cf00	@ 0003eea2 def72df8
.org 0x3eea6
	adds r2, r5, #0	@ 0003eea6 2a1c
.org 0x3eea8
	adds r2, #230	@ 0003eea8 e632
.org 0x3eeaa
	ldrb r0, [r2, #0]	@ 0003eeaa 1078
.org 0x3eeac
	adds r1, r0, #0	@ 0003eeac 011c
.org 0x3eeae
	cmp r1, #0	@ 0003eeae 0029
.org 0x3eeb0
	beq.n 0x3eec8	@ 0003eeb0 0ad0
.org 0x3eeb2
	cmp r1, #255	@ 0003eeb2 ff29
.org 0x3eeb4
	beq.n 0x3eeba	@ 0003eeb4 01d0
.org 0x3eeb6
	subs r0, #1	@ 0003eeb6 0138
.org 0x3eeb8
	strb r0, [r2, #0]	@ 0003eeb8 1070
.org 0x3eeba
	adds r0, r5, #0	@ 0003eeba 281c
.org 0x3eebc
	adds r1, r4, #0	@ 0003eebc 211c
.org 0x3eebe
	bl 0x4cc9c	@ 0003eebe 0df0edfe
.org 0x3eec2
	movs r0, #72	@ 0003eec2 4820
.org 0x3eec4
	bl 0x2b10	@ 0003eec4 c3f724fe
.org 0x3eec8
	movs r0, #170	@ 0003eec8 aa20
.org 0x3eeca
	lsls r0, r0, #1	@ 0003eeca 4000
.org 0x3eecc
	adds r1, r5, r0	@ 0003eecc 2918
.org 0x3eece
	movs r0, #0	@ 0003eece 0020
.org 0x3eed0
	strb r0, [r1, #0]	@ 0003eed0 0870
.org 0x3eed2
	movs r0, #2	@ 0003eed2 0220
.org 0x3eed4
	strb r0, [r4, #18]	@ 0003eed4 a074
.org 0x3eed6
	ldrb r0, [r4, #13]	@ 0003eed6 607b
.org 0x3eed8
	adds r0, #1	@ 0003eed8 0130
.org 0x3eeda
	strb r0, [r4, #13]	@ 0003eeda 6073
.org 0x3eedc
	ldrb r0, [r4, #18]	@ 0003eedc a07c
.org 0x3eede
	subs r0, #1	@ 0003eede 0138
.org 0x3eee0
	strb r0, [r4, #18]	@ 0003eee0 a074
.org 0x3eee2
	lsls r0, r0, #24	@ 0003eee2 0006
.org 0x3eee4
	cmp r0, #0	@ 0003eee4 0028
.org 0x3eee6
	bne.n 0x3ef34	@ 0003eee6 25d1
.org 0x3eee8
	movs r0, #170	@ 0003eee8 aa20
.org 0x3eeea
	lsls r0, r0, #1	@ 0003eeea 4000
.org 0x3eeec
	adds r1, r5, r0	@ 0003eeec 2918
.org 0x3eeee
	movs r0, #1	@ 0003eeee 0120
.org 0x3eef0
	strb r0, [r1, #0]	@ 0003eef0 0870
.org 0x3eef2
	movs r0, #24	@ 0003eef2 1820
.org 0x3eef4
	strb r0, [r4, #18]	@ 0003eef4 a074
.org 0x3eef6
	b.n 0x3ef2e	@ 0003eef6 1ae0
.org 0x3eef8
	.byte 0x19,0x84,0x00,0x00	@ 0003eef8 data
.org 0x3eefc
	ldrb r0, [r4, #18]	@ 0003eefc a07c
.org 0x3eefe
	subs r0, #1	@ 0003eefe 0138
.org 0x3ef00
	strb r0, [r4, #18]	@ 0003ef00 a074
.org 0x3ef02
	lsls r0, r0, #24	@ 0003ef02 0006
.org 0x3ef04
	cmp r0, #0	@ 0003ef04 0028
.org 0x3ef06
	bne.n 0x3ef34	@ 0003ef06 15d1
.org 0x3ef08
	movs r0, #170	@ 0003ef08 aa20
.org 0x3ef0a
	lsls r0, r0, #1	@ 0003ef0a 4000
.org 0x3ef0c
	adds r1, r5, r0	@ 0003ef0c 2918
.org 0x3ef0e
	movs r0, #3	@ 0003ef0e 0320
.org 0x3ef10
	strb r0, [r1, #0]	@ 0003ef10 0870
.org 0x3ef12
	movs r0, #4	@ 0003ef12 0420
.org 0x3ef14
	strb r0, [r4, #18]	@ 0003ef14 a074
.org 0x3ef16
	b.n 0x3ef2e	@ 0003ef16 0ae0
.org 0x3ef18
	ldrb r0, [r4, #18]	@ 0003ef18 a07c
.org 0x3ef1a
	subs r0, #1	@ 0003ef1a 0138
.org 0x3ef1c
	strb r0, [r4, #18]	@ 0003ef1c a074
.org 0x3ef1e
	lsls r0, r0, #24	@ 0003ef1e 0006
.org 0x3ef20
	cmp r0, #0	@ 0003ef20 0028
.org 0x3ef22
	bne.n 0x3ef34	@ 0003ef22 07d1
.org 0x3ef24
	movs r0, #170	@ 0003ef24 aa20
.org 0x3ef26
	lsls r0, r0, #1	@ 0003ef26 4000
.org 0x3ef28
	adds r1, r5, r0	@ 0003ef28 2918
.org 0x3ef2a
	movs r0, #4	@ 0003ef2a 0420
.org 0x3ef2c
	strb r0, [r1, #0]	@ 0003ef2c 0870
.org 0x3ef2e
	ldrb r0, [r4, #13]	@ 0003ef2e 607b
.org 0x3ef30
	adds r0, #1	@ 0003ef30 0130
.org 0x3ef32
	strb r0, [r4, #13]	@ 0003ef32 6073
.org 0x3ef34
	pop {r4, r5}	@ 0003ef34 30bc
