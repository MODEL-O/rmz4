@ FUN_0804cc9c  entry 0x0804cc9c  size 226
.thumb
.org 0x4cc9c
FUN_0804cc9c:
	push {r4, r5, lr}	@ 0004cc9c 30b5
.org 0x4cc9e
	adds r5, r0, #0	@ 0004cc9e 051c
.org 0x4cca0
	adds r4, r1, #0	@ 0004cca0 0c1c
.org 0x4cca2
	ldr r0, [pc, #64]	@ 0004cca2 1048
.org 0x4cca4
	ldr r0, [r0, #0]	@ 0004cca4 0068
.org 0x4cca6
	bl 0x5500	@ 0004cca6 b8f72bfc
.org 0x4ccaa
	adds r3, r0, #0	@ 0004ccaa 031c
.org 0x4ccac
	cmp r3, #0	@ 0004ccac 002b
.org 0x4ccae
	beq.n 0x4cd94	@ 0004ccae 71d0
.org 0x4ccb0
	adds r0, r5, #0	@ 0004ccb0 281c
.org 0x4ccb2
	adds r0, #248	@ 0004ccb2 f830
.org 0x4ccb4
	ldrb r0, [r0, #0]	@ 0004ccb4 0078
.org 0x4ccb6
	cmp r0, #2	@ 0004ccb6 0228
.org 0x4ccb8
	bne.n 0x4ccf4	@ 0004ccb8 1cd1
.org 0x4ccba
	ldr r0, [pc, #44]	@ 0004ccba 0b48
.org 0x4ccbc
	movs r1, #46	@ 0004ccbc 2e21
.org 0x4ccbe
	strb r1, [r3, #9]	@ 0004ccbe 5972
.org 0x4ccc0
	adds r0, #184	@ 0004ccc0 b830
.org 0x4ccc2
	ldr r0, [r0, #0]	@ 0004ccc2 0068
.org 0x4ccc4
	ldr r0, [r0, #0]	@ 0004ccc4 0068
.org 0x4ccc6
	str r0, [r3, #20]	@ 0004ccc6 5861
.org 0x4ccc8
	ldrb r1, [r3, #11]	@ 0004ccc8 d97a
.org 0x4ccca
	movs r0, #191	@ 0004ccca bf20
.org 0x4cccc
	ands r0, r1	@ 0004cccc 0840
.org 0x4ccce
	strb r0, [r3, #11]	@ 0004ccce d872
.org 0x4ccd0
	adds r1, r3, #0	@ 0004ccd0 191c
.org 0x4ccd2
	adds r1, #37	@ 0004ccd2 2531
.org 0x4ccd4
	movs r0, #16	@ 0004ccd4 1020
.org 0x4ccd6
	strb r0, [r1, #0]	@ 0004ccd6 0870
.org 0x4ccd8
	ldr r0, [pc, #16]	@ 0004ccd8 0448
.org 0x4ccda
	ldrh r0, [r0, #0]	@ 0004ccda 0088
.org 0x4ccdc
	strh r0, [r3, #32]	@ 0004ccdc 1884
.org 0x4ccde
	ldr r0, [pc, #16]	@ 0004ccde 0448
.org 0x4cce0
	ldrb r0, [r0, #0]	@ 0004cce0 0078
.org 0x4cce2
	b.n 0x4cd1c	@ 0004cce2 1be0
.org 0x4cce4
	.byte 0x88,0xed,0x02,0x02	@ 0004cce4 data
.org 0x4cce8
	.byte 0xf8,0x39,0x85,0x08	@ 0004cce8 data
.org 0x4ccec
	.byte 0xfc,0x36,0x85,0x08	@ 0004ccec data
.org 0x4ccf0
	.byte 0x04,0x37,0x85,0x08	@ 0004ccf0 data
.org 0x4ccf4
	ldr r0, [pc, #72]	@ 0004ccf4 1248
.org 0x4ccf6
	movs r1, #46	@ 0004ccf6 2e21
.org 0x4ccf8
	strb r1, [r3, #9]	@ 0004ccf8 5972
.org 0x4ccfa
	adds r0, #184	@ 0004ccfa b830
.org 0x4ccfc
	ldr r0, [r0, #0]	@ 0004ccfc 0068
.org 0x4ccfe
	ldr r0, [r0, #0]	@ 0004ccfe 0068
.org 0x4cd00
	str r0, [r3, #20]	@ 0004cd00 5861
.org 0x4cd02
	ldrb r1, [r3, #11]	@ 0004cd02 d97a
.org 0x4cd04
	movs r0, #191	@ 0004cd04 bf20
.org 0x4cd06
	ands r0, r1	@ 0004cd06 0840
.org 0x4cd08
	strb r0, [r3, #11]	@ 0004cd08 d872
.org 0x4cd0a
	adds r1, r3, #0	@ 0004cd0a 191c
.org 0x4cd0c
	adds r1, #37	@ 0004cd0c 2531
.org 0x4cd0e
	movs r0, #16	@ 0004cd0e 1020
.org 0x4cd10
	strb r0, [r1, #0]	@ 0004cd10 0870
.org 0x4cd12
	ldr r0, [pc, #48]	@ 0004cd12 0c48
.org 0x4cd14
	ldrh r0, [r0, #2]	@ 0004cd14 4088
.org 0x4cd16
	strh r0, [r3, #32]	@ 0004cd16 1884
.org 0x4cd18
	ldr r0, [pc, #44]	@ 0004cd18 0b48
.org 0x4cd1a
	ldrb r0, [r0, #1]	@ 0004cd1a 4078
.org 0x4cd1c
	subs r1, #3	@ 0004cd1c 0339
.org 0x4cd1e
	strb r0, [r1, #0]	@ 0004cd1e 0870
.org 0x4cd20
	str r4, [r3, #40]	@ 0004cd20 9c62
.org 0x4cd22
	str r5, [r3, #44]	@ 0004cd22 dd62
.org 0x4cd24
	movs r0, #0	@ 0004cd24 0020
.org 0x4cd26
	strb r0, [r3, #16]	@ 0004cd26 1874
.org 0x4cd28
	strb r0, [r3, #17]	@ 0004cd28 5874
.org 0x4cd2a
	ldrb r0, [r4, #10]	@ 0004cd2a a07a
.org 0x4cd2c
	lsrs r2, r0, #4	@ 0004cd2c 0209
.org 0x4cd2e
	movs r0, #1	@ 0004cd2e 0120
.org 0x4cd30
	ands r2, r0	@ 0004cd30 0240
.org 0x4cd32
	cmp r2, #0	@ 0004cd32 002a
.org 0x4cd34
	beq.n 0x4cd4c	@ 0004cd34 0ad0
.org 0x4cd36
	ldrb r0, [r3, #10]	@ 0004cd36 987a
.org 0x4cd38
	movs r1, #16	@ 0004cd38 1021
.org 0x4cd3a
	orrs r0, r1	@ 0004cd3a 0843
.org 0x4cd3c
	b.n 0x4cd52	@ 0004cd3c 09e0
.org 0x4cd3e
	.byte 0x00	@ 0004cd3e data
.org 0x4cd3f
	.byte 0x00	@ 0004cd3f data
.org 0x4cd40
	.byte 0xf8,0x39,0x85,0x08	@ 0004cd40 data
.org 0x4cd44
	.byte 0xfc,0x36,0x85,0x08	@ 0004cd44 data
.org 0x4cd48
	.byte 0x04,0x37,0x85,0x08	@ 0004cd48 data
.org 0x4cd4c
	ldrb r1, [r3, #10]	@ 0004cd4c 997a
.org 0x4cd4e
	movs r0, #239	@ 0004cd4e ef20
.org 0x4cd50
	ands r0, r1	@ 0004cd50 0840
.org 0x4cd52
	strb r0, [r3, #10]	@ 0004cd52 9872
.org 0x4cd54
	adds r1, r2, #0	@ 0004cd54 111c
.org 0x4cd56
	adds r0, r3, #0	@ 0004cd56 181c
.org 0x4cd58
	adds r0, #76	@ 0004cd58 4c30
.org 0x4cd5a
	strb r1, [r0, #0]	@ 0004cd5a 0170
.org 0x4cd5c
	movs r0, #74	@ 0004cd5c 4a20
.org 0x4cd5e
	adds r0, r0, r3	@ 0004cd5e c018
.org 0x4cd60
	mov ip, r0	@ 0004cd60 8446
.org 0x4cd62
	lsls r1, r1, #4	@ 0004cd62 0901
.org 0x4cd64
	ldrb r2, [r0, #0]	@ 0004cd64 0278
.org 0x4cd66
	movs r0, #17	@ 0004cd66 1120
.org 0x4cd68
	negs r0, r0	@ 0004cd68 4042
.org 0x4cd6a
	ands r0, r2	@ 0004cd6a 1040
.org 0x4cd6c
	orrs r0, r1	@ 0004cd6c 0843
.org 0x4cd6e
	mov r1, ip	@ 0004cd6e 6146
.org 0x4cd70
	strb r0, [r1, #0]	@ 0004cd70 0870
.org 0x4cd72
	ldrb r1, [r3, #10]	@ 0004cd72 997a
.org 0x4cd74
	movs r0, #16	@ 0004cd74 1020
.org 0x4cd76
	ands r0, r1	@ 0004cd76 0840
.org 0x4cd78
	cmp r0, #0	@ 0004cd78 0028
.org 0x4cd7a
	beq.n 0x4cd84	@ 0004cd7a 03d0
.org 0x4cd7c
	ldr r0, [r4, #84]	@ 0004cd7c 606d
