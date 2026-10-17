@ FUN_0803bc58  entry 0x0803bc58  size 142
.thumb
.org 0x3bc58
FUN_0803bc58:
	push {r4, lr}	@ 0003bc58 10b5
.org 0x3bc5a
	adds r4, r0, #0	@ 0003bc5a 041c
.org 0x3bc5c
	ldrb r0, [r4, #13]	@ 0003bc5c 607b
.org 0x3bc5e
	cmp r0, #0	@ 0003bc5e 0028
.org 0x3bc60
	bne.n 0x3bc94	@ 0003bc60 18d1
.org 0x3bc62
	ldr r1, [pc, #40]	@ 0003bc62 0a49
.org 0x3bc64
	adds r0, r4, #0	@ 0003bc64 201c
.org 0x3bc66
	bl 0x3c27c	@ 0003bc66 00f009fb
.org 0x3bc6a
	lsls r0, r0, #24	@ 0003bc6a 0006
.org 0x3bc6c
	cmp r0, #0	@ 0003bc6c 0028
.org 0x3bc6e
	beq.n 0x3bca4	@ 0003bc6e 19d0
.org 0x3bc70
	ldr r1, [pc, #28]	@ 0003bc70 0749
.org 0x3bc72
	adds r0, r4, #0	@ 0003bc72 201c
.org 0x3bc74
	adds r0, #180	@ 0003bc74 b430
.org 0x3bc76
	ldrb r0, [r0, #13]	@ 0003bc76 407b
.org 0x3bc78
	lsls r0, r0, #1	@ 0003bc78 4000
.org 0x3bc7a
	adds r0, r0, r1	@ 0003bc7a 4018
.org 0x3bc7c
	ldrh r1, [r0, #0]	@ 0003bc7c 0188
.org 0x3bc7e
	adds r0, r4, #0	@ 0003bc7e 201c
.org 0x3bc80
	bl 0x1cf00	@ 0003bc80 e1f73ef9
.org 0x3bc84
	ldrb r0, [r4, #13]	@ 0003bc84 607b
.org 0x3bc86
	adds r0, #1	@ 0003bc86 0130
.org 0x3bc88
	strb r0, [r4, #13]	@ 0003bc88 6073
.org 0x3bc8a
	b.n 0x3bca4	@ 0003bc8a 0be0
.org 0x3bc8c
	.byte 0x2c,0x3b,0x85,0x08	@ 0003bc8c data
.org 0x3bc90
	.byte 0xd0,0x3d,0x85,0x08	@ 0003bc90 data
.org 0x3bc94
	ldr r0, [r4, #84]	@ 0003bc94 606d
.org 0x3bc96
	ldr r1, [r4, #92]	@ 0003bc96 e16d
.org 0x3bc98
	adds r0, r0, r1	@ 0003bc98 4018
.org 0x3bc9a
	str r0, [r4, #84]	@ 0003bc9a 6065
.org 0x3bc9c
	ldr r0, [r4, #88]	@ 0003bc9c a06d
.org 0x3bc9e
	ldr r1, [r4, #96]	@ 0003bc9e 216e
.org 0x3bca0
	adds r0, r0, r1	@ 0003bca0 4018
.org 0x3bca2
	str r0, [r4, #88]	@ 0003bca2 a065
.org 0x3bca4
	adds r0, r4, #0	@ 0003bca4 201c
.org 0x3bca6
	bl 0x3c400	@ 0003bca6 00f0abfb
.org 0x3bcaa
	lsls r0, r0, #24	@ 0003bcaa 0006
.org 0x3bcac
	cmp r0, #0	@ 0003bcac 0028
.org 0x3bcae
	beq.n 0x3bcca	@ 0003bcae 0cd0
.org 0x3bcb0
	adds r0, r4, #0	@ 0003bcb0 201c
.org 0x3bcb2
	adds r0, #84	@ 0003bcb2 5430
.org 0x3bcb4
	ldrb r2, [r4, #10]	@ 0003bcb4 a27a
.org 0x3bcb6
	lsrs r2, r2, #4	@ 0003bcb6 1209
.org 0x3bcb8
	movs r1, #1	@ 0003bcb8 0121
.org 0x3bcba
	ands r2, r1	@ 0003bcba 0a40
.org 0x3bcbc
	movs r1, #6	@ 0003bcbc 0621
.org 0x3bcbe
	bl 0xd1bcc	@ 0003bcbe 95f085ff
.org 0x3bcc2
	movs r0, #43	@ 0003bcc2 2b20
.org 0x3bcc4
	bl 0x2b10	@ 0003bcc4 c6f724ff
.org 0x3bcc8
	b.n 0x3bcd6	@ 0003bcc8 05e0
.org 0x3bcca
	adds r0, r4, #0	@ 0003bcca 201c
.org 0x3bccc
	bl 0x3c1e4	@ 0003bccc 00f08afa
.org 0x3bcd0
	lsls r0, r0, #24	@ 0003bcd0 0006
.org 0x3bcd2
	cmp r0, #0	@ 0003bcd2 0028
.org 0x3bcd4
	beq.n 0x3bce8	@ 0003bcd4 08d0
.org 0x3bcd6
	ldr r1, [pc, #24]	@ 0003bcd6 0649
.org 0x3bcd8
	ldrb r0, [r4, #9]	@ 0003bcd8 607a
.org 0x3bcda
	lsls r0, r0, #2	@ 0003bcda 8000
.org 0x3bcdc
	adds r0, r0, r1	@ 0003bcdc 4018
.org 0x3bcde
	movs r1, #2	@ 0003bcde 0221
.org 0x3bce0
	str r1, [r4, #12]	@ 0003bce0 e160
.org 0x3bce2
	ldr r0, [r0, #0]	@ 0003bce2 0068
.org 0x3bce4
	ldr r0, [r0, #8]	@ 0003bce4 8068
