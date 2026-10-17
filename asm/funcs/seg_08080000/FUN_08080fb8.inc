@ FUN_08080fb8  entry 0x08080fb8  size 170
.thumb
.org 0x80fb8
FUN_08080fb8:
	push {r4, r5, r6, r7, lr}	@ 00080fb8 f0b5
.org 0x80fba
	sub sp, #8	@ 00080fba 82b0
.org 0x80fbc
	adds r7, r0, #0	@ 00080fbc 071c
.org 0x80fbe
	ldrb r1, [r7, #10]	@ 00080fbe b97a
.org 0x80fc0
	movs r0, #254	@ 00080fc0 fe20
.org 0x80fc2
	ands r0, r1	@ 00080fc2 0840
.org 0x80fc4
	movs r1, #0	@ 00080fc4 0021
.org 0x80fc6
	strb r0, [r7, #10]	@ 00080fc6 b872
.org 0x80fc8
	adds r0, r7, #0	@ 00080fc8 381c
.org 0x80fca
	adds r0, #140	@ 00080fca 8c30
.org 0x80fcc
	str r1, [r0, #0]	@ 00080fcc 0160
.org 0x80fce
	adds r0, #4	@ 00080fce 0430
.org 0x80fd0
	str r1, [r0, #0]	@ 00080fd0 0160
.org 0x80fd2
	adds r0, #4	@ 00080fd2 0430
.org 0x80fd4
	strb r1, [r0, #0]	@ 00080fd4 0170
.org 0x80fd6
	ldrb r1, [r7, #10]	@ 00080fd6 b97a
.org 0x80fd8
	movs r0, #251	@ 00080fd8 fb20
.org 0x80fda
	ands r0, r1	@ 00080fda 0840
.org 0x80fdc
	strb r0, [r7, #10]	@ 00080fdc b872
.org 0x80fde
	ldr r2, [r7, #84]	@ 00080fde 7a6d
.org 0x80fe0
	ldr r6, [pc, #128]	@ 00080fe0 204e
.org 0x80fe2
	ldr r0, [r6, #0]	@ 00080fe2 3068
.org 0x80fe4
	ldr r4, [pc, #128]	@ 00080fe4 204c
.org 0x80fe6
	muls r0, r4	@ 00080fe6 6043
.org 0x80fe8
	ldr r1, [pc, #128]	@ 00080fe8 2049
.org 0x80fea
	adds r0, r0, r1	@ 00080fea 4018
.org 0x80fec
	lsls r0, r0, #1	@ 00080fec 4000
.org 0x80fee
	lsrs r5, r0, #1	@ 00080fee 4508
.org 0x80ff0
	lsrs r0, r0, #17	@ 00080ff0 400c
.org 0x80ff2
	movs r3, #15	@ 00080ff2 0f23
.org 0x80ff4
	ands r0, r3	@ 00080ff4 1840
.org 0x80ff6
	subs r0, #7	@ 00080ff6 0738
.org 0x80ff8
	lsls r0, r0, #8	@ 00080ff8 0002
.org 0x80ffa
	adds r0, r0, r2	@ 00080ffa 8018
.org 0x80ffc
	str r0, [sp, #0]	@ 00080ffc 0090
.org 0x80ffe
	ldr r2, [r7, #88]	@ 00080ffe ba6d
.org 0x81000
	ldr r0, [pc, #108]	@ 00081000 1b48
.org 0x81002
	adds r2, r2, r0	@ 00081002 1218
.org 0x81004
	adds r0, r5, #0	@ 00081004 281c
.org 0x81006
	muls r0, r4	@ 00081006 6043
.org 0x81008
	adds r0, r0, r1	@ 00081008 4018
.org 0x8100a
	lsls r0, r0, #1	@ 0008100a 4000
.org 0x8100c
	lsrs r1, r0, #1	@ 0008100c 4108
.org 0x8100e
	str r1, [r6, #0]	@ 0008100e 3160
.org 0x81010
	lsrs r0, r0, #17	@ 00081010 400c
.org 0x81012
	ands r0, r3	@ 00081012 1840
.org 0x81014
	subs r0, #7	@ 00081014 0738
.org 0x81016
	lsls r0, r0, #8	@ 00081016 0002
.org 0x81018
	adds r0, r0, r2	@ 00081018 8018
.org 0x8101a
	str r0, [sp, #4]	@ 0008101a 0190
.org 0x8101c
	movs r0, #1	@ 0008101c 0120
.org 0x8101e
	mov r1, sp	@ 0008101e 6946
.org 0x81020
	bl 0xd0c88	@ 00081020 4ff032fe
.org 0x81024
	adds r4, r7, #0	@ 00081024 3c1c
.org 0x81026
	adds r4, #84	@ 00081026 5434
.org 0x81028
	movs r0, #4	@ 00081028 0420
.org 0x8102a
	movs r1, #34	@ 0008102a 2221
.org 0x8102c
	adds r2, r4, #0	@ 0008102c 221c
.org 0x8102e
	bl 0x2ab88	@ 0008102e a9f7abfd
.org 0x81032
	ldr r2, [pc, #64]	@ 00081032 104a
.org 0x81034
	ldrh r1, [r2, #12]	@ 00081034 9189
.org 0x81036
	ldr r0, [pc, #64]	@ 00081036 1048
.org 0x81038
	cmp r1, r0	@ 00081038 8142
.org 0x8103a
	bhi.n 0x81040	@ 0008103a 01d8
.org 0x8103c
	adds r0, r1, #1	@ 0008103c 481c
.org 0x8103e
	strh r0, [r2, #12]	@ 0008103e 9081
.org 0x81040
	adds r0, r7, #0	@ 00081040 381c
.org 0x81042
	adds r1, r4, #0	@ 00081042 211c
.org 0x81044
	bl 0x2abe0	@ 00081044 a9f7ccfd
.org 0x81048
	ldr r1, [pc, #48]	@ 00081048 0c49
.org 0x8104a
	ldrb r0, [r7, #9]	@ 0008104a 787a
.org 0x8104c
	lsls r0, r0, #2	@ 0008104c 8000
.org 0x8104e
	adds r0, r0, r1	@ 0008104e 4018
.org 0x81050
	movs r1, #4	@ 00081050 0421
.org 0x81052
	str r1, [r7, #12]	@ 00081052 f960
.org 0x81054
	ldr r0, [r0, #0]	@ 00081054 0068
.org 0x81056
	ldr r0, [r0, #16]	@ 00081056 0069
.org 0x81058
	str r0, [r7, #20]	@ 00081058 7861
.org 0x8105a
	add sp, #8	@ 0008105a 02b0
.org 0x8105c
	pop {r4, r5, r6, r7}	@ 0008105c f0bc
.org 0x8105e
	pop {r0}	@ 0008105e 01bc
.org 0x81060
	bx r0	@ 00081060 0047
