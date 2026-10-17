@ FUN_080cbbf8  entry 0x080cbbf8  size 150
.thumb
.org 0xcbbf8
FUN_080cbbf8:
	push {r4, lr}	@ 000cbbf8 10b5
.org 0xcbbfa
	sub sp, #8	@ 000cbbfa 82b0
.org 0xcbbfc
	adds r4, r0, #0	@ 000cbbfc 041c
.org 0xcbbfe
	ldr r1, [pc, #144]	@ 000cbbfe 2449
.org 0xcbc00
	mov r0, sp	@ 000cbc00 6846
.org 0xcbc02
	movs r2, #6	@ 000cbc02 0622
.org 0xcbc04
	bl 0x129258	@ 000cbc04 5df028fb
.org 0xcbc08
	ldrb r0, [r4, #15]	@ 000cbc08 e07b
.org 0xcbc0a
	cmp r0, #0	@ 000cbc0a 0028
.org 0xcbc0c
	bne.n 0xcbc22	@ 000cbc0c 09d1
.org 0xcbc0e
	ldr r0, [pc, #132]	@ 000cbc0e 2148
.org 0xcbc10
	bl 0x2b10	@ 000cbc10 36f77eff
.org 0xcbc14
	ldr r1, [pc, #128]	@ 000cbc14 2049
.org 0xcbc16
	adds r0, r4, #0	@ 000cbc16 201c
.org 0xcbc18
	bl 0x1cf00	@ 000cbc18 51f772f9
.org 0xcbc1c
	ldrb r0, [r4, #15]	@ 000cbc1c e07b
.org 0xcbc1e
	adds r0, #1	@ 000cbc1e 0130
.org 0xcbc20
	strb r0, [r4, #15]	@ 000cbc20 e073
.org 0xcbc22
	adds r0, r4, #0	@ 000cbc22 201c
.org 0xcbc24
	bl 0x1cff0	@ 000cbc24 51f7e4f9
.org 0xcbc28
	adds r0, r4, #0	@ 000cbc28 201c
.org 0xcbc2a
	adds r0, #116	@ 000cbc2a 7430
.org 0xcbc2c
	adds r1, r4, #0	@ 000cbc2c 211c
.org 0xcbc2e
	adds r1, #113	@ 000cbc2e 7131
.org 0xcbc30
	ldrb r1, [r1, #0]	@ 000cbc30 0978
.org 0xcbc32
	lsls r1, r1, #24	@ 000cbc32 0906
.org 0xcbc34
	asrs r1, r1, #24	@ 000cbc34 0916
.org 0xcbc36
	add r1, sp	@ 000cbc36 6944
.org 0xcbc38
	ldrb r2, [r1, #0]	@ 000cbc38 0a78
.org 0xcbc3a
	lsls r1, r2, #1	@ 000cbc3a 5100
.org 0xcbc3c
	adds r1, r1, r2	@ 000cbc3c 8918
.org 0xcbc3e
	lsls r1, r1, #3	@ 000cbc3e c900
.org 0xcbc40
	ldr r2, [pc, #88]	@ 000cbc40 164a
.org 0xcbc42
	adds r1, r1, r2	@ 000cbc42 8918
.org 0xcbc44
	bl 0x5784	@ 000cbc44 39f79efd
.org 0xcbc48
	adds r0, r4, #0	@ 000cbc48 201c
.org 0xcbc4a
	adds r0, #115	@ 000cbc4a 7330
.org 0xcbc4c
	ldrb r3, [r0, #0]	@ 000cbc4c 0378
.org 0xcbc4e
	cmp r3, #3	@ 000cbc4e 032b
.org 0xcbc50
	bne.n 0xcbc86	@ 000cbc50 19d1
.org 0xcbc52
	ldrb r1, [r4, #10]	@ 000cbc52 a17a
.org 0xcbc54
	movs r0, #254	@ 000cbc54 fe20
.org 0xcbc56
	ands r0, r1	@ 000cbc56 0840
.org 0xcbc58
	movs r2, #0	@ 000cbc58 0022
.org 0xcbc5a
	movs r1, #253	@ 000cbc5a fd21
.org 0xcbc5c
	ands r0, r1	@ 000cbc5c 0840
.org 0xcbc5e
	strb r0, [r4, #10]	@ 000cbc5e a072
.org 0xcbc60
	adds r0, r4, #0	@ 000cbc60 201c
.org 0xcbc62
	adds r0, #140	@ 000cbc62 8c30
.org 0xcbc64
	str r2, [r0, #0]	@ 000cbc64 0260
.org 0xcbc66
	adds r0, #4	@ 000cbc66 0430
.org 0xcbc68
	str r2, [r0, #0]	@ 000cbc68 0260
.org 0xcbc6a
	adds r0, #4	@ 000cbc6a 0430
.org 0xcbc6c
	strb r2, [r0, #0]	@ 000cbc6c 0270
.org 0xcbc6e
	ldrb r1, [r4, #10]	@ 000cbc6e a17a
.org 0xcbc70
	movs r0, #251	@ 000cbc70 fb20
.org 0xcbc72
	ands r0, r1	@ 000cbc72 0840
.org 0xcbc74
	strb r0, [r4, #10]	@ 000cbc74 a072
.org 0xcbc76
	ldr r1, [pc, #40]	@ 000cbc76 0a49
.org 0xcbc78
	ldrb r0, [r4, #9]	@ 000cbc78 607a
.org 0xcbc7a
	lsls r0, r0, #2	@ 000cbc7a 8000
.org 0xcbc7c
	adds r0, r0, r1	@ 000cbc7c 4018
.org 0xcbc7e
	str r3, [r4, #12]	@ 000cbc7e e360
.org 0xcbc80
	ldr r0, [r0, #0]	@ 000cbc80 0068
.org 0xcbc82
	ldr r0, [r0, #12]	@ 000cbc82 c068
.org 0xcbc84
	str r0, [r4, #20]	@ 000cbc84 6061
.org 0xcbc86
	add sp, #8	@ 000cbc86 02b0
.org 0xcbc88
	pop {r4}	@ 000cbc88 10bc
.org 0xcbc8a
	pop {r0}	@ 000cbc8a 01bc
.org 0xcbc8c
	bx r0	@ 000cbc8c 0047
