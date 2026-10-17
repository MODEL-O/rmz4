@ FUN_0805cd68  entry 0x0805cd68  size 156
.thumb
.org 0x5cd68
FUN_0805cd68:
	push {r4, r5, r6, r7, lr}	@ 0005cd68 f0b5
.org 0x5cd6a
	sub sp, #12	@ 0005cd6a 83b0
.org 0x5cd6c
	adds r5, r0, #0	@ 0005cd6c 051c
.org 0x5cd6e
	ldr r1, [pc, #148]	@ 0005cd6e 2549
.org 0x5cd70
	mov r0, sp	@ 0005cd70 6846
.org 0x5cd72
	movs r2, #6	@ 0005cd72 0622
.org 0x5cd74
	bl 0x129258	@ 0005cd74 ccf070fa
.org 0x5cd78
	add r6, sp, #8	@ 0005cd78 02ae
.org 0x5cd7a
	ldr r1, [pc, #140]	@ 0005cd7a 2349
.org 0x5cd7c
	adds r0, r6, #0	@ 0005cd7c 301c
.org 0x5cd7e
	movs r2, #3	@ 0005cd7e 0322
.org 0x5cd80
	bl 0x129258	@ 0005cd80 ccf06afa
.org 0x5cd84
	ldrb r1, [r5, #16]	@ 0005cd84 297c
.org 0x5cd86
	adds r7, r1, #0	@ 0005cd86 0f1c
.org 0x5cd88
	ldrb r0, [r5, #15]	@ 0005cd88 e87b
.org 0x5cd8a
	cmp r0, #0	@ 0005cd8a 0028
.org 0x5cd8c
	bne.n 0x5cda0	@ 0005cd8c 08d1
.org 0x5cd8e
	lsls r0, r1, #1	@ 0005cd8e 4800
.org 0x5cd90
	add r0, sp	@ 0005cd90 6844
.org 0x5cd92
	ldrb r1, [r0, #0]	@ 0005cd92 0178
.org 0x5cd94
	adds r0, r5, #0	@ 0005cd94 281c
.org 0x5cd96
	bl 0x5ee6c	@ 0005cd96 02f069f8
.org 0x5cd9a
	ldrb r0, [r5, #15]	@ 0005cd9a e87b
.org 0x5cd9c
	adds r0, #1	@ 0005cd9c 0130
.org 0x5cd9e
	strb r0, [r5, #15]	@ 0005cd9e e873
.org 0x5cda0
	adds r0, r5, #0	@ 0005cda0 281c
.org 0x5cda2
	bl 0x1cff0	@ 0005cda2 c0f725f9
.org 0x5cda6
	adds r0, r5, #0	@ 0005cda6 281c
.org 0x5cda8
	adds r0, #116	@ 0005cda8 7430
.org 0x5cdaa
	ldr r4, [pc, #96]	@ 0005cdaa 184c
.org 0x5cdac
	ldr r3, [pc, #96]	@ 0005cdac 184b
.org 0x5cdae
	adds r1, r5, #0	@ 0005cdae 291c
.org 0x5cdb0
	adds r1, #184	@ 0005cdb0 b831
.org 0x5cdb2
	ldrb r2, [r1, #0]	@ 0005cdb2 0a78
.org 0x5cdb4
	lsls r1, r2, #1	@ 0005cdb4 5100
.org 0x5cdb6
	adds r1, r1, r3	@ 0005cdb6 c918
.org 0x5cdb8
	ldrh r1, [r1, #0]	@ 0005cdb8 0988
.org 0x5cdba
	lsls r1, r1, #2	@ 0005cdba 8900
.org 0x5cdbc
	adds r1, r1, r4	@ 0005cdbc 0919
.org 0x5cdbe
	adds r3, r5, #0	@ 0005cdbe 2b1c
.org 0x5cdc0
	adds r3, #113	@ 0005cdc0 7133
.org 0x5cdc2
	movs r4, #0	@ 0005cdc2 0024
.org 0x5cdc4
	ldrsb r4, [r3, r4]	@ 0005cdc4 1c57
.org 0x5cdc6
	ldr r1, [r1, #0]	@ 0005cdc6 0968
.org 0x5cdc8
	lsls r3, r4, #2	@ 0005cdc8 a300
.org 0x5cdca
	adds r3, r3, r1	@ 0005cdca 5b18
.org 0x5cdcc
	ldr r1, [pc, #68]	@ 0005cdcc 1149
.org 0x5cdce
	lsls r2, r2, #2	@ 0005cdce 9200
.org 0x5cdd0
	adds r2, r2, r1	@ 0005cdd0 5218
.org 0x5cdd2
	ldr r1, [r2, #0]	@ 0005cdd2 1168
.org 0x5cdd4
	adds r1, r1, r4	@ 0005cdd4 0919
.org 0x5cdd6
	ldrb r1, [r1, #0]	@ 0005cdd6 0978
.org 0x5cdd8
	lsls r2, r1, #1	@ 0005cdd8 4a00
.org 0x5cdda
	adds r2, r2, r1	@ 0005cdda 5218
.org 0x5cddc
	lsls r2, r2, #3	@ 0005cddc d200
.org 0x5cdde
	ldr r1, [r3, #0]	@ 0005cdde 1968
.org 0x5cde0
	adds r1, r1, r2	@ 0005cde0 8918
.org 0x5cde2
	bl 0x5784	@ 0005cde2 a8f7cffc
.org 0x5cde6
	adds r0, r5, #0	@ 0005cde6 281c
.org 0x5cde8
	adds r0, #115	@ 0005cde8 7330
.org 0x5cdea
	ldrb r0, [r0, #0]	@ 0005cdea 0078
.org 0x5cdec
	cmp r0, #3	@ 0005cdec 0328
.org 0x5cdee
	bne.n 0x5cdfc	@ 0005cdee 05d1
.org 0x5cdf0
	adds r0, r6, r7	@ 0005cdf0 f019
.org 0x5cdf2
	ldrb r0, [r0, #0]	@ 0005cdf2 0078
.org 0x5cdf4
	movs r1, #0	@ 0005cdf4 0021
.org 0x5cdf6
	strb r0, [r5, #13]	@ 0005cdf6 6873
.org 0x5cdf8
	strb r1, [r5, #14]	@ 0005cdf8 a973
.org 0x5cdfa
	strb r1, [r5, #15]	@ 0005cdfa e973
.org 0x5cdfc
	add sp, #12	@ 0005cdfc 03b0
.org 0x5cdfe
	pop {r4, r5, r6, r7}	@ 0005cdfe f0bc
.org 0x5ce00
	pop {r0}	@ 0005ce00 01bc
.org 0x5ce02
	bx r0	@ 0005ce02 0047
