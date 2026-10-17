@ FUN_08078bb0  entry 0x08078bb0  size 178
.thumb
.org 0x78bb0
FUN_08078bb0:
	push {r4, r5, r6, r7, lr}	@ 00078bb0 f0b5
.org 0x78bb2
	adds r7, r0, #0	@ 00078bb2 071c
.org 0x78bb4
	adds r0, #197	@ 00078bb4 c530
.org 0x78bb6
	ldrb r5, [r0, #0]	@ 00078bb6 0578
.org 0x78bb8
	ldrb r0, [r7, #15]	@ 00078bb8 f87b
.org 0x78bba
	cmp r0, #0	@ 00078bba 0028
.org 0x78bbc
	bne.n 0x78c0c	@ 00078bbc 26d1
.org 0x78bbe
	adds r6, r7, #0	@ 00078bbe 3e1c
.org 0x78bc0
	adds r6, #204	@ 00078bc0 cc36
.org 0x78bc2
	ldr r3, [r6, #0]	@ 00078bc2 3368
.org 0x78bc4
	adds r3, #186	@ 00078bc4 ba33
.org 0x78bc6
	ldr r4, [pc, #156]	@ 00078bc6 274c
.org 0x78bc8
	lsls r5, r5, #1	@ 00078bc8 6d00
.org 0x78bca
	adds r0, r5, r4	@ 00078bca 2819
.org 0x78bcc
	movs r2, #1	@ 00078bcc 0122
.org 0x78bce
	adds r1, r2, #0	@ 00078bce 111c
.org 0x78bd0
	ldrb r0, [r0, #0]	@ 00078bd0 0078
.org 0x78bd2
	lsls r1, r0	@ 00078bd2 8140
.org 0x78bd4
	ldrb r0, [r3, #0]	@ 00078bd4 1878
.org 0x78bd6
	bics r0, r1	@ 00078bd6 8843
.org 0x78bd8
	strb r0, [r3, #0]	@ 00078bd8 1870
.org 0x78bda
	ldr r1, [r6, #0]	@ 00078bda 3168
.org 0x78bdc
	adds r1, #186	@ 00078bdc ba31
.org 0x78bde
	adds r4, #1	@ 00078bde 0134
.org 0x78be0
	adds r5, r5, r4	@ 00078be0 2d19
.org 0x78be2
	ldrb r5, [r5, #0]	@ 00078be2 2d78
.org 0x78be4
	lsls r2, r5	@ 00078be4 aa40
.org 0x78be6
	ldrb r0, [r1, #0]	@ 00078be6 0878
.org 0x78be8
	bics r0, r2	@ 00078be8 9043
.org 0x78bea
	strb r0, [r1, #0]	@ 00078bea 0870
.org 0x78bec
	movs r0, #133	@ 00078bec 8520
.org 0x78bee
	bl 0x2624	@ 00078bee 89f719fd
.org 0x78bf2
	adds r0, r7, #0	@ 00078bf2 381c
.org 0x78bf4
	movs r1, #5	@ 00078bf4 0521
.org 0x78bf6
	bl 0x1d3d0	@ 00078bf6 a4f7ebfb
.org 0x78bfa
	adds r0, r7, #0	@ 00078bfa 381c
.org 0x78bfc
	movs r1, #0	@ 00078bfc 0021
.org 0x78bfe
	bl 0x78fdc	@ 00078bfe 00f0edf9
.org 0x78c02
	movs r0, #64	@ 00078c02 4020
.org 0x78c04
	strb r0, [r7, #18]	@ 00078c04 b874
.org 0x78c06
	ldrb r0, [r7, #15]	@ 00078c06 f87b
.org 0x78c08
	adds r0, #1	@ 00078c08 0130
.org 0x78c0a
	strb r0, [r7, #15]	@ 00078c0a f873
.org 0x78c0c
	adds r0, r7, #0	@ 00078c0c 381c
.org 0x78c0e
	bl 0x1cff0	@ 00078c0e a4f7eff9
.org 0x78c12
	adds r0, r7, #0	@ 00078c12 381c
.org 0x78c14
	adds r0, #116	@ 00078c14 7430
.org 0x78c16
	ldr r3, [pc, #80]	@ 00078c16 144b
.org 0x78c18
	ldr r2, [pc, #80]	@ 00078c18 144a
.org 0x78c1a
	adds r1, r7, #0	@ 00078c1a 391c
.org 0x78c1c
	adds r1, #196	@ 00078c1c c431
.org 0x78c1e
	ldrb r1, [r1, #0]	@ 00078c1e 0978
.org 0x78c20
	lsls r1, r1, #1	@ 00078c20 4900
.org 0x78c22
	adds r1, r1, r2	@ 00078c22 8918
.org 0x78c24
	ldrh r2, [r1, #0]	@ 00078c24 0a88
.org 0x78c26
	lsls r2, r2, #2	@ 00078c26 9200
.org 0x78c28
	adds r2, r2, r3	@ 00078c28 d218
.org 0x78c2a
	adds r1, r7, #0	@ 00078c2a 391c
.org 0x78c2c
	adds r1, #113	@ 00078c2c 7131
.org 0x78c2e
	ldrb r1, [r1, #0]	@ 00078c2e 0978
.org 0x78c30
	lsls r1, r1, #24	@ 00078c30 0906
.org 0x78c32
	asrs r1, r1, #24	@ 00078c32 0916
.org 0x78c34
	ldr r2, [r2, #0]	@ 00078c34 1268
.org 0x78c36
	lsls r1, r1, #2	@ 00078c36 8900
.org 0x78c38
	adds r1, r1, r2	@ 00078c38 8918
.org 0x78c3a
	ldr r1, [r1, #0]	@ 00078c3a 0968
.org 0x78c3c
	bl 0x5784	@ 00078c3c 8cf7a2fd
.org 0x78c40
	adds r0, r7, #0	@ 00078c40 381c
.org 0x78c42
	bl 0x78f28	@ 00078c42 00f071f9
.org 0x78c46
	ldrb r0, [r7, #18]	@ 00078c46 b87c
.org 0x78c48
	subs r0, #1	@ 00078c48 0138
.org 0x78c4a
	strb r0, [r7, #18]	@ 00078c4a b874
.org 0x78c4c
	lsls r0, r0, #24	@ 00078c4c 0006
.org 0x78c4e
	lsrs r1, r0, #24	@ 00078c4e 010e
.org 0x78c50
	cmp r1, #0	@ 00078c50 0029
.org 0x78c52
	bne.n 0x78c5c	@ 00078c52 03d1
.org 0x78c54
	ldrb r0, [r7, #14]	@ 00078c54 b87b
.org 0x78c56
	adds r0, #1	@ 00078c56 0130
.org 0x78c58
	strb r0, [r7, #14]	@ 00078c58 b873
.org 0x78c5a
	strb r1, [r7, #15]	@ 00078c5a f973
.org 0x78c5c
	pop {r4, r5, r6, r7}	@ 00078c5c f0bc
.org 0x78c5e
	pop {r0}	@ 00078c5e 01bc
.org 0x78c60
	bx r0	@ 00078c60 0047
