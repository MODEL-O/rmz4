@ FUN_08081854  entry 0x08081854  size 164
.thumb
.org 0x81854
FUN_08081854:
	push {r4, r5, lr}	@ 00081854 30b5
.org 0x81856
	sub sp, #16	@ 00081856 84b0
.org 0x81858
	adds r5, r0, #0	@ 00081858 051c
.org 0x8185a
	ldrb r0, [r5, #15]	@ 0008185a e87b
.org 0x8185c
	cmp r0, #0	@ 0008185c 0028
.org 0x8185e
	bne.n 0x81888	@ 0008185e 13d1
.org 0x81860
	mov r1, sp	@ 00081860 6946
.org 0x81862
	ldr r0, [pc, #108]	@ 00081862 1b48
.org 0x81864
	ldmia r0!, {r2, r3, r4}	@ 00081864 1cc8
.org 0x81866
	stmia r1!, {r2, r3, r4}	@ 00081866 1cc1
.org 0x81868
	ldr r0, [r0, #0]	@ 00081868 0068
.org 0x8186a
	str r0, [r1, #0]	@ 0008186a 0860
.org 0x8186c
	adds r0, r5, #0	@ 0008186c 281c
.org 0x8186e
	adds r0, #180	@ 0008186e b430
.org 0x81870
	ldrb r0, [r0, #0]	@ 00081870 0078
.org 0x81872
	lsls r0, r0, #2	@ 00081872 8000
.org 0x81874
	add r0, sp	@ 00081874 6844
.org 0x81876
	ldrh r1, [r0, #0]	@ 00081876 0188
.org 0x81878
	adds r0, r5, #0	@ 00081878 281c
.org 0x8187a
	bl 0x1cf00	@ 0008187a 9bf741fb
.org 0x8187e
	movs r0, #32	@ 0008187e 2020
.org 0x81880
	strb r0, [r5, #18]	@ 00081880 a874
.org 0x81882
	ldrb r0, [r5, #15]	@ 00081882 e87b
.org 0x81884
	adds r0, #1	@ 00081884 0130
.org 0x81886
	strb r0, [r5, #15]	@ 00081886 e873
.org 0x81888
	adds r0, r5, #0	@ 00081888 281c
.org 0x8188a
	bl 0x1cff0	@ 0008188a 9bf7b1fb
.org 0x8188e
	ldrb r0, [r5, #13]	@ 0008188e 687b
.org 0x81890
	cmp r0, #0	@ 00081890 0028
.org 0x81892
	beq.n 0x818dc	@ 00081892 23d0
.org 0x81894
	adds r0, r5, #0	@ 00081894 281c
.org 0x81896
	adds r0, #116	@ 00081896 7430
.org 0x81898
	ldr r4, [pc, #56]	@ 00081898 0e4c
.org 0x8189a
	adds r1, r5, #0	@ 0008189a 291c
.org 0x8189c
	adds r1, #181	@ 0008189c b531
.org 0x8189e
	ldrb r3, [r1, #0]	@ 0008189e 0b78
.org 0x818a0
	lsls r3, r3, #2	@ 000818a0 9b00
.org 0x818a2
	ldrb r1, [r5, #30]	@ 000818a2 a97f
.org 0x818a4
	lsls r1, r1, #8	@ 000818a4 0902
.org 0x818a6
	adds r2, r5, #0	@ 000818a6 2a1c
.org 0x818a8
	adds r2, #112	@ 000818a8 7032
.org 0x818aa
	ldrb r2, [r2, #0]	@ 000818aa 1278
.org 0x818ac
	orrs r1, r2	@ 000818ac 1143
.org 0x818ae
	ldr r2, [pc, #40]	@ 000818ae 0a4a
.org 0x818b0
	adds r1, r1, r2	@ 000818b0 8918
.org 0x818b2
	lsls r1, r1, #3	@ 000818b2 c900
.org 0x818b4
	adds r3, r3, r1	@ 000818b4 5b18
.org 0x818b6
	adds r3, r3, r4	@ 000818b6 1b19
.org 0x818b8
	adds r1, r5, #0	@ 000818b8 291c
.org 0x818ba
	adds r1, #113	@ 000818ba 7131
.org 0x818bc
	ldrb r1, [r1, #0]	@ 000818bc 0978
.org 0x818be
	lsls r1, r1, #24	@ 000818be 0906
.org 0x818c0
	asrs r1, r1, #24	@ 000818c0 0916
.org 0x818c2
	ldr r2, [r3, #0]	@ 000818c2 1a68
.org 0x818c4
	lsls r1, r1, #2	@ 000818c4 8900
.org 0x818c6
	adds r1, r1, r2	@ 000818c6 8918
.org 0x818c8
	ldr r1, [r1, #0]	@ 000818c8 0968
.org 0x818ca
	bl 0x5784	@ 000818ca 83f75bff
.org 0x818ce
	b.n 0x818e6	@ 000818ce 0ae0
.org 0x818d0
	.byte 0xd4,0x9a,0x12,0x08	@ 000818d0 data
.org 0x818d4
	.byte 0x1c,0xe7,0x85,0x08	@ 000818d4 data
.org 0x818d8
	.byte 0x00,0xe9,0xff,0xff	@ 000818d8 data
.org 0x818dc
	adds r0, r5, #0	@ 000818dc 281c
.org 0x818de
	adds r0, #116	@ 000818de 7430
.org 0x818e0
	ldr r1, [pc, #32]	@ 000818e0 0849
.org 0x818e2
	bl 0x5784	@ 000818e2 83f74fff
.org 0x818e6
	ldrb r0, [r5, #18]	@ 000818e6 a87c
.org 0x818e8
	subs r0, #1	@ 000818e8 0138
.org 0x818ea
	strb r0, [r5, #18]	@ 000818ea a874
.org 0x818ec
	lsls r0, r0, #24	@ 000818ec 0006
.org 0x818ee
	lsrs r1, r0, #24	@ 000818ee 010e
.org 0x818f0
	cmp r1, #0	@ 000818f0 0029
.org 0x818f2
	bne.n 0x818fc	@ 000818f2 03d1
.org 0x818f4
	movs r0, #2	@ 000818f4 0220
.org 0x818f6
	strb r0, [r5, #13]	@ 000818f6 6873
