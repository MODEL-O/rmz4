@ FUN_08062fc8  entry 0x08062fc8  size 162
.thumb
.org 0x62fc8
FUN_08062fc8:
	push {r4, r5, r6, lr}	@ 00062fc8 70b5
.org 0x62fca
	adds r6, r0, #0	@ 00062fca 061c
.org 0x62fcc
	ldrb r0, [r6, #15]	@ 00062fcc f07b
.org 0x62fce
	cmp r0, #0	@ 00062fce 0028
.org 0x62fd0
	bne.n 0x62fec	@ 00062fd0 0cd1
.org 0x62fd2
	movs r0, #132	@ 00062fd2 8420
.org 0x62fd4
	lsls r0, r0, #1	@ 00062fd4 4000
.org 0x62fd6
	bl 0x2b10	@ 00062fd6 9ff79bfd
.org 0x62fda
	adds r0, r6, #0	@ 00062fda 301c
.org 0x62fdc
	movs r1, #8	@ 00062fdc 0821
.org 0x62fde
	bl 0x65a94	@ 00062fde 02f059fd
.org 0x62fe2
	movs r0, #16	@ 00062fe2 1020
.org 0x62fe4
	strb r0, [r6, #18]	@ 00062fe4 b074
.org 0x62fe6
	ldrb r0, [r6, #15]	@ 00062fe6 f07b
.org 0x62fe8
	adds r0, #1	@ 00062fe8 0130
.org 0x62fea
	strb r0, [r6, #15]	@ 00062fea f073
.org 0x62fec
	adds r0, r6, #0	@ 00062fec 301c
.org 0x62fee
	bl 0x1cff0	@ 00062fee b9f7ffff
.org 0x62ff2
	adds r0, r6, #0	@ 00062ff2 301c
.org 0x62ff4
	adds r0, #116	@ 00062ff4 7430
.org 0x62ff6
	ldr r4, [pc, #116]	@ 00062ff6 1d4c
.org 0x62ff8
	ldr r3, [pc, #116]	@ 00062ff8 1d4b
.org 0x62ffa
	adds r1, r6, #0	@ 00062ffa 311c
.org 0x62ffc
	adds r1, #180	@ 00062ffc b431
.org 0x62ffe
	ldrb r2, [r1, #0]	@ 00062ffe 0a78
.org 0x63000
	lsls r1, r2, #1	@ 00063000 5100
.org 0x63002
	adds r1, r1, r3	@ 00063002 c918
.org 0x63004
	ldrh r1, [r1, #0]	@ 00063004 0988
.org 0x63006
	lsls r1, r1, #2	@ 00063006 8900
.org 0x63008
	adds r1, r1, r4	@ 00063008 0919
.org 0x6300a
	adds r3, r6, #0	@ 0006300a 331c
.org 0x6300c
	adds r3, #113	@ 0006300c 7133
.org 0x6300e
	movs r5, #0	@ 0006300e 0025
.org 0x63010
	ldrsb r5, [r3, r5]	@ 00063010 5d57
.org 0x63012
	ldr r1, [r1, #0]	@ 00063012 0968
.org 0x63014
	lsls r3, r5, #2	@ 00063014 ab00
.org 0x63016
	adds r3, r3, r1	@ 00063016 5b18
.org 0x63018
	ldr r4, [pc, #88]	@ 00063018 164c
.org 0x6301a
	adds r1, r6, #0	@ 0006301a 311c
.org 0x6301c
	adds r1, #181	@ 0006301c b531
.org 0x6301e
	ldrb r1, [r1, #0]	@ 0006301e 0978
.org 0x63020
	lsls r1, r1, #2	@ 00063020 8900
.org 0x63022
	adds r1, r1, r4	@ 00063022 0919
.org 0x63024
	ldr r1, [r1, #0]	@ 00063024 0968
.org 0x63026
	lsls r2, r2, #2	@ 00063026 9200
.org 0x63028
	adds r2, r2, r1	@ 00063028 5218
.org 0x6302a
	ldr r1, [r2, #0]	@ 0006302a 1168
.org 0x6302c
	adds r1, r1, r5	@ 0006302c 4919
.org 0x6302e
	ldrb r1, [r1, #0]	@ 0006302e 0978
.org 0x63030
	lsls r2, r1, #1	@ 00063030 4a00
.org 0x63032
	adds r2, r2, r1	@ 00063032 5218
.org 0x63034
	lsls r2, r2, #3	@ 00063034 d200
.org 0x63036
	ldr r1, [r3, #0]	@ 00063036 1968
.org 0x63038
	adds r1, r1, r2	@ 00063038 8918
.org 0x6303a
	bl 0x5784	@ 0006303a a2f7a3fb
.org 0x6303e
	adds r0, r6, #0	@ 0006303e 301c
.org 0x63040
	adds r0, #200	@ 00063040 c830
.org 0x63042
	ldr r0, [r0, #0]	@ 00063042 0068
.org 0x63044
	cmp r0, #0	@ 00063044 0028
.org 0x63046
	beq.n 0x63050	@ 00063046 03d0
.org 0x63048
	adds r0, #189	@ 00063048 bd30
.org 0x6304a
	ldrb r0, [r0, #0]	@ 0006304a 0078
.org 0x6304c
	cmp r0, #0	@ 0006304c 0028
.org 0x6304e
	beq.n 0x63064	@ 0006304e 09d0
.org 0x63050
	ldrb r0, [r6, #18]	@ 00063050 b07c
.org 0x63052
	subs r0, #1	@ 00063052 0138
.org 0x63054
	strb r0, [r6, #18]	@ 00063054 b074
.org 0x63056
	lsls r0, r0, #24	@ 00063056 0006
.org 0x63058
	lsrs r1, r0, #24	@ 00063058 010e
.org 0x6305a
	cmp r1, #0	@ 0006305a 0029
.org 0x6305c
	bne.n 0x63064	@ 0006305c 02d1
.org 0x6305e
	movs r0, #3	@ 0006305e 0320
.org 0x63060
	strb r0, [r6, #14]	@ 00063060 b073
.org 0x63062
	strb r1, [r6, #15]	@ 00063062 f173
.org 0x63064
	pop {r4, r5, r6}	@ 00063064 70bc
.org 0x63066
	pop {r0}	@ 00063066 01bc
.org 0x63068
	bx r0	@ 00063068 0047
