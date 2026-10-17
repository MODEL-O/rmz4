@ FUN_0805df80  entry 0x0805df80  size 136
.thumb
.org 0x5df80
FUN_0805df80:
	push {r4, r5, lr}	@ 0005df80 30b5
.org 0x5df82
	adds r5, r0, #0	@ 0005df82 051c
.org 0x5df84
	ldrb r0, [r5, #15]	@ 0005df84 e87b
.org 0x5df86
	cmp r0, #0	@ 0005df86 0028
.org 0x5df88
	bne.n 0x5df98	@ 0005df88 06d1
.org 0x5df8a
	adds r0, r5, #0	@ 0005df8a 281c
.org 0x5df8c
	movs r1, #14	@ 0005df8c 0e21
.org 0x5df8e
	bl 0x5ee6c	@ 0005df8e 00f06dff
.org 0x5df92
	ldrb r0, [r5, #15]	@ 0005df92 e87b
.org 0x5df94
	adds r0, #1	@ 0005df94 0130
.org 0x5df96
	strb r0, [r5, #15]	@ 0005df96 e873
.org 0x5df98
	adds r0, r5, #0	@ 0005df98 281c
.org 0x5df9a
	bl 0x1cff0	@ 0005df9a bff729f8
.org 0x5df9e
	adds r0, r5, #0	@ 0005df9e 281c
.org 0x5dfa0
	adds r0, #116	@ 0005dfa0 7430
.org 0x5dfa2
	ldr r4, [pc, #100]	@ 0005dfa2 194c
.org 0x5dfa4
	ldr r3, [pc, #100]	@ 0005dfa4 194b
.org 0x5dfa6
	adds r1, r5, #0	@ 0005dfa6 291c
.org 0x5dfa8
	adds r1, #184	@ 0005dfa8 b831
.org 0x5dfaa
	ldrb r2, [r1, #0]	@ 0005dfaa 0a78
.org 0x5dfac
	lsls r1, r2, #1	@ 0005dfac 5100
.org 0x5dfae
	adds r1, r1, r3	@ 0005dfae c918
.org 0x5dfb0
	ldrh r1, [r1, #0]	@ 0005dfb0 0988
.org 0x5dfb2
	lsls r1, r1, #2	@ 0005dfb2 8900
.org 0x5dfb4
	adds r1, r1, r4	@ 0005dfb4 0919
.org 0x5dfb6
	adds r3, r5, #0	@ 0005dfb6 2b1c
.org 0x5dfb8
	adds r3, #113	@ 0005dfb8 7133
.org 0x5dfba
	movs r4, #0	@ 0005dfba 0024
.org 0x5dfbc
	ldrsb r4, [r3, r4]	@ 0005dfbc 1c57
.org 0x5dfbe
	ldr r1, [r1, #0]	@ 0005dfbe 0968
.org 0x5dfc0
	lsls r3, r4, #2	@ 0005dfc0 a300
.org 0x5dfc2
	adds r3, r3, r1	@ 0005dfc2 5b18
.org 0x5dfc4
	ldr r1, [pc, #72]	@ 0005dfc4 1249
.org 0x5dfc6
	lsls r2, r2, #2	@ 0005dfc6 9200
.org 0x5dfc8
	adds r2, r2, r1	@ 0005dfc8 5218
.org 0x5dfca
	ldr r1, [r2, #0]	@ 0005dfca 1168
.org 0x5dfcc
	adds r1, r1, r4	@ 0005dfcc 0919
.org 0x5dfce
	ldrb r1, [r1, #0]	@ 0005dfce 0978
.org 0x5dfd0
	lsls r2, r1, #1	@ 0005dfd0 4a00
.org 0x5dfd2
	adds r2, r2, r1	@ 0005dfd2 5218
.org 0x5dfd4
	lsls r2, r2, #3	@ 0005dfd4 d200
.org 0x5dfd6
	ldr r1, [r3, #0]	@ 0005dfd6 1968
.org 0x5dfd8
	adds r1, r1, r2	@ 0005dfd8 8918
.org 0x5dfda
	bl 0x5784	@ 0005dfda a7f7d3fb
.org 0x5dfde
	adds r1, r5, #0	@ 0005dfde 291c
.org 0x5dfe0
	adds r1, #204	@ 0005dfe0 cc31
.org 0x5dfe2
	ldr r0, [r1, #0]	@ 0005dfe2 0868
.org 0x5dfe4
	cmp r0, #0	@ 0005dfe4 0028
.org 0x5dfe6
	beq.n 0x5dff2	@ 0005dfe6 04d0
.org 0x5dfe8
	ldrb r0, [r0, #12]	@ 0005dfe8 007b
.org 0x5dfea
	cmp r0, #1	@ 0005dfea 0128
.org 0x5dfec
	bls.n 0x5dff2	@ 0005dfec 01d9
.org 0x5dfee
	movs r0, #0	@ 0005dfee 0020
.org 0x5dff0
	str r0, [r1, #0]	@ 0005dff0 0860
.org 0x5dff2
	adds r0, r5, #0	@ 0005dff2 281c
.org 0x5dff4
	adds r0, #115	@ 0005dff4 7330
.org 0x5dff6
	ldrb r1, [r0, #0]	@ 0005dff6 0178
.org 0x5dff8
	cmp r1, #3	@ 0005dff8 0329
.org 0x5dffa
	bne.n 0x5e002	@ 0005dffa 02d1
.org 0x5dffc
	movs r0, #0	@ 0005dffc 0020
.org 0x5dffe
	strb r1, [r5, #14]	@ 0005dffe a973
.org 0x5e000
	strb r0, [r5, #15]	@ 0005e000 e873
.org 0x5e002
	pop {r4, r5}	@ 0005e002 30bc
.org 0x5e004
	pop {r0}	@ 0005e004 01bc
.org 0x5e006
	bx r0	@ 0005e006 0047
