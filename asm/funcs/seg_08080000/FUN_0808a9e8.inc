@ FUN_0808a9e8  entry 0x0808a9e8  size 184
.thumb
.org 0x8a9e8
FUN_0808a9e8:
	push {r4, r5, lr}	@ 0008a9e8 30b5
.org 0x8a9ea
	adds r5, r0, #0	@ 0008a9ea 051c
.org 0x8a9ec
	ldrb r0, [r5, #14]	@ 0008a9ec a87b
.org 0x8a9ee
	cmp r0, #0	@ 0008a9ee 0028
.org 0x8a9f0
	beq.n 0x8a9f8	@ 0008a9f0 02d0
.org 0x8a9f2
	cmp r0, #1	@ 0008a9f2 0128
.org 0x8a9f4
	beq.n 0x8aa30	@ 0008a9f4 1cd0
.org 0x8a9f6
	b.n 0x8aaa8	@ 0008a9f6 57e0
.org 0x8a9f8
	adds r4, r5, #0	@ 0008a9f8 2c1c
.org 0x8a9fa
	adds r4, #192	@ 0008a9fa c034
.org 0x8a9fc
	ldrb r1, [r4, #0]	@ 0008a9fc 2178
.org 0x8a9fe
	movs r2, #128	@ 0008a9fe 8022
.org 0x8aa00
	lsls r2, r2, #6	@ 0008aa00 9201
.org 0x8aa02
	adds r0, r2, #0	@ 0008aa02 101c
.org 0x8aa04
	orrs r1, r0	@ 0008aa04 0143
.org 0x8aa06
	adds r0, r5, #0	@ 0008aa06 281c
.org 0x8aa08
	bl 0x1cf00	@ 0008aa08 92f77afa
.org 0x8aa0c
	adds r0, r5, #0	@ 0008aa0c 281c
.org 0x8aa0e
	adds r0, #116	@ 0008aa0e 7430
.org 0x8aa10
	ldr r2, [pc, #112]	@ 0008aa10 1c4a
.org 0x8aa12
	ldrb r1, [r4, #0]	@ 0008aa12 2178
.org 0x8aa14
	adds r1, r1, r2	@ 0008aa14 8918
.org 0x8aa16
	ldrb r2, [r1, #0]	@ 0008aa16 0a78
.org 0x8aa18
	lsls r1, r2, #1	@ 0008aa18 5100
.org 0x8aa1a
	adds r1, r1, r2	@ 0008aa1a 8918
.org 0x8aa1c
	lsls r1, r1, #3	@ 0008aa1c c900
.org 0x8aa1e
	ldr r2, [pc, #104]	@ 0008aa1e 1a4a
.org 0x8aa20
	adds r1, r1, r2	@ 0008aa20 8918
.org 0x8aa22
	bl 0x5784	@ 0008aa22 7af7affe
.org 0x8aa26
	movs r0, #8	@ 0008aa26 0820
.org 0x8aa28
	strb r0, [r5, #18]	@ 0008aa28 a874
.org 0x8aa2a
	ldrb r0, [r5, #14]	@ 0008aa2a a87b
.org 0x8aa2c
	adds r0, #1	@ 0008aa2c 0130
.org 0x8aa2e
	strb r0, [r5, #14]	@ 0008aa2e a873
.org 0x8aa30
	adds r0, r5, #0	@ 0008aa30 281c
.org 0x8aa32
	bl 0x1cff0	@ 0008aa32 92f7ddfa
.org 0x8aa36
	adds r0, r5, #0	@ 0008aa36 281c
.org 0x8aa38
	adds r0, #115	@ 0008aa38 7330
.org 0x8aa3a
	ldrb r0, [r0, #0]	@ 0008aa3a 0078
.org 0x8aa3c
	cmp r0, #3	@ 0008aa3c 0328
.org 0x8aa3e
	bne.n 0x8aaa8	@ 0008aa3e 33d1
.org 0x8aa40
	ldrb r0, [r5, #18]	@ 0008aa40 a87c
.org 0x8aa42
	cmp r0, #0	@ 0008aa42 0028
.org 0x8aa44
	beq.n 0x8aa50	@ 0008aa44 04d0
.org 0x8aa46
	subs r0, #1	@ 0008aa46 0138
.org 0x8aa48
	strb r0, [r5, #18]	@ 0008aa48 a874
.org 0x8aa4a
	lsls r0, r0, #24	@ 0008aa4a 0006
.org 0x8aa4c
	cmp r0, #0	@ 0008aa4c 0028
.org 0x8aa4e
	bne.n 0x8aaa8	@ 0008aa4e 2bd1
.org 0x8aa50
	adds r2, r5, #0	@ 0008aa50 2a1c
.org 0x8aa52
	adds r2, #192	@ 0008aa52 c032
.org 0x8aa54
	ldrb r0, [r2, #0]	@ 0008aa54 1078
.org 0x8aa56
	adds r0, #4	@ 0008aa56 0430
.org 0x8aa58
	movs r1, #0	@ 0008aa58 0021
.org 0x8aa5a
	strb r0, [r5, #13]	@ 0008aa5a 6873
.org 0x8aa5c
	strb r1, [r5, #14]	@ 0008aa5c a973
.org 0x8aa5e
	adds r0, r5, #0	@ 0008aa5e 281c
.org 0x8aa60
	adds r0, #193	@ 0008aa60 c130
.org 0x8aa62
	ldrb r0, [r0, #0]	@ 0008aa62 0078
.org 0x8aa64
	cmp r0, #0	@ 0008aa64 0028
.org 0x8aa66
	bne.n 0x8aaa8	@ 0008aa66 1fd1
.org 0x8aa68
	ldrb r1, [r5, #10]	@ 0008aa68 a97a
.org 0x8aa6a
	movs r0, #16	@ 0008aa6a 1020
.org 0x8aa6c
	ands r0, r1	@ 0008aa6c 0840
.org 0x8aa6e
	cmp r0, #0	@ 0008aa6e 0028
.org 0x8aa70
	bne.n 0x8aa90	@ 0008aa70 0ed1
.org 0x8aa72
	ldr r0, [pc, #24]	@ 0008aa72 0648
.org 0x8aa74
	ldr r0, [r0, #0]	@ 0008aa74 0068
.org 0x8aa76
	ldr r0, [r0, #84]	@ 0008aa76 406d
.org 0x8aa78
	ldr r1, [r5, #84]	@ 0008aa78 696d
.org 0x8aa7a
	subs r0, r0, r1	@ 0008aa7a 401a
.org 0x8aa7c
	cmp r0, #0	@ 0008aa7c 0028
.org 0x8aa7e
	bgt.n 0x8aa9e	@ 0008aa7e 0edc
.org 0x8aa80
	b.n 0x8aaa8	@ 0008aa80 12e0
.org 0x8aa82
	.byte 0x00	@ 0008aa82 data
.org 0x8aa83
	.byte 0x00	@ 0008aa83 data
.org 0x8aa84
	.byte 0x1c,0xf5,0x85,0x08	@ 0008aa84 data
.org 0x8aa88
	.byte 0xcc,0xf3,0x85,0x08	@ 0008aa88 data
.org 0x8aa8c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008aa8c data
.org 0x8aa90
	ldr r0, [pc, #28]	@ 0008aa90 0748
.org 0x8aa92
	ldr r0, [r0, #0]	@ 0008aa92 0068
.org 0x8aa94
	ldr r0, [r0, #84]	@ 0008aa94 406d
.org 0x8aa96
	ldr r1, [r5, #84]	@ 0008aa96 696d
.org 0x8aa98
	subs r0, r0, r1	@ 0008aa98 401a
.org 0x8aa9a
	cmp r0, #0	@ 0008aa9a 0028
.org 0x8aa9c
	bge.n 0x8aaa8	@ 0008aa9c 04da
.org 0x8aa9e
	ldrb r0, [r2, #0]	@ 0008aa9e 1078
