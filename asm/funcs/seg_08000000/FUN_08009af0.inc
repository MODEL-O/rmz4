@ FUN_08009af0  entry 0x08009af0  size 94
.thumb
.org 0x9af0
FUN_08009af0:
	push {r4, r5, r6, lr}	@ 00009af0 70b5
.org 0x9af2
	adds r5, r0, #0	@ 00009af2 051c
.org 0x9af4
	ldrb r6, [r5, #14]	@ 00009af4 ae7b
.org 0x9af6
	cmp r6, #0	@ 00009af6 002e
.org 0x9af8
	bne.n 0x9b42	@ 00009af8 23d1
.org 0x9afa
	ldr r1, [r5, #92]	@ 00009afa e96d
.org 0x9afc
	lsls r1, r1, #16	@ 00009afc 0904
.org 0x9afe
	lsrs r1, r1, #20	@ 00009afe 090d
.org 0x9b00
	lsls r4, r1, #1	@ 00009b00 4c00
.org 0x9b02
	ldr r3, [pc, #76]	@ 00009b02 134b
.org 0x9b04
	adds r4, r4, r3	@ 00009b04 e418
.org 0x9b06
	ldr r0, [r5, #96]	@ 00009b06 286e
.org 0x9b08
	ldr r2, [r5, #100]	@ 00009b08 6a6e
.org 0x9b0a
	orrs r0, r2	@ 00009b0a 1043
.org 0x9b0c
	movs r2, #68	@ 00009b0c 4422
.org 0x9b0e
	orrs r0, r2	@ 00009b0e 1043
.org 0x9b10
	strh r0, [r4, #0]	@ 00009b10 2080
.org 0x9b12
	lsls r1, r1, #2	@ 00009b12 8900
.org 0x9b14
	adds r3, #8	@ 00009b14 0833
.org 0x9b16
	adds r1, r1, r3	@ 00009b16 c918
.org 0x9b18
	str r6, [r1, #0]	@ 00009b18 0e60
.org 0x9b1a
	str r6, [r5, #104]	@ 00009b1a ae66
.org 0x9b1c
	ldr r0, [pc, #52]	@ 00009b1c 0d48
.org 0x9b1e
	ldr r0, [r0, #0]	@ 00009b1e 0068
.org 0x9b20
	ldr r1, [pc, #52]	@ 00009b20 0d49
.org 0x9b22
	adds r0, r0, r1	@ 00009b22 4018
.org 0x9b24
	ldrh r2, [r4, #0]	@ 00009b24 2288
.org 0x9b26
	movs r1, #248	@ 00009b26 f821
.org 0x9b28
	lsls r1, r1, #5	@ 00009b28 4901
.org 0x9b2a
	ands r1, r2	@ 00009b2a 1140
.org 0x9b2c
	lsls r1, r1, #3	@ 00009b2c c900
.org 0x9b2e
	movs r2, #192	@ 00009b2e c022
.org 0x9b30
	lsls r2, r2, #19	@ 00009b30 d204
.org 0x9b32
	adds r1, r1, r2	@ 00009b32 8918
.org 0x9b34
	movs r2, #128	@ 00009b34 8022
.org 0x9b36
	lsls r2, r2, #2	@ 00009b36 9200
.org 0x9b38
	bl 0x128be0	@ 00009b38 1ff152f8
.org 0x9b3c
	ldrb r0, [r5, #14]	@ 00009b3c a87b
.org 0x9b3e
	adds r0, #1	@ 00009b3e 0130
.org 0x9b40
	strb r0, [r5, #14]	@ 00009b40 a873
.org 0x9b42
	ldr r0, [r5, #104]	@ 00009b42 a86e
.org 0x9b44
	adds r0, #1	@ 00009b44 0130
.org 0x9b46
	str r0, [r5, #104]	@ 00009b46 a866
.org 0x9b48
	pop {r4, r5, r6}	@ 00009b48 70bc
.org 0x9b4a
	pop {r0}	@ 00009b4a 01bc
.org 0x9b4c
	bx r0	@ 00009b4c 0047
