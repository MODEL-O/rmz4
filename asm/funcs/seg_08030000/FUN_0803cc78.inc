@ FUN_0803cc78  entry 0x0803cc78  size 242
.thumb
.org 0x3cc78
FUN_0803cc78:
	push {r4, r5, lr}	@ 0003cc78 30b5
.org 0x3cc7a
	sub sp, #8	@ 0003cc7a 82b0
.org 0x3cc7c
	adds r4, r0, #0	@ 0003cc7c 041c
.org 0x3cc7e
	adds r5, r4, #0	@ 0003cc7e 251c
.org 0x3cc80
	adds r5, #180	@ 0003cc80 b435
.org 0x3cc82
	ldr r1, [r5, #0]	@ 0003cc82 2968
.org 0x3cc84
	ldrb r0, [r1, #13]	@ 0003cc84 487b
.org 0x3cc86
	cmp r0, #1	@ 0003cc86 0128
.org 0x3cc88
	beq.n 0x3ccc4	@ 0003cc88 1cd0
.org 0x3cc8a
	ldrb r1, [r4, #10]	@ 0003cc8a a17a
.org 0x3cc8c
	movs r0, #254	@ 0003cc8c fe20
.org 0x3cc8e
	ands r0, r1	@ 0003cc8e 0840
.org 0x3cc90
	movs r2, #0	@ 0003cc90 0022
.org 0x3cc92
	movs r1, #253	@ 0003cc92 fd21
.org 0x3cc94
	ands r0, r1	@ 0003cc94 0840
.org 0x3cc96
	strb r0, [r4, #10]	@ 0003cc96 a072
.org 0x3cc98
	adds r0, r4, #0	@ 0003cc98 201c
.org 0x3cc9a
	adds r0, #140	@ 0003cc9a 8c30
.org 0x3cc9c
	str r2, [r0, #0]	@ 0003cc9c 0260
.org 0x3cc9e
	adds r0, #4	@ 0003cc9e 0430
.org 0x3cca0
	str r2, [r0, #0]	@ 0003cca0 0260
.org 0x3cca2
	adds r0, #4	@ 0003cca2 0430
.org 0x3cca4
	strb r2, [r0, #0]	@ 0003cca4 0270
.org 0x3cca6
	ldrb r1, [r4, #10]	@ 0003cca6 a17a
.org 0x3cca8
	movs r0, #251	@ 0003cca8 fb20
.org 0x3ccaa
	ands r0, r1	@ 0003ccaa 0840
.org 0x3ccac
	strb r0, [r4, #10]	@ 0003ccac a072
.org 0x3ccae
	ldr r1, [pc, #16]	@ 0003ccae 0449
.org 0x3ccb0
	ldrb r0, [r4, #9]	@ 0003ccb0 607a
.org 0x3ccb2
	lsls r0, r0, #2	@ 0003ccb2 8000
.org 0x3ccb4
	adds r0, r0, r1	@ 0003ccb4 4018
.org 0x3ccb6
	movs r1, #3	@ 0003ccb6 0321
.org 0x3ccb8
	str r1, [r4, #12]	@ 0003ccb8 e160
.org 0x3ccba
	ldr r0, [r0, #0]	@ 0003ccba 0068
.org 0x3ccbc
	ldr r0, [r0, #12]	@ 0003ccbc c068
.org 0x3ccbe
	b.n 0x3cd74	@ 0003ccbe 59e0
.org 0x3ccc0
	.byte 0xf8,0x39,0x85,0x08	@ 0003ccc0 data
.org 0x3ccc4
	ldrb r0, [r4, #14]	@ 0003ccc4 a07b
.org 0x3ccc6
	cmp r0, #0	@ 0003ccc6 0028
.org 0x3ccc8
	bne.n 0x3cd54	@ 0003ccc8 44d1
.org 0x3ccca
	ldrb r0, [r1, #14]	@ 0003ccca 887b
.org 0x3cccc
	cmp r0, #1	@ 0003cccc 0128
.org 0x3ccce
	beq.n 0x3cd18	@ 0003ccce 23d0
.org 0x3ccd0
	ldrb r1, [r4, #30]	@ 0003ccd0 a17f
.org 0x3ccd2
	lsls r1, r1, #8	@ 0003ccd2 0902
.org 0x3ccd4
	adds r0, r4, #0	@ 0003ccd4 201c
.org 0x3ccd6
	adds r0, #112	@ 0003ccd6 7030
.org 0x3ccd8
	ldrb r0, [r0, #0]	@ 0003ccd8 0078
.org 0x3ccda
	orrs r0, r1	@ 0003ccda 0843
.org 0x3ccdc
	ldr r1, [pc, #12]	@ 0003ccdc 0349
.org 0x3ccde
	cmp r0, r1	@ 0003ccde 8842
.org 0x3cce0
	bne.n 0x3ccf0	@ 0003cce0 06d1
.org 0x3cce2
	adds r1, #1	@ 0003cce2 0131
.org 0x3cce4
	adds r0, r4, #0	@ 0003cce4 201c
.org 0x3cce6
	bl 0x1cf00	@ 0003cce6 e0f70bf9
.org 0x3ccea
	b.n 0x3ccf8	@ 0003ccea 05e0
.org 0x3ccec
	.byte 0x01,0x64,0x00,0x00	@ 0003ccec data
.org 0x3ccf0
	ldr r1, [pc, #28]	@ 0003ccf0 0749
.org 0x3ccf2
	adds r0, r4, #0	@ 0003ccf2 201c
.org 0x3ccf4
	bl 0x1cf00	@ 0003ccf4 e0f704f9
.org 0x3ccf8
	adds r0, r4, #0	@ 0003ccf8 201c
.org 0x3ccfa
	bl 0x1cff0	@ 0003ccfa e0f779f9
.org 0x3ccfe
	adds r0, r4, #0	@ 0003ccfe 201c
.org 0x3cd00
	adds r0, #116	@ 0003cd00 7430
.org 0x3cd02
	ldr r1, [pc, #16]	@ 0003cd02 0449
.org 0x3cd04
	bl 0x5784	@ 0003cd04 c8f73efd
.org 0x3cd08
	ldrb r0, [r4, #14]	@ 0003cd08 a07b
.org 0x3cd0a
	adds r0, #1	@ 0003cd0a 0130
.org 0x3cd0c
	strb r0, [r4, #14]	@ 0003cd0c a073
.org 0x3cd0e
	b.n 0x3cd76	@ 0003cd0e 32e0
.org 0x3cd10
	.byte 0x05,0x64,0x00,0x00	@ 0003cd10 data
.org 0x3cd14
	.byte 0x24,0x4d,0x85,0x08	@ 0003cd14 data
.org 0x3cd18
	adds r0, r4, #0	@ 0003cd18 201c
.org 0x3cd1a
	bl 0x1cff0	@ 0003cd1a e0f769f9
.org 0x3cd1e
	adds r0, r4, #0	@ 0003cd1e 201c
.org 0x3cd20
	adds r0, #116	@ 0003cd20 7430
.org 0x3cd22
	ldr r1, [pc, #44]	@ 0003cd22 0b49
.org 0x3cd24
	ldrb r2, [r4, #16]	@ 0003cd24 227c
.org 0x3cd26
	lsls r2, r2, #2	@ 0003cd26 9200
.org 0x3cd28
	adds r2, r2, r1	@ 0003cd28 5218
.org 0x3cd2a
	adds r1, r4, #0	@ 0003cd2a 211c
.org 0x3cd2c
	adds r1, #113	@ 0003cd2c 7131
.org 0x3cd2e
	ldrb r1, [r1, #0]	@ 0003cd2e 0978
.org 0x3cd30
	lsls r1, r1, #24	@ 0003cd30 0906
.org 0x3cd32
	asrs r1, r1, #24	@ 0003cd32 0916
.org 0x3cd34
	ldr r2, [r2, #0]	@ 0003cd34 1268
.org 0x3cd36
	lsls r1, r1, #2	@ 0003cd36 8900
.org 0x3cd38
	adds r1, r1, r2	@ 0003cd38 8918
.org 0x3cd3a
	ldr r1, [r1, #0]	@ 0003cd3a 0968
.org 0x3cd3c
	ldrb r2, [r5, #13]	@ 0003cd3c 6a7b
.org 0x3cd3e
	ldrb r3, [r5, #12]	@ 0003cd3e 2b7b
.org 0x3cd40
	ldrb r4, [r5, #14]	@ 0003cd40 ac7b
.org 0x3cd42
	str r4, [sp, #0]	@ 0003cd42 0094
.org 0x3cd44
	movs r4, #1	@ 0003cd44 0124
.org 0x3cd46
	negs r4, r4	@ 0003cd46 6442
.org 0x3cd48
	str r4, [sp, #4]	@ 0003cd48 0194
.org 0x3cd4a
	bl 0x5794	@ 0003cd4a c8f723fd
.org 0x3cd4e
	b.n 0x3cd76	@ 0003cd4e 12e0
.org 0x3cd50
	.byte 0x10,0x50,0x85,0x08	@ 0003cd50 data
.org 0x3cd54
	adds r0, r4, #0	@ 0003cd54 201c
.org 0x3cd56
	bl 0x1cff0	@ 0003cd56 e0f74bf9
.org 0x3cd5a
	adds r0, r4, #0	@ 0003cd5a 201c
.org 0x3cd5c
	adds r0, #115	@ 0003cd5c 7330
.org 0x3cd5e
	ldrb r0, [r0, #0]	@ 0003cd5e 0078
.org 0x3cd60
	cmp r0, #3	@ 0003cd60 0328
.org 0x3cd62
	bne.n 0x3cd76	@ 0003cd62 08d1
.org 0x3cd64
	ldr r1, [pc, #24]	@ 0003cd64 0649
.org 0x3cd66
	ldrb r0, [r4, #9]	@ 0003cd66 607a
.org 0x3cd68
	lsls r0, r0, #2	@ 0003cd68 8000
