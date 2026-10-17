@ FUN_08077a78  entry 0x08077a78  size 132
.thumb
.org 0x77a78
FUN_08077a78:
	push {r4, lr}	@ 00077a78 10b5
.org 0x77a7a
	adds r4, r0, #0	@ 00077a7a 041c
.org 0x77a7c
	ldrb r0, [r4, #15]	@ 00077a7c e07b
.org 0x77a7e
	cmp r0, #0	@ 00077a7e 0028
.org 0x77a80
	bne.n 0x77aa6	@ 00077a80 11d1
.org 0x77a82
	adds r2, r4, #0	@ 00077a82 221c
.org 0x77a84
	adds r2, #200	@ 00077a84 c832
.org 0x77a86
	ldr r0, [r2, #0]	@ 00077a86 1068
.org 0x77a88
	adds r0, #181	@ 00077a88 b530
.org 0x77a8a
	movs r1, #1	@ 00077a8a 0121
.org 0x77a8c
	strb r1, [r0, #0]	@ 00077a8c 0170
.org 0x77a8e
	ldr r0, [r2, #0]	@ 00077a8e 1068
.org 0x77a90
	adds r0, #182	@ 00077a90 b630
.org 0x77a92
	strb r1, [r0, #0]	@ 00077a92 0170
.org 0x77a94
	adds r0, r4, #0	@ 00077a94 201c
.org 0x77a96
	movs r1, #0	@ 00077a96 0021
.org 0x77a98
	bl 0x78fdc	@ 00077a98 01f0a0fa
.org 0x77a9c
	movs r0, #64	@ 00077a9c 4020
.org 0x77a9e
	strb r0, [r4, #18]	@ 00077a9e a074
.org 0x77aa0
	ldrb r0, [r4, #15]	@ 00077aa0 e07b
.org 0x77aa2
	adds r0, #1	@ 00077aa2 0130
.org 0x77aa4
	strb r0, [r4, #15]	@ 00077aa4 e073
.org 0x77aa6
	adds r0, r4, #0	@ 00077aa6 201c
.org 0x77aa8
	bl 0x1cff0	@ 00077aa8 a5f7a2fa
.org 0x77aac
	adds r0, r4, #0	@ 00077aac 201c
.org 0x77aae
	adds r0, #116	@ 00077aae 7430
.org 0x77ab0
	ldr r3, [pc, #72]	@ 00077ab0 124b
.org 0x77ab2
	ldr r2, [pc, #76]	@ 00077ab2 134a
.org 0x77ab4
	adds r1, r4, #0	@ 00077ab4 211c
.org 0x77ab6
	adds r1, #196	@ 00077ab6 c431
.org 0x77ab8
	ldrb r1, [r1, #0]	@ 00077ab8 0978
.org 0x77aba
	lsls r1, r1, #1	@ 00077aba 4900
.org 0x77abc
	adds r1, r1, r2	@ 00077abc 8918
.org 0x77abe
	ldrh r2, [r1, #0]	@ 00077abe 0a88
.org 0x77ac0
	lsls r2, r2, #2	@ 00077ac0 9200
.org 0x77ac2
	adds r2, r2, r3	@ 00077ac2 d218
.org 0x77ac4
	adds r1, r4, #0	@ 00077ac4 211c
.org 0x77ac6
	adds r1, #113	@ 00077ac6 7131
.org 0x77ac8
	ldrb r1, [r1, #0]	@ 00077ac8 0978
.org 0x77aca
	lsls r1, r1, #24	@ 00077aca 0906
.org 0x77acc
	asrs r1, r1, #24	@ 00077acc 0916
.org 0x77ace
	ldr r2, [r2, #0]	@ 00077ace 1268
.org 0x77ad0
	lsls r1, r1, #2	@ 00077ad0 8900
.org 0x77ad2
	adds r1, r1, r2	@ 00077ad2 8918
.org 0x77ad4
	ldr r1, [r1, #0]	@ 00077ad4 0968
.org 0x77ad6
	bl 0x5784	@ 00077ad6 8df755fe
.org 0x77ada
	adds r0, r4, #0	@ 00077ada 201c
.org 0x77adc
	bl 0x78f28	@ 00077adc 01f024fa
.org 0x77ae0
	ldrb r0, [r4, #18]	@ 00077ae0 a07c
.org 0x77ae2
	subs r0, #1	@ 00077ae2 0138
.org 0x77ae4
	strb r0, [r4, #18]	@ 00077ae4 a074
.org 0x77ae6
	lsls r0, r0, #24	@ 00077ae6 0006
.org 0x77ae8
	lsrs r1, r0, #24	@ 00077ae8 010e
.org 0x77aea
	cmp r1, #0	@ 00077aea 0029
.org 0x77aec
	bne.n 0x77af6	@ 00077aec 03d1
.org 0x77aee
	ldrb r0, [r4, #14]	@ 00077aee a07b
.org 0x77af0
	adds r0, #1	@ 00077af0 0130
.org 0x77af2
	strb r0, [r4, #14]	@ 00077af2 a073
.org 0x77af4
	strb r1, [r4, #15]	@ 00077af4 e173
.org 0x77af6
	pop {r4}	@ 00077af6 10bc
.org 0x77af8
	pop {r0}	@ 00077af8 01bc
.org 0x77afa
	bx r0	@ 00077afa 0047
