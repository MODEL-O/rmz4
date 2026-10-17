@ FUN_0811bdfc  entry 0x0811bdfc  size 344
.thumb
.org 0x11bdfc
FUN_0811bdfc:
	push {r4, r5, r6, r7, lr}	@ 0011bdfc f0b5
.org 0x11bdfe
	sub sp, #4	@ 0011bdfe 81b0
.org 0x11be00
	adds r5, r0, #0	@ 0011be00 051c
.org 0x11be02
	ldr r1, [pc, #76]	@ 0011be02 1349
.org 0x11be04
	adds r0, r5, r1	@ 0011be04 6818
.org 0x11be06
	ldr r6, [r0, #0]	@ 0011be06 0668
.org 0x11be08
	ldr r2, [pc, #72]	@ 0011be08 124a
.org 0x11be0a
	adds r0, r5, r2	@ 0011be0a a818
.org 0x11be0c
	movs r4, #0	@ 0011be0c 0024
.org 0x11be0e
	strb r4, [r0, #0]	@ 0011be0e 0470
.org 0x11be10
	strb r4, [r0, #1]	@ 0011be10 4470
.org 0x11be12
	ldr r0, [pc, #68]	@ 0011be12 1148
.org 0x11be14
	ldr r1, [pc, #68]	@ 0011be14 1149
.org 0x11be16
	ldrh r2, [r1, #0]	@ 0011be16 0a88
.org 0x11be18
	movs r1, #12	@ 0011be18 0c21
.org 0x11be1a
	ands r1, r2	@ 0011be1a 1140
.org 0x11be1c
	lsls r1, r1, #12	@ 0011be1c 0903
.org 0x11be1e
	bl 0x1d30	@ 0011be1e e5f687ff
.org 0x11be22
	ldr r0, [pc, #60]	@ 0011be22 0f48
.org 0x11be24
	movs r1, #0	@ 0011be24 0021
.org 0x11be26
	bl 0x2208	@ 0011be26 e6f6eff9
.org 0x11be2a
	adds r0, r6, #0	@ 0011be2a 301c
.org 0x11be2c
	adds r0, #245	@ 0011be2c f530
.org 0x11be2e
	ldrb r0, [r0, #0]	@ 0011be2e 0078
.org 0x11be30
	cmp r0, #255	@ 0011be30 ff28
.org 0x11be32
	beq.n 0x11be6c	@ 0011be32 1bd0
.org 0x11be34
	ldr r1, [pc, #44]	@ 0011be34 0b49
.org 0x11be36
	adds r0, r5, r1	@ 0011be36 6818
.org 0x11be38
	ldr r1, [pc, #44]	@ 0011be38 0b49
.org 0x11be3a
	adds r2, r6, #0	@ 0011be3a 321c
.org 0x11be3c
	adds r2, #240	@ 0011be3c f032
.org 0x11be3e
	ldrb r2, [r2, #0]	@ 0011be3e 1278
.org 0x11be40
	adds r2, #23	@ 0011be40 1732
.org 0x11be42
	lsls r2, r2, #24	@ 0011be42 1206
.org 0x11be44
	lsrs r2, r2, #24	@ 0011be44 120e
.org 0x11be46
	str r4, [sp, #0]	@ 0011be46 0094
.org 0x11be48
	movs r3, #0	@ 0011be48 0023
.org 0x11be4a
	bl 0x27b8	@ 0011be4a e6f6b5fc
.org 0x11be4e
	b.n 0x11be7c	@ 0011be4e 15e0
.org 0x11be50
	.byte 0xa8,0x63,0x00,0x00	@ 0011be50 data
.org 0x11be54
	.byte 0xe4,0x0d,0x00,0x00	@ 0011be54 data
.org 0x11be58
	.byte 0xcc,0xc1,0xb6,0x08	@ 0011be58 data
.org 0x11be5c
	.byte 0x06,0x0a,0x00,0x02	@ 0011be5c data
.org 0x11be60
	.byte 0xd8,0xc1,0xb6,0x08	@ 0011be60 data
.org 0x11be64
	.byte 0xd8,0x16,0x00,0x00	@ 0011be64 data
.org 0x11be68
	.byte 0x00,0xc0,0xb2,0x08	@ 0011be68 data
.org 0x11be6c
	ldr r2, [pc, #256]	@ 0011be6c 404a
.org 0x11be6e
	adds r0, r5, r2	@ 0011be6e a818
.org 0x11be70
	ldr r1, [pc, #256]	@ 0011be70 4049
.org 0x11be72
	str r4, [sp, #0]	@ 0011be72 0094
.org 0x11be74
	movs r2, #23	@ 0011be74 1722
.org 0x11be76
	movs r3, #0	@ 0011be76 0023
.org 0x11be78
	bl 0x27b8	@ 0011be78 e6f69efc
.org 0x11be7c
	ldr r1, [pc, #248]	@ 0011be7c 3e49
.org 0x11be7e
	adds r0, r5, r1	@ 0011be7e 6818
.org 0x11be80
	ldr r1, [pc, #248]	@ 0011be80 3e49
.org 0x11be82
	ldrh r2, [r1, #0]	@ 0011be82 0a88
.org 0x11be84
	movs r1, #248	@ 0011be84 f821
.org 0x11be86
	lsls r1, r1, #5	@ 0011be86 4901
.org 0x11be88
	ands r1, r2	@ 0011be88 1140
.org 0x11be8a
	lsls r1, r1, #3	@ 0011be8a c900
.org 0x11be8c
	movs r2, #128	@ 0011be8c 8022
.org 0x11be8e
	lsls r2, r2, #5	@ 0011be8e 5201
.org 0x11be90
	bl 0x1f1c	@ 0011be90 e6f644f8
.org 0x11be94
	ldr r0, [pc, #232]	@ 0011be94 3a48
.org 0x11be96
	ldr r1, [pc, #236]	@ 0011be96 3b49
.org 0x11be98
	adds r1, #132	@ 0011be98 8431
.org 0x11be9a
	ldrh r1, [r1, #0]	@ 0011be9a 0988
.org 0x11be9c
	ldrh r2, [r0, #6]	@ 0011be9c c288
.org 0x11be9e
	lsrs r2, r2, #6	@ 0011be9e 9209
.org 0x11bea0
	subs r1, r1, r2	@ 0011bea0 891a
.org 0x11bea2
	lsls r1, r1, #5	@ 0011bea2 4901
.org 0x11bea4
	movs r2, #128	@ 0011bea4 8022
.org 0x11bea6
	lsls r2, r2, #9	@ 0011bea6 5202
.org 0x11bea8
	adds r1, r1, r2	@ 0011bea8 8918
.org 0x11beaa
	bl 0x1d30	@ 0011beaa e5f641ff
.org 0x11beae
	ldr r0, [pc, #216]	@ 0011beae 3648
.org 0x11beb0
	ldr r1, [pc, #216]	@ 0011beb0 3649
.org 0x11beb2
	adds r1, #132	@ 0011beb2 8431
.org 0x11beb4
	ldrh r1, [r1, #0]	@ 0011beb4 0988
.org 0x11beb6
	ldrb r2, [r0, #7]	@ 0011beb6 c279
.org 0x11beb8
	subs r1, r1, r2	@ 0011beb8 891a
.org 0x11beba
	lsls r1, r1, #5	@ 0011beba 4901
.org 0x11bebc
	movs r2, #128	@ 0011bebc 8022
.org 0x11bebe
	lsls r2, r2, #2	@ 0011bebe 9200
.org 0x11bec0
	adds r1, r1, r2	@ 0011bec0 8918
.org 0x11bec2
	bl 0x2208	@ 0011bec2 e6f6a1f9
.org 0x11bec6
	adds r0, r6, #0	@ 0011bec6 301c
.org 0x11bec8
	adds r0, #245	@ 0011bec8 f530
.org 0x11beca
	ldrb r0, [r0, #0]	@ 0011beca 0078
.org 0x11becc
	cmp r0, #255	@ 0011becc ff28
.org 0x11bece
	beq.n 0x11bf4e	@ 0011bece 3ed0
.org 0x11bed0
	ldr r0, [pc, #188]	@ 0011bed0 2f48
.org 0x11bed2
	adds r4, r5, r0	@ 0011bed2 2c18
.org 0x11bed4
	adds r0, r5, #0	@ 0011bed4 281c
.org 0x11bed6
	adds r1, r4, #0	@ 0011bed6 211c
.org 0x11bed8
	movs r2, #0	@ 0011bed8 0022
.org 0x11beda
	movs r3, #0	@ 0011beda 0023
.org 0x11bedc
	bl 0x10b708	@ 0011bedc eff714fc
.org 0x11bee0
	adds r0, r5, #0	@ 0011bee0 281c
.org 0x11bee2
	adds r1, r4, #0	@ 0011bee2 211c
.org 0x11bee4
	movs r2, #0	@ 0011bee4 0022
.org 0x11bee6
	movs r3, #1	@ 0011bee6 0123
.org 0x11bee8
	bl 0x10b708	@ 0011bee8 eff70efc
.org 0x11beec
	adds r0, r5, #0	@ 0011beec 281c
.org 0x11beee
	adds r1, r4, #0	@ 0011beee 211c
.org 0x11bef0
	movs r2, #0	@ 0011bef0 0022
.org 0x11bef2
	movs r3, #2	@ 0011bef2 0223
.org 0x11bef4
	bl 0x10b708	@ 0011bef4 eff708fc
.org 0x11bef8
	adds r0, r5, #0	@ 0011bef8 281c
.org 0x11befa
	adds r1, r4, #0	@ 0011befa 211c
.org 0x11befc
	movs r2, #3	@ 0011befc 0322
.org 0x11befe
	movs r3, #0	@ 0011befe 0023
.org 0x11bf00
	bl 0x10b708	@ 0011bf00 eff702fc
.org 0x11bf04
	movs r4, #0	@ 0011bf04 0024
.org 0x11bf06
	adds r0, r6, #0	@ 0011bf06 301c
.org 0x11bf08
	adds r0, #240	@ 0011bf08 f030
.org 0x11bf0a
	adds r7, r0, #0	@ 0011bf0a 071c
.org 0x11bf0c
	ldrb r1, [r7, #0]	@ 0011bf0c 3978
.org 0x11bf0e
	cmp r4, r1	@ 0011bf0e 8c42
.org 0x11bf10
	bcs.n 0x11bf4e	@ 0011bf10 1dd2
.org 0x11bf12
	ldr r2, [pc, #124]	@ 0011bf12 1f4a
.org 0x11bf14
	adds r6, r5, r2	@ 0011bf14 ae18
.org 0x11bf16
	adds r0, r5, #0	@ 0011bf16 281c
.org 0x11bf18
	adds r1, r6, #0	@ 0011bf18 311c
.org 0x11bf1a
	movs r2, #1	@ 0011bf1a 0122
.org 0x11bf1c
	adds r3, r4, #0	@ 0011bf1c 231c
.org 0x11bf1e
	bl 0x10b708	@ 0011bf1e eff7f3fb
.org 0x11bf22
	movs r0, #16	@ 0011bf22 1020
.org 0x11bf24
	adds r3, r4, #0	@ 0011bf24 231c
.org 0x11bf26
	orrs r3, r0	@ 0011bf26 0343
.org 0x11bf28
	adds r0, r5, #0	@ 0011bf28 281c
.org 0x11bf2a
	adds r1, r6, #0	@ 0011bf2a 311c
.org 0x11bf2c
	movs r2, #1	@ 0011bf2c 0122
.org 0x11bf2e
	bl 0x10b708	@ 0011bf2e eff7ebfb
.org 0x11bf32
	movs r0, #32	@ 0011bf32 2020
.org 0x11bf34
	adds r3, r4, #0	@ 0011bf34 231c
.org 0x11bf36
	orrs r3, r0	@ 0011bf36 0343
.org 0x11bf38
	adds r0, r5, #0	@ 0011bf38 281c
.org 0x11bf3a
	adds r1, r6, #0	@ 0011bf3a 311c
.org 0x11bf3c
	movs r2, #1	@ 0011bf3c 0122
.org 0x11bf3e
	bl 0x10b708	@ 0011bf3e eff7e3fb
.org 0x11bf42
	adds r0, r4, #1	@ 0011bf42 601c
.org 0x11bf44
	lsls r0, r0, #24	@ 0011bf44 0006
.org 0x11bf46
	lsrs r4, r0, #24	@ 0011bf46 040e
.org 0x11bf48
	ldrb r0, [r7, #0]	@ 0011bf48 3878
.org 0x11bf4a
	cmp r4, r0	@ 0011bf4a 8442
.org 0x11bf4c
	bcc.n 0x11bf16	@ 0011bf4c e3d3
.org 0x11bf4e
	ldr r2, [pc, #64]	@ 0011bf4e 104a
.org 0x11bf50
	adds r1, r5, r2	@ 0011bf50 a918
.org 0x11bf52
	adds r0, r5, #0	@ 0011bf52 281c
