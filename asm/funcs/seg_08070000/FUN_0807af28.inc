@ FUN_0807af28  entry 0x0807af28  size 302
.thumb
.org 0x7af28
FUN_0807af28:
	push {r4, r5, r6, r7, lr}	@ 0007af28 f0b5
.org 0x7af2a
	mov r7, sl	@ 0007af2a 5746
.org 0x7af2c
	mov r6, r9	@ 0007af2c 4e46
.org 0x7af2e
	mov r5, r8	@ 0007af2e 4546
.org 0x7af30
	push {r5, r6, r7}	@ 0007af30 e0b4
.org 0x7af32
	sub sp, #4	@ 0007af32 81b0
.org 0x7af34
	adds r7, r0, #0	@ 0007af34 071c
.org 0x7af36
	ldrb r0, [r7, #14]	@ 0007af36 b87b
.org 0x7af38
	str r0, [sp, #0]	@ 0007af38 0090
.org 0x7af3a
	cmp r0, #0	@ 0007af3a 0028
.org 0x7af3c
	bne.n 0x7b01c	@ 0007af3c 6ed1
.org 0x7af3e
	ldr r6, [pc, #264]	@ 0007af3e 424e
.org 0x7af40
	ldr r1, [pc, #264]	@ 0007af40 4249
.org 0x7af42
	mov r9, r1	@ 0007af42 8946
.org 0x7af44
	ldr r2, [pc, #264]	@ 0007af44 424a
.org 0x7af46
	mov r8, r2	@ 0007af46 9046
.org 0x7af48
	ldr r0, [pc, #264]	@ 0007af48 4248
.org 0x7af4a
	ldrh r1, [r0, #0]	@ 0007af4a 0188
.org 0x7af4c
	ldr r2, [pc, #264]	@ 0007af4c 424a
.org 0x7af4e
	ldrh r0, [r2, #6]	@ 0007af4e d088
.org 0x7af50
	lsrs r0, r0, #6	@ 0007af50 8009
.org 0x7af52
	subs r1, r1, r0	@ 0007af52 091a
.org 0x7af54
	lsls r1, r1, #5	@ 0007af54 4901
.org 0x7af56
	movs r0, #128	@ 0007af56 8020
.org 0x7af58
	lsls r0, r0, #9	@ 0007af58 4002
.org 0x7af5a
	adds r1, r1, r0	@ 0007af5a 0918
.org 0x7af5c
	adds r0, r2, #0	@ 0007af5c 101c
.org 0x7af5e
	bl 0x1d30	@ 0007af5e 86f7e7fe
.org 0x7af62
	ldr r1, [pc, #248]	@ 0007af62 3e49
.org 0x7af64
	adds r6, r6, r1	@ 0007af64 7618
.org 0x7af66
	ldr r5, [pc, #248]	@ 0007af66 3e4d
.org 0x7af68
	ldr r2, [pc, #248]	@ 0007af68 3e4a
.org 0x7af6a
	ldrh r1, [r2, #0]	@ 0007af6a 1188
.org 0x7af6c
	ldrb r0, [r6, #7]	@ 0007af6c f079
.org 0x7af6e
	subs r1, r1, r0	@ 0007af6e 091a
.org 0x7af70
	lsls r1, r1, #5	@ 0007af70 4901
.org 0x7af72
	movs r0, #128	@ 0007af72 8020
.org 0x7af74
	lsls r0, r0, #2	@ 0007af74 8000
.org 0x7af76
	adds r1, r1, r0	@ 0007af76 0918
.org 0x7af78
	adds r0, r6, #0	@ 0007af78 301c
.org 0x7af7a
	bl 0x2208	@ 0007af7a 87f745f9
.org 0x7af7e
	ldr r4, [pc, #232]	@ 0007af7e 3a4c
.org 0x7af80
	add r9, r4	@ 0007af80 a144
.org 0x7af82
	movs r1, #212	@ 0007af82 d421
.org 0x7af84
	lsls r1, r1, #1	@ 0007af84 4900
.org 0x7af86
	mov sl, r1	@ 0007af86 8a46
.org 0x7af88
	add r8, sl	@ 0007af88 d044
.org 0x7af8a
	mov r2, r8	@ 0007af8a 4246
.org 0x7af8c
	ldrh r1, [r2, #0]	@ 0007af8c 1188
.org 0x7af8e
	mov r2, r9	@ 0007af8e 4a46
.org 0x7af90
	ldrh r0, [r2, #6]	@ 0007af90 d088
.org 0x7af92
	lsrs r0, r0, #6	@ 0007af92 8009
.org 0x7af94
	subs r1, r1, r0	@ 0007af94 091a
.org 0x7af96
	lsls r1, r1, #5	@ 0007af96 4901
.org 0x7af98
	movs r0, #128	@ 0007af98 8020
.org 0x7af9a
	lsls r0, r0, #9	@ 0007af9a 4002
.org 0x7af9c
	adds r1, r1, r0	@ 0007af9c 0918
.org 0x7af9e
	mov r0, r9	@ 0007af9e 4846
.org 0x7afa0
	bl 0x1d30	@ 0007afa0 86f7c6fe
.org 0x7afa4
	ldr r1, [pc, #180]	@ 0007afa4 2d49
.org 0x7afa6
	adds r4, r4, r1	@ 0007afa6 6418
.org 0x7afa8
	add r5, sl	@ 0007afa8 5544
.org 0x7afaa
	ldrh r1, [r5, #0]	@ 0007afaa 2988
.org 0x7afac
	ldrb r0, [r4, #7]	@ 0007afac e079
.org 0x7afae
	subs r1, r1, r0	@ 0007afae 091a
.org 0x7afb0
	lsls r1, r1, #5	@ 0007afb0 4901
.org 0x7afb2
	movs r2, #128	@ 0007afb2 8022
.org 0x7afb4
	lsls r2, r2, #2	@ 0007afb4 9200
.org 0x7afb6
	adds r1, r1, r2	@ 0007afb6 8918
.org 0x7afb8
	adds r0, r4, #0	@ 0007afb8 201c
.org 0x7afba
	bl 0x2208	@ 0007afba 87f725f9
.org 0x7afbe
	ldr r0, [pc, #148]	@ 0007afbe 2548
.org 0x7afc0
	ldrh r1, [r0, #0]	@ 0007afc0 0188
.org 0x7afc2
	ldr r2, [pc, #148]	@ 0007afc2 254a
.org 0x7afc4
	ldrh r0, [r2, #6]	@ 0007afc4 d088
.org 0x7afc6
	lsrs r0, r0, #6	@ 0007afc6 8009
.org 0x7afc8
	subs r1, r1, r0	@ 0007afc8 091a
.org 0x7afca
	lsls r1, r1, #5	@ 0007afca 4901
.org 0x7afcc
	movs r0, #128	@ 0007afcc 8020
.org 0x7afce
	lsls r0, r0, #9	@ 0007afce 4002
.org 0x7afd0
	adds r1, r1, r0	@ 0007afd0 0918
.org 0x7afd2
	adds r0, r2, #0	@ 0007afd2 101c
.org 0x7afd4
	bl 0x1d30	@ 0007afd4 86f7acfe
.org 0x7afd8
	ldr r2, [pc, #136]	@ 0007afd8 224a
.org 0x7afda
	ldrh r1, [r2, #0]	@ 0007afda 1188
.org 0x7afdc
	ldrb r0, [r6, #7]	@ 0007afdc f079
.org 0x7afde
	subs r1, r1, r0	@ 0007afde 091a
.org 0x7afe0
	lsls r1, r1, #5	@ 0007afe0 4901
.org 0x7afe2
	movs r0, #128	@ 0007afe2 8020
.org 0x7afe4
	lsls r0, r0, #2	@ 0007afe4 8000
.org 0x7afe6
	adds r1, r1, r0	@ 0007afe6 0918
.org 0x7afe8
	adds r0, r6, #0	@ 0007afe8 301c
.org 0x7afea
	bl 0x2208	@ 0007afea 87f70df9
.org 0x7afee
	mov r0, sl	@ 0007afee 5046
.org 0x7aff0
	bl 0x2b10	@ 0007aff0 87f78efd
.org 0x7aff4
	ldr r1, [pc, #116]	@ 0007aff4 1d49
.org 0x7aff6
	adds r0, r7, #0	@ 0007aff6 381c
.org 0x7aff8
	bl 0x1cf00	@ 0007aff8 a1f782ff
.org 0x7affc
	movs r0, #64	@ 0007affc 4020
.org 0x7affe
	negs r0, r0	@ 0007affe 4042
.org 0x7b000
	str r0, [r7, #92]	@ 0007b000 f865
.org 0x7b002
	movs r0, #99	@ 0007b002 6320
.org 0x7b004
	strb r0, [r7, #18]	@ 0007b004 b874
.org 0x7b006
	adds r0, r7, #0	@ 0007b006 381c
.org 0x7b008
	adds r0, #218	@ 0007b008 da30
.org 0x7b00a
	mov r1, sp	@ 0007b00a 6946
.org 0x7b00c
	ldrb r1, [r1, #0]	@ 0007b00c 0978
.org 0x7b00e
	strb r1, [r0, #0]	@ 0007b00e 0170
.org 0x7b010
	mov r2, sp	@ 0007b010 6a46
.org 0x7b012
	ldrb r2, [r2, #0]	@ 0007b012 1278
.org 0x7b014
	strb r2, [r7, #15]	@ 0007b014 fa73
.org 0x7b016
	ldrb r0, [r7, #14]	@ 0007b016 b87b
.org 0x7b018
	adds r0, #1	@ 0007b018 0130
.org 0x7b01a
	strb r0, [r7, #14]	@ 0007b01a b873
.org 0x7b01c
	adds r0, r7, #0	@ 0007b01c 381c
.org 0x7b01e
	bl 0x1cff0	@ 0007b01e a1f7e7ff
.org 0x7b022
	adds r1, r7, #0	@ 0007b022 391c
.org 0x7b024
	adds r1, #213	@ 0007b024 d531
.org 0x7b026
	ldrb r0, [r1, #0]	@ 0007b026 0878
.org 0x7b028
	cmp r0, #1	@ 0007b028 0128
.org 0x7b02a
	beq.n 0x7b030	@ 0007b02a 01d0
.org 0x7b02c
	cmp r0, #129	@ 0007b02c 8128
.org 0x7b02e
	bne.n 0x7b034	@ 0007b02e 01d1
.org 0x7b030
	movs r0, #0	@ 0007b030 0020
.org 0x7b032
	strb r0, [r1, #0]	@ 0007b032 0870
.org 0x7b034
	ldrb r0, [r7, #15]	@ 0007b034 f87b
.org 0x7b036
	cmp r0, #8	@ 0007b036 0828
.org 0x7b038
	bls.n 0x7b03c	@ 0007b038 00d9
.org 0x7b03a
	b.n 0x7b420	@ 0007b03a f1e1
.org 0x7b03c
	lsls r0, r0, #2	@ 0007b03c 8000
.org 0x7b03e
	ldr r1, [pc, #48]	@ 0007b03e 0c49
.org 0x7b040
	adds r0, r0, r1	@ 0007b040 4018
.org 0x7b042
	ldr r0, [r0, #0]	@ 0007b042 0068
.org 0x7b044
	mov pc, r0	@ 0007b044 8746
.org 0x7b046
	.byte 0x00	@ 0007b046 data
.org 0x7b047
	.byte 0x00	@ 0007b047 data
.org 0x7b048
	.byte 0xb8,0x10,0x00,0x00	@ 0007b048 data
.org 0x7b04c
	.byte 0x00,0x40,0xc4,0x08	@ 0007b04c data
.org 0x7b050
	.byte 0x40,0xe0,0x02,0x02	@ 0007b050 data
.org 0x7b054
	.byte 0xec,0xe1,0x02,0x02	@ 0007b054 data
