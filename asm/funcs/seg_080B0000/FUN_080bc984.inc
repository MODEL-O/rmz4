@ FUN_080bc984  entry 0x080bc984  size 158
.thumb
.org 0xbc984
FUN_080bc984:
	push {r4, lr}	@ 000bc984 10b5
.org 0xbc986
	adds r4, r0, #0	@ 000bc986 041c
.org 0xbc988
	ldrb r0, [r4, #19]	@ 000bc988 e07c
.org 0xbc98a
	cmp r0, #0	@ 000bc98a 0028
.org 0xbc98c
	bne.n 0xbca2c	@ 000bc98c 4ed1
.org 0xbc98e
	ldrb r0, [r4, #16]	@ 000bc98e 207c
.org 0xbc990
	cmp r0, #0	@ 000bc990 0028
.org 0xbc992
	bne.n 0xbc9e0	@ 000bc992 25d1
.org 0xbc994
	ldrb r0, [r4, #18]	@ 000bc994 a07c
.org 0xbc996
	cmp r0, #3	@ 000bc996 0328
.org 0xbc998
	bhi.n 0xbca30	@ 000bc998 4ad8
.org 0xbc99a
	adds r0, r4, #0	@ 000bc99a 201c
.org 0xbc99c
	adds r0, #116	@ 000bc99c 7430
.org 0xbc99e
	ldr r2, [pc, #56]	@ 000bc99e 0e4a
.org 0xbc9a0
	ldrb r1, [r4, #16]	@ 000bc9a0 217c
.org 0xbc9a2
	lsls r1, r1, #2	@ 000bc9a2 8900
.org 0xbc9a4
	adds r1, r1, r2	@ 000bc9a4 8918
.org 0xbc9a6
	ldrb r3, [r4, #18]	@ 000bc9a6 a37c
.org 0xbc9a8
	lsls r2, r3, #1	@ 000bc9a8 5a00
.org 0xbc9aa
	adds r2, r2, r3	@ 000bc9aa d218
.org 0xbc9ac
	lsls r2, r2, #3	@ 000bc9ac d200
.org 0xbc9ae
	ldr r1, [r1, #0]	@ 000bc9ae 0968
.org 0xbc9b0
	adds r1, r1, r2	@ 000bc9b0 8918
.org 0xbc9b2
	bl 0x5784	@ 000bc9b2 48f7e7fe
.org 0xbc9b6
	ldr r2, [pc, #36]	@ 000bc9b6 094a
.org 0xbc9b8
	ldrb r0, [r4, #18]	@ 000bc9b8 a07c
.org 0xbc9ba
	lsls r0, r0, #1	@ 000bc9ba 4000
.org 0xbc9bc
	ldrb r1, [r4, #16]	@ 000bc9bc 217c
.org 0xbc9be
	lsls r1, r1, #3	@ 000bc9be c900
.org 0xbc9c0
	adds r0, r0, r1	@ 000bc9c0 4018
.org 0xbc9c2
	adds r0, r0, r2	@ 000bc9c2 8018
.org 0xbc9c4
	ldrh r1, [r0, #0]	@ 000bc9c4 0188
.org 0xbc9c6
	adds r0, r4, #0	@ 000bc9c6 201c
.org 0xbc9c8
	bl 0x1cf00	@ 000bc9c8 60f79afa
.org 0xbc9cc
	ldrb r0, [r4, #18]	@ 000bc9cc a07c
.org 0xbc9ce
	adds r0, #1	@ 000bc9ce 0130
.org 0xbc9d0
	strb r0, [r4, #18]	@ 000bc9d0 a074
.org 0xbc9d2
	movs r0, #30	@ 000bc9d2 1e20
.org 0xbc9d4
	b.n 0xbca2e	@ 000bc9d4 2be0
.org 0xbc9d6
	.byte 0x00	@ 000bc9d6 data
.org 0xbc9d7
	.byte 0x00	@ 000bc9d7 data
.org 0xbc9d8
	.byte 0xe0,0x48,0x86,0x08	@ 000bc9d8 data
.org 0xbc9dc
	.byte 0x90,0x47,0x86,0x08	@ 000bc9dc data
.org 0xbc9e0
	ldrb r0, [r4, #18]	@ 000bc9e0 a07c
.org 0xbc9e2
	cmp r0, #2	@ 000bc9e2 0228
.org 0xbc9e4
	bhi.n 0xbca30	@ 000bc9e4 24d8
.org 0xbc9e6
	adds r0, r4, #0	@ 000bc9e6 201c
.org 0xbc9e8
	adds r0, #116	@ 000bc9e8 7430
.org 0xbc9ea
	ldr r2, [pc, #56]	@ 000bc9ea 0e4a
.org 0xbc9ec
	ldrb r1, [r4, #16]	@ 000bc9ec 217c
.org 0xbc9ee
	lsls r1, r1, #2	@ 000bc9ee 8900
.org 0xbc9f0
	adds r1, r1, r2	@ 000bc9f0 8918
.org 0xbc9f2
	ldrb r3, [r4, #18]	@ 000bc9f2 a37c
.org 0xbc9f4
	lsls r2, r3, #1	@ 000bc9f4 5a00
.org 0xbc9f6
	adds r2, r2, r3	@ 000bc9f6 d218
.org 0xbc9f8
	lsls r2, r2, #3	@ 000bc9f8 d200
.org 0xbc9fa
	ldr r1, [r1, #0]	@ 000bc9fa 0968
.org 0xbc9fc
	adds r1, r1, r2	@ 000bc9fc 8918
.org 0xbc9fe
	bl 0x5784	@ 000bc9fe 48f7c1fe
.org 0xbca02
	ldr r2, [pc, #36]	@ 000bca02 094a
.org 0xbca04
	ldrb r0, [r4, #18]	@ 000bca04 a07c
.org 0xbca06
	lsls r0, r0, #1	@ 000bca06 4000
.org 0xbca08
	ldrb r1, [r4, #16]	@ 000bca08 217c
.org 0xbca0a
	lsls r1, r1, #3	@ 000bca0a c900
.org 0xbca0c
	adds r0, r0, r1	@ 000bca0c 4018
.org 0xbca0e
	adds r0, r0, r2	@ 000bca0e 8018
.org 0xbca10
	ldrh r1, [r0, #0]	@ 000bca10 0188
.org 0xbca12
	adds r0, r4, #0	@ 000bca12 201c
.org 0xbca14
	bl 0x1cf00	@ 000bca14 60f774fa
.org 0xbca18
	ldrb r0, [r4, #18]	@ 000bca18 a07c
.org 0xbca1a
	adds r0, #1	@ 000bca1a 0130
.org 0xbca1c
	strb r0, [r4, #18]	@ 000bca1c a074
.org 0xbca1e
	movs r0, #30	@ 000bca1e 1e20
.org 0xbca20
	b.n 0xbca2e	@ 000bca20 05e0
